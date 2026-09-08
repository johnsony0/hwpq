module hybrid_systolic_heap (
  input var logic                   i_CLK,
  input var logic                   i_RSTn,

  // Input
  input var logic                   i_wrt,   // Enqueue signal
  input var logic                   i_read,  // Dequeue signal
  input var logic [DATA_WIDTH-1:0]  i_data,  // Node data input

  // Output
  output var logic                  o_write_ready, // High if systolic is full
  output var logic                  o_read_ready,
  output var logic [DATA_WIDTH-1:0] o_data    // Node data output
);
  // Constant
  localparam int MIN_VALUE = 0;  // Represents the minimum value for a max-queue
  localparam int HALF_SIZE = SYSTOLIC_QUEUE_SIZE / 2;
  parameter BRAM_TREE_ADDR_WIDTH = $clog2(TREE_COUNT);

  // Heap signals
  logic [TREE_COUNT-1:0]   		  heap_write;
  logic [TREE_COUNT-1:0]				heap_read;
  logic [TREE_COUNT-1:0]        heap_empty; 
	logic	[TREE_COUNT-1:0]				heap_full;
  logic [DATA_WIDTH-1:0]        heap_input [TREE_COUNT-1:0];
  logic [DATA_WIDTH-1:0]        heap_output [TREE_COUNT-1:0];
  logic [TREE_COUNT-1:0]        heap_ready;

  logic [BRAM_TREE_ADDR_WIDTH-1:0]        heap_round_robin;

  generate
		for (genvar k=0; k<TREE_COUNT; k++) begin : bram_tree
			bram_tree bram_tree_inst (
				.CLK(i_CLK),
				.RSTn(i_RSTn),
				.i_wrt(heap_write[k]),
				.i_read(heap_read[k]),
				.i_data(heap_input[k]),
				.o_full(heap_full[k]),
				.o_empty(heap_empty[k]),
				.o_data(heap_output[k]),
        .o_ready(heap_ready[k])
			);
		end
	endgenerate

  // Input Buffer (IB) and Output Buffer (OB)
  logic   [DATA_WIDTH-1:0] IB                  [HALF_SIZE];
  logic   [DATA_WIDTH-1:0] OB                  [HALF_SIZE];

  // Registers to store comparison results
  logic                    IB_greater_than_OB     [HALF_SIZE];
  logic                    IB_greater_than_IB_next[HALF_SIZE-1];
  logic                    IB_greater_than_OB_next[HALF_SIZE-1];
  logic                    OB_next_greater_than_OB[HALF_SIZE-1];

  logic                    IB_shift               [HALF_SIZE-1];
  logic                    IB_shift_valid               [HALF_SIZE-1];

  logic                    OB_shift               [HALF_SIZE-1];
  logic                    OB_shift_valid         [HALF_SIZE-1];

  logic                    IB_shift_to_OB         [HALF_SIZE-1];
  logic                    spill_to_heap;
  logic                    spill_to_heap_valid;

  // Systolic control signals
  int                      systolic_size;
  logic                    systolic_full;
  logic                    systolic_empty;

  // Heap buffers & control logic for secondary systolic
  logic   [DATA_WIDTH-1:0] heap_IB                  [HALF_SIZE];
  logic   [DATA_WIDTH-1:0] heap_OB                  [HALF_SIZE];

  logic                    heap_IB_greater_than_OB     [HALF_SIZE];
  logic                    heap_IB_greater_than_IB_next[HALF_SIZE-1];
  logic                    heap_IB_greater_than_OB_next[HALF_SIZE-1];
  logic                    heap_OB_next_greater_than_OB[HALF_SIZE-1];

  logic                    heap_IB_shift               [HALF_SIZE-1];
  logic                    heap_IB_shift_valid               [HALF_SIZE-1];

  logic                    heap_OB_shift               [HALF_SIZE-1];
  logic                    heap_OB_shift_valid         [HALF_SIZE-1];

  logic                    heap_IB_shift_to_OB         [HALF_SIZE-1];


  int                      heap_systolic_size;
  logic                    heap_systolic_full;
  logic                    heap_systolic_empty;

  logic                    heap_write_to_buffer;
  logic                    heap_replace_to_buffer;
  logic                    output_from_heap_systolic;

  logic [DATA_WIDTH-1:0] max_node;
  logic [BRAM_TREE_ADDR_WIDTH-1:0] max_node_idx;

  // dont think i need (!systolic_full && (IB[0] == 0)
  assign o_write_ready = ((!systolic_full && !(&heap_full) && !heap_systolic_full) || (!systolic_full)) && ((OB[0] != MIN_VALUE) || systolic_empty);
  assign o_read_ready = !(systolic_empty && (&heap_empty) && heap_systolic_empty) && ((o_data >= max_node) && (o_data >= OB[1]) && (o_data >= heap_OB[1]) && (o_data >= IB[0]) && (o_data >= heap_IB[0]));

  // Sequential logic
  always_ff @(posedge i_CLK or negedge i_RSTn) begin
    if (!i_RSTn) begin  // Reset
      heap_write  <= 0;
      heap_read   <= 0;
      heap_round_robin <= 0;

      for (int i = 0; i < HALF_SIZE; i++) begin
        IB[i] <= MIN_VALUE;  // initialize IB to MIN_VALUE, since this is a max-queue
        OB[i] <= MIN_VALUE;  // initialize OB to MIN_VALUE, since this is a max-queue
        heap_IB[i] <= MIN_VALUE;
        heap_OB[i] <= MIN_VALUE;
      end
    end else begin
      heap_write  <= 0;
      heap_read   <= 0;


      // Dequeue operation
      if (i_read && !i_wrt && o_read_ready) begin // pop the head of OB
        if (output_from_heap_systolic) begin
          heap_OB[0] <= MIN_VALUE;
        end else begin
          OB[0] <= MIN_VALUE;
        end
      end

      // Enqueue operation
      if (i_wrt && !i_read && o_write_ready) begin
        if (i_data > OB[0]) begin
          OB[0] <= i_data;
          IB[0] <= OB[0];
        end else begin
          IB[0] <= i_data;  // insert the new node at the head of IB
        end
      end

      // Replace operation
      // Write stall doesn't trigger here, since it's replace we should always be able to write
      if (i_wrt && i_read && o_read_ready) begin
        // if the output is from the heap systolic we read from heap systolic, and write to main systolic
        if (output_from_heap_systolic) begin
          if (systolic_full) begin
            heap_IB[0] <= i_data;
            heap_OB[0] <= MIN_VALUE;
          end else if (systolic_empty) begin
            OB[0] <= i_data;
            heap_OB[0] <= MIN_VALUE;
          end else begin
            if (i_data > OB[0]) begin
              OB[0] <= i_data;
              IB[0] <= OB[0];
            end else begin
              IB[0] <= i_data;
            end
            heap_OB[0] <= MIN_VALUE;
          end
        end else begin
          if (systolic_empty) begin
            OB[0] <= i_data;  // insert the new node at the head of OB
          end else begin
            IB[0] <= i_data;  // replace the head of IB
            OB[0] <= MIN_VALUE;  // pop the head of OB
          end
        end
      end
      
      if (spill_to_heap) begin
        if (spill_to_heap_valid) begin
          heap_write[heap_round_robin] <= 1'b1;
          heap_input[heap_round_robin] <= IB[HALF_SIZE-1];
          if ((!(IB_shift_valid[HALF_SIZE-2]) && (IB_shift[HALF_SIZE-2] || !IB_greater_than_OB_next[HALF_SIZE-2])) || IB_shift_to_OB[HALF_SIZE-2]) IB[HALF_SIZE-1] <= MIN_VALUE;
        end
        if (heap_round_robin == TREE_COUNT - 1) begin
          heap_round_robin <= 0;
        end else begin
          heap_round_robin <= heap_round_robin + 1;
        end
      end
      
      // writing to the heap_systolic
      if (heap_ready[max_node_idx]) begin
        if (heap_write_to_buffer) begin
          heap_read[max_node_idx] <= 1'b1;
          if ((max_node > heap_OB[0]) && (heap_OB[0] != MIN_VALUE && heap_systolic_empty)) begin
            heap_OB[0] <= max_node;
            heap_IB[0] <= heap_OB[0];
          end else begin
            heap_IB[0] <= max_node;  
          end
        end else if (heap_replace_to_buffer) begin
          heap_read[max_node_idx] <= 1'b1;
          heap_write[max_node_idx] <= 1'b1;
          heap_input[max_node_idx] <= heap_IB[2];
          heap_IB[2] <= MIN_VALUE;
          if (max_node > heap_OB[0] && (heap_OB[0] != MIN_VALUE)) begin
            heap_OB[0] <= max_node;
            heap_IB[0] <= heap_OB[0];
          end else begin
            heap_IB[0] <= max_node;  
          end
        end
      end

      // Sorting logic
      for (int i = 0; i < HALF_SIZE; i++) begin  // Iterate through each element
         priority case (1'b1)
          OB_shift[i] && OB_shift_valid[i]: begin
            OB[i] <= OB[i+1]; 
            if ((i == (HALF_SIZE - 2) || !OB_shift_valid[i+1] || !IB_shift_to_OB[i+1] || !OB_shift[i+1] || (OB[i+2] == 0))) OB[i+1] <= MIN_VALUE;
          end
          default: begin
            // No action needed
          end
        endcase

        priority case (1'b1)
          IB_shift[i] && IB_shift_valid[i]: begin
            // We slide this value down
            IB[i+1] <= IB[i];
            if ((i == 0 && !i_wrt) || (i > 0 && !IB_shift_valid[i-1])) IB[i] <= MIN_VALUE;
          end
          default: begin
            // No action needed
          end
        endcase

        priority case (1'b1)
          OB_next_greater_than_OB[i] && !OB_shift_valid[i] && !IB_greater_than_OB[i]
          && (i > 0 && !IB_greater_than_OB_next[i-1]): begin
            // If we cannot shift, we can swap
            OB[i+1] <= OB[i];
            OB[i] <= OB[i+1];
          end

          IB_shift_to_OB[i]: begin
            // if OB is shifting while we want to swap in, we can just swap down instead
            OB[i] <= IB[i];
            if (!(IB_shift[i-1] && IB_shift_valid[i-1])) IB[i] <= MIN_VALUE;
          end

          IB_greater_than_OB[i] && !(i < (HALF_SIZE-1) && OB_shift[i] && OB_shift_valid[i]): begin
            IB[i] <=  OB[i];
            OB[i] <=  IB[i];
          end

          IB_greater_than_OB_next[i] && (!IB_greater_than_OB[i+1])
          && ((IB[i+1] == 0) || (IB_greater_than_OB_next[i+1]) || (IB_shift[i+1]) || (spill_to_heap && spill_to_heap_valid)) && IB_shift_valid[i]: begin
            // Move IB[i] to OB[i+1], and move OB[i+1] to IB[i+1]
            OB[i+1] <= IB[i];
            IB[i+1] <= OB[i+1];
            // if we are also writing this cycle, we need to replace the value with i_data or OB[0] is i_data > OB[0]
            if (i == 0 && i_wrt) begin
              if (i_data > OB[0] && !i_read) begin
                IB[i] <= OB[0];
              end else begin
                IB[i] <= i_data;
              end
            end
            if ((i > 0 && (IB_shift_to_OB[i-1] || IB_greater_than_OB[i-1])) || (i == 0 && !i_wrt)) begin
              IB[i] <= MIN_VALUE;
            end
          end

          IB_greater_than_OB_next[i] && !IB_shift_valid[i] && !IB_greater_than_OB[i+1]: begin
            // If we cannot shift, we can swap
            IB[i] <= OB[i+1];
            OB[i+1] <= IB[i];
          end

          IB_greater_than_IB_next[i] && !IB_shift_valid[i]
          && ((i == (HALF_SIZE - 2)) || (!IB_greater_than_IB_next[i+1] && !IB_greater_than_OB_next[i+1]))
          && (!IB_greater_than_OB[i+1]): begin
            // If we cannot shift, we can swap
            IB[i] <= IB[i+1];
            IB[i+1] <= IB[i];
          end

          default: begin
            // No action needed
          end
        endcase
      end
      
      for (int i = 0; i < HALF_SIZE; i++) begin
         priority case (1'b1)
          heap_OB_shift[i] && heap_OB_shift_valid[i]: begin
            heap_OB[i] <= heap_OB[i+1]; 
            if ((i == (HALF_SIZE - 2) || !heap_OB_shift_valid[i+1] || !heap_IB_shift_to_OB[i+1] || !heap_OB_shift[i+1] || (heap_OB[i+2] == 0))) heap_OB[i+1] <= MIN_VALUE;
          end
          default: begin
            // No action needed
          end
        endcase

        priority case (1'b1)
          heap_IB_shift[i] && heap_IB_shift_valid[i]: begin
            // We slide this value down
            heap_IB[i+1] <= heap_IB[i];
            if ((i == 0 && !((heap_write_to_buffer || heap_replace_to_buffer) && heap_ready[max_node_idx])) || (i > 0 && !heap_IB_shift_valid[i-1])) heap_IB[i] <= MIN_VALUE;
          end
          default: begin
            // No action needed
          end
        endcase

        priority case (1'b1)
          heap_OB_next_greater_than_OB[i] && !heap_OB_shift_valid[i] && !heap_IB_greater_than_OB[i]
          && (i > 0 && !heap_IB_greater_than_OB_next[i-1]): begin
            // If we cannot shift, we can swap
            heap_OB[i+1] <= heap_OB[i];
            heap_OB[i] <= heap_OB[i+1];
          end

          heap_IB_shift_to_OB[i]: begin
            // if OB is shifting while we want to swap in, we can just swap down instead
            heap_OB[i] <= heap_IB[i];
            if (!(heap_IB_shift[i-1] && heap_IB_shift_valid[i-1])) heap_IB[i] <= MIN_VALUE;
          end

          heap_IB_greater_than_OB[i] && !(i < (HALF_SIZE-1) && heap_OB_shift[i] && heap_OB_shift_valid[i]): begin
            heap_IB[i] <=  heap_OB[i];
            heap_OB[i] <=  heap_IB[i];
          end

          heap_IB_greater_than_OB_next[i] && (!heap_IB_greater_than_OB[i+1])
          && ((heap_IB[i+1] == 0) || (heap_IB_greater_than_OB_next[i+1]) || (heap_IB_shift[i+1])) && heap_IB_shift_valid[i]: begin
            // Move IB[i] to OB[i+1], and move OB[i+1] to IB[i+1]
            heap_OB[i+1] <= heap_IB[i];
            heap_IB[i+1] <= heap_OB[i+1];
            // if we are also writing this cycle, we need to replace the value with i_data or OB[0] is i_data > OB[0]
            if (i == 0 && (heap_write_to_buffer || heap_replace_to_buffer)) begin
              if ( max_node > heap_OB[0] && !(heap_replace_to_buffer || (output_from_heap_systolic && i_read))) begin
                heap_IB[i] <= heap_OB[0];
              end else begin
                heap_IB[i] <= max_node;
              end
            end
            if ((i > 0 && (heap_IB_shift_to_OB[i-1] || heap_IB_greater_than_OB[i-1])) || (i == 0 && !((heap_write_to_buffer || heap_replace_to_buffer) && heap_ready[max_node_idx]))) begin
              heap_IB[i] <= MIN_VALUE;
            end
          end

          heap_IB_greater_than_OB_next[i] && !heap_IB_shift_valid[i] && !heap_IB_greater_than_OB[i+1]: begin
            // If we cannot shift, we can swap
            heap_IB[i] <= heap_OB[i+1];
            heap_OB[i+1] <= heap_IB[i];
          end

          heap_IB_greater_than_IB_next[i] && !heap_IB_shift_valid[i]
          && ((i == (HALF_SIZE - 2)) || (!heap_IB_greater_than_IB_next[i+1] && !heap_IB_greater_than_OB_next[i+1]))
          && (!heap_IB_greater_than_OB[i+1]): begin
            // If we cannot shift, we can swap
            heap_IB[i] <= heap_IB[i+1];
            heap_IB[i+1] <= heap_IB[i];
          end

          default: begin
            // No action needed
          end
        endcase
      end
    end
  end

  // Combinational logic
  always_comb begin
    systolic_size = 0;
    for (int i = 0; i < HALF_SIZE; i++) begin
      if (IB[i] != MIN_VALUE) systolic_size += 1;
      if (OB[i] != MIN_VALUE) systolic_size += 1;
    end

    // 2. Calculate heap systolic buffer size structurally
    heap_systolic_size = 0;
    for (int i = 0; i < HALF_SIZE; i++) begin
      if (heap_IB[i] != MIN_VALUE) heap_systolic_size += 1;
      if (heap_OB[i] != MIN_VALUE) heap_systolic_size += 1;
    end

    // 3. Keep your existing assignment flags intact
    systolic_full       = (systolic_size >= SYSTOLIC_QUEUE_SIZE - 2);
    systolic_empty      = (systolic_size == 0);
    heap_systolic_full  = (heap_systolic_size >= SYSTOLIC_QUEUE_SIZE - 2);
    heap_systolic_empty = (heap_systolic_size == 0);

    max_node     = '0;
    max_node_idx = '0;
    for (int i = 0; i < TREE_COUNT; i++) begin
      if (!heap_empty[i]) begin
        if (heap_output[i] > max_node) begin
          max_node     = heap_output[i]; 
          max_node_idx = i;
        end
      end
    end

    if ((heap_IB[0] == MIN_VALUE) && (max_node != MIN_VALUE) && (heap_systolic_size < SYSTOLIC_QUEUE_SIZE - 2)) begin
      // if not full we can write
      heap_write_to_buffer = 1'b1;
      heap_replace_to_buffer = 1'b0;
    end else if ((max_node > heap_IB[2]) && (max_node != MIN_VALUE) && (heap_systolic_size == SYSTOLIC_QUEUE_SIZE - 2) && (heap_IB[2] != MIN_VALUE) && (heap_IB[1] == MIN_VALUE) && (heap_IB[2] <= heap_IB[3]) && (heap_IB[2] <= heap_OB[2]) && (heap_IB[2] <= heap_OB[3])) begin
      // if full, we ignore the first 2 of IB since our max size is QUEUE_SIZE-2 and replace the third if needed
      heap_write_to_buffer = 1'b0;
      heap_replace_to_buffer = 1'b1;
    end else begin
      heap_write_to_buffer = 1'b0;
      heap_replace_to_buffer = 1'b0;
    end

    output_from_heap_systolic = (heap_OB[0] > OB[0]) ? 1'b1 : 1'b0;
    spill_to_heap_valid = (heap_ready[heap_round_robin] && !heap_full[heap_round_robin] && !((max_node_idx == heap_round_robin) && (heap_write_to_buffer || heap_replace_to_buffer ))) ? 1 : 0;

    // comparsion results (IB/OB/heap_IB/heap_OB are HALF_SIZE deep)
    for (int i=0; i<HALF_SIZE-1;i++) begin
      OB_shift[i] = (OB[i+1] >= IB[i]) && (OB[i+1] >= IB[i+1]) && (OB[i+1] != MIN_VALUE);
    end 
    OB_shift_valid[0] = OB[0] == 0;
    for (int i=1; i<HALF_SIZE-1;i++) begin
      OB_shift_valid[i] = (OB[i-1] == 0 || OB_shift_valid[i-1]) && OB_shift[i-1];
    end
    for (int i = 0; i < HALF_SIZE; i++) begin
      // IB_greater_than_OB should not happen at the front of the array
      IB_greater_than_OB[i] = (IB[i] > OB[i]);
    end
    for (int i = 0; i < HALF_SIZE - 1; i++) begin
      IB_greater_than_OB_next[i] = IB[i] > OB[i+1];
      IB_greater_than_IB_next[i] = IB[i] > IB[i+1];
      OB_next_greater_than_OB[i] = OB[i+1] > OB[i];
      IB_shift_to_OB[i] = IB_greater_than_OB_next[i] && (i > 0 && OB_shift[i-1] && OB_shift_valid[i-1]);
    end

    spill_to_heap = (IB[HALF_SIZE-1] != MIN_VALUE) && (IB[HALF_SIZE-1] <= OB[HALF_SIZE-1]) && (!(&heap_full));

    for (int i=HALF_SIZE-2; i >= 0; i--) begin
      IB_shift[i] = (i < (HALF_SIZE-2) && (IB_greater_than_OB_next[i+1] || IB_greater_than_IB_next[i+1])) || ((IB[i] <= OB[i]) && (IB[i] <= OB[i+1])) || ((OB[i] == 0) && (i == 0) && (IB[i] <= OB[i+1]));
    end
    // maybe it should be if it is equal to min_value
    IB_shift_valid[HALF_SIZE-2] = (IB[HALF_SIZE-1] == MIN_VALUE) || (spill_to_heap && spill_to_heap_valid);
    for (int i=HALF_SIZE-3; i >= 0; i--) begin
      // we can do shifts if at some point the value ahead of us is 0, otherwise we must swap as there is no room for shifts
      IB_shift_valid[i] = (IB[i+1] == 0 || IB_shift_valid[i+1] || IB_shift_to_OB[i+1]) && !IB_shift_to_OB[i] 
      && !((IB_greater_than_OB[i+1] || IB_greater_than_OB[i]) && !(i < (HALF_SIZE-1) && OB_shift[i] && OB_shift_valid[i]));
    end

    for (int i=0; i<HALF_SIZE-1;i++) begin
      heap_OB_shift[i] = (heap_OB[i+1] >= heap_IB[i]) && (heap_OB[i+1] >= heap_IB[i+1]) && (heap_OB[i+1] != MIN_VALUE);
    end 
    heap_OB_shift_valid[0] = heap_OB[0] == 0;
    for (int i=1; i<HALF_SIZE-1;i++) begin
      heap_OB_shift_valid[i] = (heap_OB[i-1] == 0 || heap_OB_shift_valid[i-1]) && heap_OB_shift[i-1];
    end
    for (int i = 0; i < HALF_SIZE; i++) begin
      // IB_greater_than_OB should not happen at the front of the array
      heap_IB_greater_than_OB[i] = (heap_IB[i] > heap_OB[i]);
    end
    for (int i = 0; i < HALF_SIZE - 1; i++) begin
      heap_IB_greater_than_OB_next[i] = heap_IB[i] > heap_OB[i+1];
      heap_IB_greater_than_IB_next[i] = heap_IB[i] > heap_IB[i+1];
      heap_OB_next_greater_than_OB[i] = heap_OB[i+1] > heap_OB[i];
      heap_IB_shift_to_OB[i] = heap_IB_greater_than_OB_next[i] && (i > 0 && heap_OB_shift[i-1] && heap_OB_shift_valid[i-1]);
    end
    for (int i=HALF_SIZE-2; i >= 0; i--) begin
      heap_IB_shift[i] = (i < (HALF_SIZE-2) && (heap_IB_greater_than_OB_next[i+1] || heap_IB_greater_than_IB_next[i+1])) || ((heap_IB[i] <= heap_OB[i]) && (heap_IB[i] <= heap_OB[i+1])) || ((heap_OB[i] == 0) && (i == 0) && (heap_IB[i] <= heap_OB[i+1]));
    end
    // maybe it should be if it is equal to min_value
    heap_IB_shift_valid[HALF_SIZE-2] = heap_IB[HALF_SIZE-1] == MIN_VALUE;
    for (int i=HALF_SIZE-3; i >= 0; i--) begin
      // we can do shifts if at some point the value ahead of us is 0, otherwise we must swap as there is no room for shifts
      heap_IB_shift_valid[i] = (heap_IB[i+1] == 0 || heap_IB_shift_valid[i+1] || heap_IB_shift_to_OB[i+1]) && !heap_IB_shift_to_OB[i] 
      && !((heap_IB_greater_than_OB[i+1] || heap_IB_greater_than_OB[i]) && !(i < (HALF_SIZE-1) && heap_OB_shift[i] && heap_OB_shift_valid[i]));
    end
    
    o_data  = output_from_heap_systolic ? heap_OB[0] : OB[0];
  end

endmodule
