import astar_pkg::*;

module heap (
    input  logic                  CLK,
    input  logic                  RSTn,
    // Inputs
    input  logic                  i_wrt,    // Write/insert command
    input  logic                  i_read,   // Read/pop command
    input  node_pq_t              i_data,   // Input data
    // Outputs
    output logic                  o_full,   // High if the heap is full
    output logic                  o_empty,  // High if the heap is empty
    output node_pq_t              o_data,   // Output data (Root node)
    output logic                  o_ready   // Stall if we are still propagating/rebalancing
);

  typedef enum logic [3:0] {
    IDLE           = 4'd0,
    // Enqueue 
    ENQUEUE_COMPARE_ROOT    = 4'd1,
    ENQUEUE_READ_CHILD      = 4'd2,
    ENQUEUE_COMPARE_CHILD   = 4'd3,
    // Dequeue
    DEQUEUE_READ_ROOT_CHILDREN = 4'd4,
    DEQUEUE_COMPARE_ROOT    = 4'd5,
    DEQUEUE_READ_CHILD      = 4'd6,
    DEQUEUE_COMPARE_CHILD   = 4'd7,
    // Replace
    REPLACE_READ_ROOT    = 4'd8,
    REPLACE_COMPARE_ROOT = 4'd9,
    REPLACE_READ_CHILD   = 4'd10,
    REPLACE_COMPARE_CHILD = 4'd11
  } state_t;

  state_t state, next_state;
  bram_tree_curr_t curr, next;
  bram_tree_mem_t  top_level, next_top_level;
  logic [HEAP_ADDR_WIDTH:0] parent_idx, child_idx_left, child_idx_right;
  logic [BRAM_ADDR_WIDTH-1:0] queue_size, next_queue_size;

  // BRAM signals
  logic [HEAP_ADDR_WIDTH-1:0] addr_a;
  logic [HEAP_ADDR_WIDTH-1:0] addr_b;
  bram_tree_mem_t     din_a;
  bram_tree_mem_t     din_b;
  logic                     we_a;
  logic                     we_b;
  bram_tree_mem_t     dout_a;
  bram_tree_mem_t     dout_b;
  logic [COST_WIDTH-1:0] second_smallest, next_second_smallest;  // tracks only the .f of the second-best candidate

  rams_tdp_rf_rf bram_inst (
    .clka (CLK), .ena(1'b1), .wea(we_a), .addra(addr_a), .dia(din_a), .doa(dout_a),
    .clkb (CLK), .enb(1'b1), .web(we_b), .addrb(addr_b), .dib(din_b), .dob(dout_b)
  );

  always_ff @(posedge CLK or negedge RSTn) begin : fsm_seq
    if (!RSTn) begin
      state         <= IDLE;
      queue_size    <= 0;
      curr      <= '0;
      second_smallest <= '0;
      top_level       <= '{node_data: '{f: '1, default: '0}, capacity: BRAM_TREE_QUEUE_SIZE, default: 0};
    end else begin
      state         <= next_state;
      queue_size    <= next_queue_size;
      curr      <= next;
      second_smallest <= next_second_smallest;
      top_level <= next_top_level;
    end
  end

  always_comb begin : fsm_comb
    next_state       = state;
    next_queue_size  = queue_size;
    next         = curr;
    addr_a = 1'b0;
    addr_b = 1'b0;
    din_a = 1'b0;
    din_b = 1'b0;
    we_a        = 1'b0;
    we_b        = 1'b0;
    next_second_smallest = second_smallest;
    next_top_level      = top_level;

    parent_idx = (curr.position - 1) >> 1;
    child_idx_left  = curr.position * 2 + 1;
    child_idx_right = curr.position * 2 + 2;

    case (state)
      IDLE: begin
        if (i_wrt && !i_read && !o_full) begin // --- ENQUEUE ---
          if (queue_size == 0) begin
            next_top_level = '{active: 1, node_data: i_data, capacity: BRAM_TREE_QUEUE_SIZE - 1};
            next_state = IDLE;
          end else begin
            if (i_data.f < top_level.node_data.f) begin
              next_top_level = '{active: 1, node_data: i_data, capacity: top_level.capacity-1};
              next = '{node_data: top_level.node_data, position: '0, capacity: top_level.capacity-1};
              next_second_smallest = top_level.node_data.f;
            end else begin
              next_top_level = '{active: 1, node_data: top_level.node_data , capacity: top_level.capacity-1};
              next = '{node_data: i_data, position: 0, capacity: top_level.capacity-1};
            end
            addr_a = 1;
            addr_b = 2;
            next_state = ENQUEUE_COMPARE_CHILD;
          end
          next_queue_size = queue_size + 1;
        end else if (!i_wrt && i_read && !o_empty) begin // --- DEQUEUE ---
          if (second_smallest < top_level.node_data.f) begin
            //the second_smallest should not be less than the smallest... can happen is queue_size is 1
            next_top_level = '{active: 0, node_data: '{f: '1, default: '0}, capacity: top_level.capacity+1};
          end else begin
            next_top_level = '{active: 0, node_data: '{f: second_smallest, default: '0}, capacity: top_level.capacity+1};
          end
          next = '{node_data: '{f: '1, default: '0}, position: 0, capacity: top_level.capacity+1};
          addr_a = 1;
          addr_b = 2;
          next_queue_size = queue_size - 1;
          next_state = DEQUEUE_COMPARE_ROOT;
        end else if (i_wrt && i_read) begin // --- REPLACE ---
          next = '{node_data: i_data, position: 0, capacity: (o_empty)  ? top_level.capacity+1 : top_level.capacity};
          if (queue_size == 0) begin
            next_top_level = '{active: 1, node_data: i_data, capacity: top_level.capacity+1};
            next_state = IDLE;
          end else begin
            if (i_data.f < second_smallest) begin
              // new root beats even the second-best candidate, so it's guaranteed <= both children too - skip straight to IDLE
              next_top_level = '{active: 1, node_data: i_data, capacity: top_level.capacity};
              next_state = IDLE;
            end else begin
              next_top_level = '{active: 0, node_data: '{f: second_smallest, default: '0}, capacity: top_level.capacity};
              next_state = REPLACE_COMPARE_ROOT;
            end
          end
          addr_a = 1;
          addr_b = 2;
          next_queue_size = (o_empty) ? queue_size + 1 : queue_size;
        end
      end

      ENQUEUE_READ_CHILD: begin
        //read child_idx_left and child_idx_right
        addr_a = child_idx_left;
        addr_b = child_idx_right;
        next_state = ENQUEUE_COMPARE_CHILD;
      end

      ENQUEUE_COMPARE_CHILD: begin
        //if inactive we write into it, if active we check, if smaller than we swap, if greater than we traverse down the cheaper route
        if (!dout_a.active && (dout_a.capacity > 0)) begin
          //Write into left
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, node_data: curr.node_data, capacity: dout_a.capacity - 1};
          if (curr.node_data.f < second_smallest) next_second_smallest = curr.node_data.f;
          next_state = IDLE;
        end else if (!dout_b.active && (dout_b.capacity > 0)) begin
          //Write into right
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, node_data: curr.node_data, capacity: dout_b.capacity - 1};
          if (curr.node_data.f < second_smallest) next_second_smallest = curr.node_data.f;
          next_state = IDLE;
        end else if (dout_a.active && (dout_a.capacity > 0) && (curr.node_data.f >= dout_a.node_data.f)) begin
          // Check children of left next
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, node_data: dout_a.node_data, capacity: dout_a.capacity - 1};
          if (dout_a.node_data.f < second_smallest) next_second_smallest = dout_a.node_data.f;
          next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_b.active && (dout_b.capacity > 0) && (curr.node_data.f >= dout_b.node_data.f)) begin
          // Check children of right next
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, node_data: dout_b.node_data, capacity: dout_b.capacity - 1}; 
          if (dout_b.node_data.f < second_smallest) next_second_smallest = dout_b.node_data.f;
          next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_a.active && (dout_a.capacity > 0) && (curr.node_data.f < dout_a.node_data.f) && ((dout_a.node_data.f >= dout_b.node_data.f) || (dout_b.capacity == 0))) begin
          //swap Left and Curr, check children of right
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, node_data: curr.node_data, capacity: dout_a.capacity - 1};
          if (curr.node_data.f < second_smallest) next_second_smallest = curr.node_data.f;
          next = '{node_data: dout_a.node_data, position: child_idx_left, capacity: dout_a.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_b.active && (dout_b.capacity > 0) && (curr.node_data.f < dout_b.node_data.f) && ((dout_a.node_data.f < dout_b.node_data.f) || (dout_a.capacity == 0))) begin
          //swap Right and Curr, check children of left
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, node_data: curr.node_data, capacity: dout_b.capacity - 1};
          if (curr.node_data.f < second_smallest) next_second_smallest = curr.node_data.f;
          next = '{node_data: dout_b.node_data, position: child_idx_right, capacity: dout_b.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end
      end

      DEQUEUE_COMPARE_ROOT: begin
        //if both nodes are inactive or we are at the end, we go to idle next, because this is root, we set the next min out
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE)) begin
          next_top_level = '{active: 0, node_data: '{f: '1, default: '0}, capacity: BRAM_TREE_QUEUE_SIZE};
          next_second_smallest = 0;
          next_state = IDLE;
        end else begin
          // if only one is inactive we pull that value
          if (dout_a.active && !dout_b.active) begin
            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_a.capacity + 1};

            next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity + 1};
            next_top_level = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};
          end else if (dout_b.active && !dout_a.active) begin
            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_b.capacity + 1};

            next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity + 1};
            next_top_level = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};
          end else if (dout_a.active && dout_b.active) begin
            if (dout_a.node_data.f <= dout_b.node_data.f) begin
              addr_b = child_idx_left;
              we_b = 1;
              din_b = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_a.capacity + 1};

              next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity + 1};
              next_top_level = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};
              next_second_smallest = dout_b.node_data.f;
            end else begin
              addr_a = child_idx_right;
              we_a = 1;
              din_a = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_b.capacity + 1};

              next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity + 1};
              next_top_level = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};
              next_second_smallest = dout_a.node_data.f;
            end
          end
          next_state = DEQUEUE_READ_CHILD;
        end
      end

      DEQUEUE_READ_CHILD: begin
        //read child_idx_left and child_idx_right
        if ((child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE)) begin
          next_state = IDLE;
        end else begin
          addr_a = child_idx_left;
          addr_b = child_idx_right;
          next_state = DEQUEUE_COMPARE_CHILD;
        end
      end

      DEQUEUE_COMPARE_CHILD: begin
        //if both nodes are inactive or we are at the end, we go to idle next
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE)) begin
          next_state = IDLE;
        end else begin
          // if only one is inactive we pull that value
          if (dout_a.active && !dout_b.active) begin
            addr_a = curr.position;
            we_a = 1;
            din_a = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};

            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_a.capacity + 1};

            next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity + 1};
            if (dout_a.node_data.f < second_smallest) next_second_smallest = dout_a.node_data.f;
          end else if (dout_b.active && !dout_a.active) begin
            addr_b = curr.position;
            we_b = 1;
            din_b = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};

            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_b.capacity + 1};

            next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity + 1};
            if (dout_b.node_data.f < second_smallest) next_second_smallest = dout_b.node_data.f;
          end else if (dout_a.active && dout_b.active) begin
            if (dout_a.node_data.f <= dout_b.node_data.f) begin
              addr_a = curr.position;
              we_a = 1;
              din_a = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};

              addr_b = child_idx_left;
              we_b = 1;
              din_b = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_a.capacity + 1};

              next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity + 1};
              if (dout_a.node_data.f < second_smallest) next_second_smallest = dout_a.node_data.f;
            end else begin
              addr_b = curr.position;
              we_b = 1;
              din_b = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};

              addr_a = child_idx_right;
              we_a = 1;
              din_a = '{active: 0, node_data: '{f: '1, default: '0}, capacity: dout_b.capacity + 1};

              next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity + 1};
              if (dout_b.node_data.f < second_smallest) next_second_smallest = dout_b.node_data.f;
            end
          end
          next_state = DEQUEUE_READ_CHILD;
        end
      end

      REPLACE_READ_ROOT: begin
        //get the current capacity, and then read the children
        addr_a = child_idx_left;
        addr_b = child_idx_right;
        next = '{node_data: curr.node_data, position: 0, capacity: dout_a.capacity};
        next_state = REPLACE_COMPARE_ROOT;
      end

      REPLACE_COMPARE_ROOT: begin
        //if the current node is the only node or the smallest node, we just write into it and go back to idle
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE) || ((curr.node_data.f <= dout_a.node_data.f) && (curr.node_data.f <= dout_b.node_data.f))) begin
          next_top_level = '{active: 1, node_data: curr.node_data, capacity: curr.capacity};
          next_state = IDLE;
        end else begin
          // otherwise swap with the higher priority (smaller) node
          // swap with A
          if ((dout_a.active && !dout_b.active) || (dout_a.node_data.f <= dout_b.node_data.f)) begin
            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 1, node_data: curr.node_data, capacity: dout_a.capacity};

            next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity};
            next_top_level = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};
            if (curr.node_data.f < dout_b.node_data.f) begin
              next_second_smallest = curr.node_data.f;
            end else begin
              next_second_smallest = dout_b.node_data.f;
            end
          end else if ((dout_b.active && !dout_a.active) || (dout_b.node_data.f <= dout_a.node_data.f)) begin
            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 1, node_data: curr.node_data, capacity: dout_b.capacity};

            next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity};
            next_top_level = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};
            if (curr.node_data.f < dout_a.node_data.f) begin
              next_second_smallest = curr.node_data.f;
            end else begin
              next_second_smallest = dout_a.node_data.f;
            end
          end
          next_state = REPLACE_READ_CHILD;
        end
      end

      REPLACE_READ_CHILD: begin
        //read child_idx_left and child_idx_right
        if ((child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE)) begin
          next_state = IDLE;
        end else begin
          addr_a = child_idx_left;
          addr_b = child_idx_right;
          next_state = REPLACE_COMPARE_CHILD;
        end
      end
      
      REPLACE_COMPARE_CHILD: begin
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE) || ((curr.node_data.f <= dout_a.node_data.f) && (curr.node_data.f <= dout_b.node_data.f))) begin
          addr_a = curr.position;
          we_a = 1;
          din_a = '{active: 1, node_data: curr.node_data, capacity: curr.capacity};
          next_state = IDLE;
        end else begin
          // otherwise swap with the higher priority (smaller) node
          // swap with A
          if ((dout_a.active && !dout_b.active) || (dout_a.node_data.f <= dout_b.node_data.f)) begin
            addr_a = curr.position;
            we_a = 1;
            din_a = '{active: 1, node_data: dout_a.node_data, capacity: curr.capacity};

            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 1, node_data: curr.node_data, capacity: dout_a.capacity};

            next = '{node_data: curr.node_data, position: child_idx_left, capacity: dout_a.capacity};
            if (dout_a.node_data.f < second_smallest) next_second_smallest = dout_a.node_data.f;
          end else if ((dout_b.active && !dout_a.active) || (dout_b.node_data.f <= dout_a.node_data.f)) begin
            addr_b = curr.position;
            we_b = 1;
            din_b = '{active: 1, node_data: dout_b.node_data, capacity: curr.capacity};

            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 1, node_data: curr.node_data, capacity: dout_b.capacity};

            next = '{node_data: curr.node_data, position: child_idx_right, capacity: dout_b.capacity};
            if (dout_b.node_data.f < second_smallest) next_second_smallest = dout_b.node_data.f;
          end
          next_state = REPLACE_READ_CHILD;
        end
      end
    endcase
  end

  assign o_full  = (queue_size == BRAM_TREE_QUEUE_SIZE);
  assign o_empty = (queue_size == 0);
  assign o_data  = top_level.node_data;
  assign o_ready = (state == IDLE) && !(i_read || i_wrt);
endmodule