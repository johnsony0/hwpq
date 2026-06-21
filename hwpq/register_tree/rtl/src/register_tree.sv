`default_nettype none

module register_tree #(
    parameter bit ENQ_ENA = 1,    // Define if user would like to enable enqueue
    parameter int QUEUE_SIZE = 4095,
    parameter int DATA_WIDTH = 16
) (
    // Synchronous Control
    input var logic i_CLK,
    input var logic i_RSTn,
    // Inputs
    input var logic i_wrt,
    input var logic i_read,
    input var logic [DATA_WIDTH-1:0] i_data,
    // Outputs
    output var logic o_full,
    output var logic o_empty,
    output var logic [DATA_WIDTH-1:0] o_data
);

  //----------------------------------------------------------------------
  // Local Parameters
  //----------------------------------------------------------------------
  localparam int TREE_DEPTH = $clog2(QUEUE_SIZE);  // depth of the tree
  localparam int NODES_NEEDED = (1 << TREE_DEPTH) - 1;  // number of nodes needed to initialize

  //----------------------------------------------------------------------
  // Internal Registers and Wires
  //----------------------------------------------------------------------
  // Storage elements
  logic [DATA_WIDTH-1:0] queue[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] reset_queue[NODES_NEEDED];
  
  // Size counter
  logic [$clog2(NODES_NEEDED)-1:0] size;
  logic empty, full;

  // Control signals
  logic enqueue, dequeue, replace;
  
  // Results of each operation - calculated in parallel
  logic [DATA_WIDTH-1:0] swap_result[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] enq_result[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] deq_result[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] rep_result[NODES_NEEDED];
  
  // Size after each operation
  logic [$clog2(NODES_NEEDED)-1:0] size_after_swap;
  logic [$clog2(NODES_NEEDED)-1:0] size_after_enq;
  logic [$clog2(NODES_NEEDED)-1:0] size_after_deq;
  logic [$clog2(NODES_NEEDED)-1:0] size_after_rep;

  logic [DATA_WIDTH-1:0] even_phase_queue[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] final_swap_result[NODES_NEEDED];
  logic [DATA_WIDTH-1:0] parent, left_child, right_child;

  logic left_greater_than_right;
  logic parent_less_than_left;
  logic parent_less_than_right;
  logic [DATA_WIDTH-1:0] new_parent, new_left, new_right;


  //----------------------------------------------------------------------
  // Initialize reset_queue to zeros
  //----------------------------------------------------------------------
  generate
    for (genvar i = 0; i < NODES_NEEDED; i++) begin : l_gen_reset_queue
      if (!ENQ_ENA) begin
        assign reset_queue[i] = '1;
      end else begin
        assign reset_queue[i] = '0;
      end
    end
  endgenerate

  //----------------------------------------------------------------------
  // Signals assignments
  //----------------------------------------------------------------------
  // Control signal assignment
  assign enqueue = ENQ_ENA && i_wrt && !i_read; // Only enable enqueue if ENQ_ENA is high
  assign dequeue = !i_wrt && i_read;
  assign replace = i_wrt && i_read;
  // Size counter signals
  assign empty = (size <= 0);
  assign full = (size >= QUEUE_SIZE);
  assign o_full = full;
  assign o_empty = empty;
  assign o_data = queue[0];

  //----------------------------------------------------------------------
  // Compare and Swap operation
  //----------------------------------------------------------------------
  always_comb begin : prepare_swap_result
    for (int i = 0; i < NODES_NEEDED; i++) begin
      even_phase_queue[i] = queue[i];
    end
    
    // Process even levels first
    for (int lvl = 0; lvl < TREE_DEPTH; lvl++) begin
      if (lvl % 2 == 0 && lvl < TREE_DEPTH - 1) begin
        for (int i = 0; i < NODES_NEEDED; i++) begin
          // Get parent and children
          parent = even_phase_queue[i];
          left_child = (2*i+1 < NODES_NEEDED) ? even_phase_queue[2*i+1] : '0;
          right_child = (2*i+2 < NODES_NEEDED) ? even_phase_queue[2*i+2] : '0;
          
          // Compare logic
          left_greater_than_right = (left_child > right_child);
          parent_less_than_left = (parent < left_child);
          parent_less_than_right = (parent < right_child);
          
          if (left_greater_than_right && parent_less_than_left) begin
            new_parent = left_child;
          end else if (!left_greater_than_right && parent_less_than_right) begin
            new_parent = right_child;
          end else begin
            new_parent = parent;
          end
            
          if (left_greater_than_right && parent_less_than_left) begin
            new_left = parent;
          end else begin
            new_left = left_child;
          end
            
          if (!left_greater_than_right && parent_less_than_right) begin
            new_right = parent;
          end else begin
            new_right = right_child;
          end
          
          // Update queue with new values
          even_phase_queue[i] = new_parent;
          if (2*i+1 < NODES_NEEDED) begin 
            even_phase_queue[2*i+1] = new_left;
          end else begin
            // No left child
          end
          if (2*i+2 < NODES_NEEDED) begin
            even_phase_queue[2*i+2] = new_right;
          end else begin
            // No right child
          end
        end
      end else begin
        // Do nothing for odd levels in this pass
      end
    end

    for (int i = 0; i < NODES_NEEDED; i++) begin
      final_swap_result[i] = even_phase_queue[i];
    end
    
    // Process odd levels
    for (int lvl = 0; lvl < TREE_DEPTH; lvl++) begin
      if (lvl % 2 == 1 && lvl < TREE_DEPTH - 1) begin
        for (int i = 0; i < NODES_NEEDED; i++) begin
          // Get parent and children
          parent = final_swap_result[i];
          left_child = (2*i+1 < NODES_NEEDED) ? final_swap_result[2*i+1] : '0;
          right_child = (2*i+2 < NODES_NEEDED) ? final_swap_result[2*i+2] : '0;
          
          // Compare logic
          left_greater_than_right = (left_child > right_child);
          parent_less_than_left = (parent < left_child);
          parent_less_than_right = (parent < right_child);
          
          if (left_greater_than_right && parent_less_than_left) begin
            new_parent = left_child;
          end else if (!left_greater_than_right && parent_less_than_right) begin
            new_parent = right_child;
          end else begin
            new_parent = parent;
          end
            
          if (left_greater_than_right && parent_less_than_left) begin
            new_left = parent;
          end else begin
            new_left = left_child;
          end
            
          if (!left_greater_than_right && parent_less_than_right) begin
            new_right = parent;
          end else begin
            new_right = right_child;
          end
          
          // Update queue with new values
          final_swap_result[i] = new_parent;
          if (2*i+1 < NODES_NEEDED) begin
            final_swap_result[2*i+1] = new_left;
          end else begin
            // No left child
          end
          if (2*i+2 < NODES_NEEDED) begin
            final_swap_result[2*i+2] = new_right;
          end else begin
            // No right child
          end
        end
      end else begin
        // Do nothing for even levels in this pass
      end
    end
    
    // Store the final swap result
    for (int i = 0; i < NODES_NEEDED; i++) begin
      swap_result[i] = final_swap_result[i];
    end
    size_after_swap = size; // Swap doesn't change the size
  end

  //----------------------------------------------------------------------
  // Enqueue operation
  //----------------------------------------------------------------------
  always_comb begin : prepare_enq_result
    // Find first empty slot
    logic [$clog2(NODES_NEEDED)-1:0] found_empty_idx;
    found_empty_idx = NODES_NEEDED;
    
    for (int i = NODES_NEEDED-1; i >= 0; i--) begin
      if (queue[i] == 0) begin
        found_empty_idx = (i < found_empty_idx) ? i : found_empty_idx;
      end else begin
        found_empty_idx = found_empty_idx;
      end
    end
    
    // Create enqueue result
    for (int i = 0; i < NODES_NEEDED; i++) begin
      enq_result[i] = queue[i];
    end
    
    if (found_empty_idx < NODES_NEEDED) begin
      enq_result[found_empty_idx] = i_data;
    end else begin
      // Do nothing
    end
    
    // Update size after enqueue
    size_after_enq = (!full) ? size + 1 : size;
  end

  //----------------------------------------------------------------------
  // Dequeue operation
  //----------------------------------------------------------------------
  always_comb begin : prepare_deq_result
    // Create dequeue result - remove root
    for (int i = 0; i < NODES_NEEDED; i++) begin
      deq_result[i] = queue[i];
    end
    deq_result[0] = '0;
    
    // Update size after dequeue
    size_after_deq = (!empty) ? size - 1 : size;
  end

  //----------------------------------------------------------------------
  // Replace operation
  //----------------------------------------------------------------------
  always_comb begin : prepare_rep_result
    // Create replace result - replace root
    for (int i = 0; i < NODES_NEEDED; i++) begin
      rep_result[i] = queue[i];
    end
    rep_result[0] = i_data;
    
    // Update size after replace
    size_after_rep = (o_data == '1 && !ENQ_ENA)    ? size+1 : //special case since reset fills up the pq with highest prio item
                  (size == '0 && i_data != '0) ? size+1 :
                  (size != '0 && i_data == '0) ? size-1 :
                   size;
  end

  //----------------------------------------------------------------------
  // Sequential logic - update registers
  //----------------------------------------------------------------------
  always_ff @(posedge i_CLK or negedge i_RSTn) begin : update_registers
    if (!i_RSTn) begin
      // Reset condition
      for (int i = 0; i < NODES_NEEDED; i++) begin
        queue[i] <= reset_queue[i];
      end
      size <= '0;
    end else begin
      // Normal operation - select based on control inputs
      if (enqueue) begin
        // Enqueue operation
        for (int i = 0; i < NODES_NEEDED; i++) begin
          queue[i] <= enq_result[i];
        end
        size <= size_after_enq;
      end else if (dequeue) begin
        // Dequeue operation
        for (int i = 0; i < NODES_NEEDED; i++) begin
          queue[i] <= deq_result[i];
        end
        size <= size_after_deq;
      end else if (replace) begin
        // Replace operation
        for (int i = 0; i < NODES_NEEDED; i++) begin
          queue[i] <= rep_result[i];
        end
        size <= size_after_rep;
      end else begin
        // Compare and swap for heap maintenance
        for (int i = 0; i < NODES_NEEDED; i++) begin
          queue[i] <= swap_result[i];
        end
        size <= size_after_swap;
      end
    end
  end

endmodule
