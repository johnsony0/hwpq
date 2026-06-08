/*******************************************************************************
  Module Name: bram_tree
  Date: 2025/03/05
  Description: A priority queue implementation using a binary min-heap structure
               stored in block RAM (BRAM). Supports enqueue, dequeue, and replace
               operations.
  Parameters: QUEUE_SIZE - Maximum number of elements in the priority queue
              DATA_WIDTH - Bit width of data elements
  Inputs: CLK - System clock
          RSTn - Active-low reset signal
          i_wrt - Write/insert command (enqueue operation)
          i_read - Read/pop command (dequeue operation)
          i_data - Input data to be enqueued
  Outputs: o_full - High when the queue is at maximum capacity (QUEUE_SIZE)
           o_empty - High when the queue is empty
           o_data - Output data from the highest priority element
           o_ready - High if the tree is done propagating/rebalancing & ready for another read/write
*******************************************************************************/

module bram_tree #(
    parameter integer QUEUE_SIZE = 7,
    parameter integer DATA_WIDTH = 16
) (
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

  //-------------------------------------------------------------------------
  // Local parameters & Sizing calculations
  //-------------------------------------------------------------------------
  localparam integer TREE_DEPTH    = $clog2(QUEUE_SIZE + 1);
  localparam integer NODES_NEEDED  = (1 << TREE_DEPTH) - 1; 
  localparam integer ADDRESS_WIDTH = $clog2(NODES_NEEDED);

  //-------------------------------------------------------------------------
  // Internal State Machine Variables
  //-------------------------------------------------------------------------
  typedef enum logic [2:0] {
    IDLE           = 3'd0,
    // Dequeue / Replace (Bubble-Down Path)
    DOWN_RD_PARENT = 3'd1,
    DOWN_WR_PARENT = 3'd2,
    DOWN_RD_CHILD  = 3'd3,
    DOWN_EVAL_SWAP = 3'd4,
    // Enqueue (Bubble-Up Path)
    UP_RD_NODES    = 3'd5,
    UP_EVAL_SWAP   = 3'd6
  } state_t;

  state_t state, next_state;

  logic [ADDRESS_WIDTH-1:0] curr_idx, next_idx;
  logic [ADDRESS_WIDTH-1:0] parent_idx_up, child_idx_up;
  integer queue_size, next_queue_size;

  // BRAM signals
  logic [ADDRESS_WIDTH-1:0] addr_a;
  logic [ADDRESS_WIDTH-1:0] addr_b;
  logic [DATA_WIDTH-1:0]     din_a;
  logic [DATA_WIDTH-1:0]     din_b;
  logic                     we_a;
  logic                     we_b;
  logic [DATA_WIDTH-1:0]     dout_a;
  logic [DATA_WIDTH-1:0]     dout_b;

  // Control signals
  logic [DATA_WIDTH-1:0] r_parent,     next_parent;
  logic [DATA_WIDTH-1:0] r_left_child,  next_left_child;
  logic [DATA_WIDTH-1:0] r_right_child, next_right_child;
  logic [DATA_WIDTH-1:0] out_reg,       next_out_reg;


  rams_tdp_rf_rf #(
      .WIDTH(DATA_WIDTH),
      .DEPTH(NODES_NEEDED)
  ) bram_inst (
      .clka (CLK), .ena(1'b1), .wea(we_a), .addra(addr_a), .dia(din_a), .doa(dout_a),
      .clkb (CLK), .enb(1'b1), .web(we_b), .addrb(addr_b), .dib(din_b), .dob(dout_b)
  );

  always_ff @(posedge CLK or negedge RSTn) begin : fsm_seq
    if (!RSTn) begin
      state         <= IDLE;
      queue_size    <= 0;
      curr_idx      <= '0;
      r_parent      <= '0;
      r_left_child  <= '0;
      r_right_child <= '0;
      out_reg       <= '0;
    end else begin
      state         <= next_state;
      queue_size    <= next_queue_size;
      curr_idx      <= next_idx;
      r_parent      <= next_parent;
      r_left_child  <= next_left_child;
      r_right_child <= next_right_child;
      out_reg       <= next_out_reg;
    end
  end

  always_comb begin : fsm_comb
    next_state       = state;
    next_queue_size  = queue_size;
    next_idx         = curr_idx;
    addr_a = 1'b0;
    addr_b = 1'b0;
    din_a = 1'b0;
    din_b = 1'b0;
    we_a        = 1'b0;
    we_b        = 1'b0;
    next_parent      = r_parent;
    next_left_child  = r_left_child;
    next_right_child = r_right_child;
    next_out_reg     = out_reg;

    child_idx_up  = curr_idx;
    parent_idx_up = (curr_idx - 1) >> 1;

    case (state)
      
      //---------------------------------------------------------------------
      // IDLE STATE
      //---------------------------------------------------------------------
      IDLE: begin
        if (i_wrt && !i_read && !o_full) begin // --- ENQUEUE ---
          // Write new value to the first available leaf node location
          addr_a     = queue_size;
          din_a      = i_data;
          we_a       = 1'b1;
          next_idx        = queue_size;
          next_queue_size = queue_size + 1;
          
          if (queue_size == 0) begin
            next_out_reg = i_data;
            next_state   = IDLE; 
          end else begin
            next_state   = UP_RD_NODES;
          end
          
        end else if (!i_wrt && i_read && !o_empty) begin // --- DEQUEUE ---
          // Get value at address of the 'current last node' at queue_size-1
          addr_a     = queue_size - 1; 
          next_state      = DOWN_RD_PARENT;
          next_queue_size = queue_size - 1;
          next_idx        = 'd0; 
          
        end else if (i_wrt && i_read) begin // --- REPLACE ---
          addr_a  = 'd0;
          din_a   = i_data;
          we_a    = 1'b1;
          next_idx     = 'd0;
          next_out_reg = i_data;
          
          if (queue_size <= 1) begin
            next_state = IDLE; 
          end else begin
            next_state = DOWN_RD_CHILD; 
          end
        end
      end

      //---------------------------------------------------------------------
      // BUBBLE-DOWN (DEQUEUE) EXTRACTION PROCESSING LANES
      //---------------------------------------------------------------------

      DOWN_RD_PARENT: begin
        // Set the next 'current last node'
        next_parent  = dout_a; 
        next_out_reg = dout_a;
        next_state   = DOWN_WR_PARENT;
      end

      DOWN_WR_PARENT: begin
        // Write the 'current last node' into the head
        // Overwrite the 'current last node' with 0
        // If there are more children, we need to read those to see if we need to swap down

        // Port A handles the root assignment write-back
        addr_a = 'd0;
        din_a  = r_parent;
        we_a   = 1'b1;

        // Port B overwrites the old trailing node location with zero
        addr_b = queue_size; 
        din_b  = '0;         
        we_b   = 1'b1;

        if (queue_size <= 1) begin
          next_state = IDLE; 
        end else begin
          next_state = DOWN_RD_CHILD;
        end
      end

      DOWN_RD_CHILD: begin
        // Read the next children of current parent, see if we need to swap
        addr_a = (2 * curr_idx) + 1;
        addr_b = (2 * curr_idx) + 2;
        if (curr_idx == 'd0) next_parent = out_reg;
        next_state  = DOWN_EVAL_SWAP;
      end

      DOWN_EVAL_SWAP: begin
        // If either child are less than their parent we need to write the swap
        // If we are at the end of the queue_size, we finish the swaps, otherwise read the next children
        next_left_child  = ((2 * curr_idx + 1) < queue_size) ? dout_a : '0;
        next_right_child = ((2 * curr_idx + 2) < queue_size) ? dout_b : '0;
        
        if ((next_left_child > r_parent) || (next_right_child > r_parent)) begin
          if (next_left_child >= next_right_child) begin
            addr_a = curr_idx;
            din_a  = next_left_child;
            we_a   = 1'b1;
            
            addr_b = (2 * curr_idx) + 1;
            din_b  = r_parent;
            we_b   = 1'b1;
            
            if (curr_idx == 'd0) next_out_reg = next_left_child;
            
            next_idx = (2 * curr_idx) + 1;
          end else begin
            addr_a = curr_idx;
            din_a  = next_right_child;
            we_a   = 1'b1;
            
            addr_b = (2 * curr_idx) + 2;
            din_b  = r_parent;
            we_b   = 1'b1;
            
            if (curr_idx == 'd0) next_out_reg = next_right_child;
            
            next_idx = (2 * curr_idx) + 2; 
          end
          
          if (((2 * next_idx) + 1) < queue_size) begin
            next_state = DOWN_RD_CHILD;
          end else begin
            next_state = IDLE; 
          end
        end else begin
          next_state = IDLE; 
        end
      end

      //---------------------------------------------------------------------
      // BUBBLE-UP (ENQUEUE) BALANCING PROCESSING LANES
      //---------------------------------------------------------------------
      UP_RD_NODES: begin
        // Reads the parent value of the enqueued node
        addr_a = child_idx_up;
        addr_b = parent_idx_up;
        next_state  = UP_EVAL_SWAP;
      end

      UP_EVAL_SWAP: begin
        // See if we need to swap the parent with the enqueued node
        // If so, we swap and if this is the top we go back to idle, otherwise read the next parent
        // If the parent is > than the enqueued node, we go to idle
        next_left_child = dout_a; 
        next_parent     = dout_b; 

        if (next_left_child > next_parent) begin
          addr_a = child_idx_up;
          din_a  = next_parent;
          we_a   = 1'b1;

          addr_b = parent_idx_up;
          din_b  = next_left_child;
          we_b   = 1'b1;

          if (parent_idx_up == 'd0) begin
            next_out_reg = next_left_child;
          end

          next_idx = parent_idx_up;

          if (parent_idx_up == 'd0) begin
            next_state = IDLE;
          end else begin
            next_state = UP_RD_NODES; 
          end
        end else begin
          if (child_idx_up == queue_size - 1) begin
            if (curr_idx == 0) next_out_reg = next_left_child;
          end
          next_state = IDLE; 
        end
      end

      default: next_state = IDLE;
    endcase
  end

  assign o_full  = (queue_size == QUEUE_SIZE);
  assign o_empty = (queue_size == 0);
  assign o_data  = (queue_size == 0) ? 0 : out_reg;
  assign o_ready = (state == IDLE);

endmodule
