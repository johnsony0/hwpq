import bram_tree_pkg::*;

module bram_tree (
    input  logic                  CLK,
    input  logic                  RSTn,
    // Inputs
    input  logic                  i_wrt,    // Write/insert command
    input  logic                  i_read,   // Read/pop command
    input  logic [DATA_WIDTH-1:0] i_data,   // Input data
    // Outputs
    output logic                  o_full,   // High if the heap is full
    output logic                  o_empty,  // High if the heap is empty
    output logic [DATA_WIDTH-1:0] o_data,   // Output data (Root node)
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
  logic [ADDRESS_WIDTH:0] parent_idx, child_idx_left, child_idx_right;
  integer queue_size, next_queue_size;

  // BRAM signals
  logic [ADDRESS_WIDTH-1:0] addr_a;
  logic [ADDRESS_WIDTH-1:0] addr_b;
  bram_tree_mem_t     din_a;
  bram_tree_mem_t     din_b;
  logic                     we_a;
  logic                     we_b;
  bram_tree_mem_t     dout_a;
  bram_tree_mem_t     dout_b;

  logic [DATA_WIDTH-1:0] parent,     next_parent;
  logic [DATA_WIDTH-1:0] left_child,  next_left_child;
  logic [DATA_WIDTH-1:0] right_child, next_right_child;
  logic [DATA_WIDTH-1:0] second_greatest, next_second_greatest;

  rams_tdp_rf_rf bram_inst (
    .clka (CLK), .ena(1'b1), .wea(we_a), .addra(addr_a), .dia(din_a), .doa(dout_a),
    .clkb (CLK), .enb(1'b1), .web(we_b), .addrb(addr_b), .dib(din_b), .dob(dout_b)
  );

  always_ff @(posedge CLK or negedge RSTn) begin : fsm_seq
    if (!RSTn) begin
      state         <= IDLE;
      queue_size    <= 0;
      curr      <= '0;
      parent      <= '0;
      left_child  <= '0;
      right_child <= '0;
      second_greatest <= '0;
      top_level       <= '{active: '0, value: '0, capacity: BRAM_TREE_QUEUE_SIZE};
    end else begin
      state         <= next_state;
      queue_size    <= next_queue_size;
      curr      <= next;
      parent      <= next_parent;
      left_child  <= next_left_child;
      right_child <= next_right_child;
      second_greatest <= next_second_greatest;
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
    next_parent      = parent;
    next_left_child  = left_child;
    next_right_child = right_child;
    next_second_greatest = second_greatest;
    next_top_level      = top_level;

    parent_idx = (curr.position - 1) >> 1;
    child_idx_left  = curr.position * 2 + 1;
    child_idx_right = curr.position * 2 + 2;

    case (state)
      IDLE: begin
        if (i_wrt && !i_read && !o_full) begin // --- ENQUEUE ---
          if (queue_size == 0) begin
            next_top_level = '{active: 1, value: i_data, capacity: BRAM_TREE_QUEUE_SIZE - 1};
            next_state = IDLE;
          end else begin
            if(i_data > top_level.value) begin
              next_top_level = '{active: 1, value: i_data, capacity: top_level.capacity-1};
              next = '{value: top_level.value, position: '0, capacity: top_level.capacity-1};
              next_second_greatest = top_level.value;
            end else begin
              next_top_level = '{active: 1, value: top_level.value , capacity: top_level.capacity-1};
              next = '{value: i_data, position: 0, capacity: top_level.capacity-1};
            end
            addr_a = 1;
            addr_b = 2;
            next_state = ENQUEUE_COMPARE_CHILD;
          end
          next_queue_size = queue_size + 1;
        end else if (!i_wrt && i_read && !o_empty) begin // --- DEQUEUE ---
          if (second_greatest > top_level.value) begin
            //the second_greatest should not be greater than the greatest... can happen is queue_size is 1
            next_top_level = '{active: 0, value: 0, capacity: top_level.capacity+1};
          end else begin
            next_top_level = '{active: 0, value: second_greatest, capacity: top_level.capacity+1};
          end
          next = '{value: '0, position: 0, capacity: top_level.capacity+1};
          addr_a = 1;
          addr_b = 2;
          next_queue_size = queue_size - 1;
          next_state = DEQUEUE_COMPARE_ROOT;
        end else if (i_wrt && i_read) begin // --- REPLACE ---
          next = '{value: i_data, position: 0, capacity: (o_empty)  ? top_level.capacity+1 : top_level.capacity};
          if (queue_size == 0) begin
            next_top_level = '{active: 1, value: i_data, capacity: top_level.capacity+1};
            next_state = IDLE;
          end else begin
            next_top_level = '{active: 0, value: second_greatest, capacity: top_level.capacity};
            next_state = REPLACE_COMPARE_ROOT;
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
        //if inactive we write into it, if active we check, if greater than we swap, if less than we traverse down the cheaper route
        if (!dout_a.active && (dout_a.capacity > 0)) begin
          //Write into left
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, value: curr.value, capacity: dout_a.capacity - 1};
          if (curr.value > second_greatest) next_second_greatest = curr.value;
          next_state = IDLE;
        end else if (!dout_b.active && (dout_b.capacity > 0)) begin
          //Write into right
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, value: curr.value, capacity: dout_b.capacity - 1};
          if (curr.value > second_greatest) next_second_greatest = curr.value;
          next_state = IDLE;
        end else if (dout_a.active && (dout_a.capacity > 0) && (curr.value <= dout_a.value)) begin
          // Check children of left next
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, value: dout_a.value, capacity: dout_a.capacity - 1};
          if (dout_a.value > second_greatest) next_second_greatest = dout_a.value;
          next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_b.active && (dout_b.capacity > 0) && (curr.value <= dout_b.value)) begin
          // Check children of right next
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, value: dout_b.value, capacity: dout_b.capacity - 1}; 
          if (dout_b.value > second_greatest) next_second_greatest = dout_b.value;
          next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_a.active && (dout_a.capacity > 0) && (curr.value > dout_a.value) && ((dout_a.value <= dout_b.value) || (dout_b.capacity == 0))) begin
          //swap Left and Curr, check children of right
          addr_a = child_idx_left;
          we_a   = 1;
          din_a  = '{active: 1, value: curr.value, capacity: dout_a.capacity - 1};
          if (curr.value > second_greatest) next_second_greatest = curr.value;
          next = '{value: dout_a.value, position: child_idx_left, capacity: dout_a.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end else if (dout_b.active && (dout_b.capacity > 0) && (curr.value > dout_b.value) && ((dout_a.value > dout_b.value) || (dout_a.capacity == 0))) begin
          //swap Right and Curr, check children of left
          addr_b = child_idx_right;
          we_b   = 1;
          din_b  = '{active: 1, value: curr.value, capacity: dout_b.capacity - 1};
          if (curr.value > second_greatest) next_second_greatest = curr.value;
          next = '{value: dout_b.value, position: child_idx_right, capacity: dout_b.capacity - 1};
          next_state = ENQUEUE_READ_CHILD; 
        end
      end

      DEQUEUE_COMPARE_ROOT: begin
        //if both nodes are inactive or we are at the end, we go to idle next, because this is root, we set the next max out
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE)) begin
          next_top_level = '{active: 0, value: 0, capacity: BRAM_TREE_QUEUE_SIZE};
          next_second_greatest = 0;
          next_state = IDLE;
        end else begin
          // if only one is inactive we pull that value
          if (dout_a.active && !dout_b.active) begin
            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 0, value: '0, capacity: dout_a.capacity + 1};

            next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity + 1};
            next_top_level = '{active: 1, value: dout_a.value, capacity: curr.capacity};
          end else if (dout_b.active && !dout_a.active) begin
            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 0, value: '0, capacity: dout_b.capacity + 1};

            next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity + 1};
            next_top_level = '{active: 1, value: dout_b.value, capacity: curr.capacity};
          end else if (dout_a.active && dout_b.active) begin
            if (dout_a.value >= dout_b.value) begin
              addr_b = child_idx_left;
              we_b = 1;
              din_b = '{active: 0, value: '0, capacity: dout_a.capacity + 1};

              next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity + 1};
              next_top_level = '{active: 1, value: dout_a.value, capacity: curr.capacity};
              next_second_greatest = dout_b.value;
            end else begin
              addr_a = child_idx_right;
              we_a = 1;
              din_a = '{active: 0, value: '0, capacity: dout_b.capacity + 1};

              next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity + 1};
              next_top_level = '{active: 1, value: dout_b.value, capacity: curr.capacity};
              next_second_greatest = dout_a.value;
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
            din_a = '{active: 1, value: dout_a.value, capacity: curr.capacity};

            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 0, value: '0, capacity: dout_a.capacity + 1};

            next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity + 1};
          end else if (dout_b.active && !dout_a.active) begin
            addr_b = curr.position;
            we_b = 1;
            din_b = '{active: 1, value: dout_b.value, capacity: curr.capacity};

            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 0, value: '0, capacity: dout_b.capacity + 1};

            next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity + 1};
          end else if (dout_a.active && dout_b.active) begin
            if (dout_a.value >= dout_b.value) begin
              addr_a = curr.position;
              we_a = 1;
              din_a = '{active: 1, value: dout_a.value, capacity: curr.capacity};

              addr_b = child_idx_left;
              we_b = 1;
              din_b = '{active: 0, value: '0, capacity: dout_a.capacity + 1};

              next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity + 1};
              if (dout_a.value > second_greatest) next_second_greatest = dout_a.value;
            end else begin
              addr_b = curr.position;
              we_b = 1;
              din_b = '{active: 1, value: dout_b.value, capacity: curr.capacity};

              addr_a = child_idx_right;
              we_a = 1;
              din_a = '{active: 0, value: '0, capacity: dout_b.capacity + 1};

              next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity + 1};
              if (dout_b.value > second_greatest) next_second_greatest = dout_b.value;
            end
          end
          next_state = DEQUEUE_READ_CHILD;
        end
      end

      REPLACE_READ_ROOT: begin
        //get the current capacity, and then read the children
        addr_a = child_idx_left;
        addr_b = child_idx_right;
        next = '{value: curr.value, position: 0, capacity: dout_a.capacity};
        next_state = REPLACE_COMPARE_ROOT;
      end

      REPLACE_COMPARE_ROOT: begin
        //if the current node is the only node or the greatest node, we just write into it and go back to idle
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE) || ((curr.value >= dout_a.value) && (curr.value >= dout_b.value))) begin
          next_top_level = '{active: 1, value: curr.value, capacity: curr.capacity};
          next_state = IDLE;
        end else begin
          // otherwise swap with the higher priority node
          // swap with A
          if ((dout_a.active && !dout_b.active) || (dout_a.value >= dout_b.value)) begin
            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 1, value: curr.value, capacity: dout_a.capacity};

            next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity};
            next_top_level = '{active: 1, value: dout_a.value, capacity: curr.capacity};
            next_second_greatest = dout_b.value;
          end else if ((dout_b.active && !dout_a.active) || (dout_b.value >= dout_a.value)) begin
            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 1, value: curr.value, capacity: dout_b.capacity};

            next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity};
            next_top_level = '{active: 1, value: dout_b.value, capacity: curr.capacity};
            next_second_greatest = dout_a.value;
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
        if ((!dout_a.active && !dout_b.active) || (child_idx_left > BRAM_TREE_QUEUE_SIZE) || (child_idx_right > BRAM_TREE_QUEUE_SIZE) || ((curr.value >= dout_a.value) && (curr.value >= dout_b.value))) begin
          addr_a = curr.position;
          we_a = 1;
          din_a = '{active: 1, value: curr.value, capacity: curr.capacity};
          next_state = IDLE;
        end else begin
          // otherwise swap with the higher priority node
          // swap with A
          if ((dout_a.active && !dout_b.active) || (dout_a.value >= dout_b.value)) begin
            addr_a = curr.position;
            we_a = 1;
            din_a = '{active: 1, value: dout_a.value, capacity: curr.capacity};

            addr_b = child_idx_left;
            we_b = 1;
            din_b = '{active: 1, value: curr.value, capacity: dout_a.capacity};

            next = '{value: curr.value, position: child_idx_left, capacity: dout_a.capacity};
            if (dout_a.value > second_greatest) next_second_greatest = dout_a.value;
          end else if ((dout_b.active && !dout_a.active) || (dout_b.value >= dout_a.value)) begin
            addr_b = curr.position;
            we_b = 1;
            din_b = '{active: 1, value: dout_b.value, capacity: curr.capacity};

            addr_a = child_idx_right;
            we_a = 1;
            din_a = '{active: 1, value: curr.value, capacity: dout_b.capacity};

            next = '{value: curr.value, position: child_idx_right, capacity: dout_b.capacity};
            if (dout_b.value > second_greatest) next_second_greatest = dout_b.value;
          end
          next_state = REPLACE_READ_CHILD;
        end
      end
    endcase
  end

  assign o_full  = (queue_size == BRAM_TREE_QUEUE_SIZE);
  assign o_empty = (queue_size == 0);
  assign o_data  = (queue_size == 0) ? 0 : top_level.value;
  assign o_ready = (state == IDLE) && !(i_read || i_wrt);
endmodule
