module systolic_array_tb;
  // Parameters matching the module under test
  parameter int QUEUE_SIZE = 8;
  parameter int DATA_WIDTH = 16;

  // Clock and reset signals
  logic                  CLK;
  logic                  RSTn;

  // Input signals
  logic                  i_wrt;
  logic                  i_read;
  logic [DATA_WIDTH-1:0] i_data;

  // Output signals
  logic                  o_full;
  logic                  o_empty;
  logic [DATA_WIDTH-1:0] o_data;

  // Reference array for verification
  logic [DATA_WIDTH-1:0] ref_queue        [$:QUEUE_SIZE-1];

  // Test variables
  logic [DATA_WIDTH-1:0] random_value;

  typedef enum int {
    ENQUEUE = 1,
    DEQUEUE = 2,
    REPLACE = 3
  } t_operation;
  t_operation random_operation;

  // Instantiate the register_tree module
  systolic_array #(
      .QUEUE_SIZE(QUEUE_SIZE),
      .DATA_WIDTH(DATA_WIDTH)
  ) u_SystolicArray (
      .i_CLK(CLK),
      .i_RSTn(RSTn),
      .i_wrt(i_wrt),
      .i_read(i_read),
      .i_data(i_data),
      .o_full(o_full),
      .o_empty(o_empty),
      .o_data(o_data)
  );

  // Clock generation: 10ns period
  always #5 CLK <= ~CLK;

  initial begin
    // Initialize signals
    CLK = 0;
    RSTn = 0;
    i_wrt = 0;
    i_read = 0;
    i_data = 0;

    // Reset the module
    @(posedge CLK);
    RSTn = 1;
    @(posedge CLK);

    // Test Case 1: Successive decreasing numbers in IB
    $display("\nTest Case 1: Successive decreasing numbers in IB");
    ref_queue.delete();
    force u_SystolicArray.IB = '{16'd1, 16'd6, 16'd4, 16'd2};
    force u_SystolicArray.OB = '{16'd12, 16'd11, 16'd10, 16'd9}; 
    force u_SystolicArray.size = 4'd8;

    @(posedge CLK);

    release u_SystolicArray.IB;
    release u_SystolicArray.OB;
    release u_SystolicArray.size;

    ref_queue.push_back(16'd1);
    ref_queue.push_back(16'd6);
    ref_queue.push_back(16'd4);
    ref_queue.push_back(16'd2);
    ref_queue.push_back(16'd12);
    ref_queue.push_back(16'd11);
    ref_queue.push_back(16'd10);
    ref_queue.push_back(16'd9);

    ref_queue.rsort();
    repeat (10) @(posedge CLK);

    for (int i = 0; i < 8; i++) begin
      dequeue();
      if (!o_empty) begin
        assert (o_data == ref_queue[0])
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", ref_queue[0], o_data);
      end else begin
        assert (o_data == '0)
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", '0, o_data);
      end
    end

    // Test Case 2: Successive decreasing numbers in IB
    $display("\nTest Case 2: Successive increasing numbers in OB");
    ref_queue.delete();
    force u_SystolicArray.IB = '{16'd1, 16'd2, 16'd4, 16'd6};
    force u_SystolicArray.OB = '{16'd12, 16'd9, 16'd10, 16'd11}; 
    force u_SystolicArray.size = 4'd8;

    @(posedge CLK);

    release u_SystolicArray.IB;
    release u_SystolicArray.OB;
    release u_SystolicArray.size;

    ref_queue.push_back(16'd1);
    ref_queue.push_back(16'd6);
    ref_queue.push_back(16'd4);
    ref_queue.push_back(16'd2);
    ref_queue.push_back(16'd12);
    ref_queue.push_back(16'd11);
    ref_queue.push_back(16'd10);
    ref_queue.push_back(16'd9);

    ref_queue.rsort();
    repeat (10) @(posedge CLK);

    for (int i = 0; i < 8; i++) begin
      dequeue();
      if (!o_empty) begin
        assert (o_data == ref_queue[0])
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", ref_queue[0], o_data);
      end else begin
        assert (o_data == '0)
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", '0, o_data);
      end
    end

    // Test Case 3: Successive decreasing numbers from IB to OB+1
    $display("\nTest Case 3: Successive decreasing numbers from IB to OB+1");
    ref_queue.delete();
    force u_SystolicArray.IB = '{16'd1, 16'd2, 16'd11, 16'd10};
    force u_SystolicArray.OB = '{16'd17, 16'd16, 16'd15, 16'd9}; 
    force u_SystolicArray.size = 4'd8;

    @(posedge CLK);

    release u_SystolicArray.IB;
    release u_SystolicArray.OB;
    release u_SystolicArray.size;

    ref_queue.push_back(16'd1);
    ref_queue.push_back(16'd2);
    ref_queue.push_back(16'd11);
    ref_queue.push_back(16'd10);
    ref_queue.push_back(16'd17);
    ref_queue.push_back(16'd16);
    ref_queue.push_back(16'd15);
    ref_queue.push_back(16'd9);

    ref_queue.rsort();
    repeat (10) @(posedge CLK);

    for (int i = 0; i < 8; i++) begin
      dequeue();
      if (!o_empty) begin
        assert (o_data == ref_queue[0])
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", ref_queue[0], o_data);
      end else begin
        assert (o_data == '0)
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", '0, o_data);
      end
    end

    // Test Case 4: Successive increasing numbers in OB to IB+1
    $display("\nTest Case 4: Successive decreasing numbers from OB to IB+1");
    ref_queue.delete();
    force u_SystolicArray.IB = '{16'd1, 16'd2, 16'd7, 16'd13};
    force u_SystolicArray.OB = '{16'd17, 16'd16, 16'd10, 16'd11}; 
    force u_SystolicArray.size = 4'd8;

    @(posedge CLK);

    release u_SystolicArray.IB;
    release u_SystolicArray.OB;
    release u_SystolicArray.size;

    ref_queue.push_back(16'd1);
    ref_queue.push_back(16'd2);
    ref_queue.push_back(16'd7);
    ref_queue.push_back(16'd13);
    ref_queue.push_back(16'd17);
    ref_queue.push_back(16'd16);
    ref_queue.push_back(16'd10);
    ref_queue.push_back(16'd11);

    ref_queue.rsort();
    repeat (10) @(posedge CLK);

    for (int i = 0; i < 8; i++) begin
      dequeue();
      if (!o_empty) begin
        assert (o_data == ref_queue[0])
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", ref_queue[0], o_data);
      end else begin
        assert (o_data == '0)
        else $error("Dequeue: Node f value mismatch -> expected %d, got %d", '0, o_data);
      end
    end

    $display("\nTest completed! ");
    $finish;
  end


  // Task to write to the end of the queue
  task automatic enqueue(input logic [DATA_WIDTH-1:0] value);
    begin
      if (!o_full) begin
        i_wrt  = 1;
        i_read = 0;
        i_data = value;
        ref_queue.push_back(value);
        ref_queue.rsort();
      end else begin
        $display("Enqueue: Queue full, skipping enqueue");
      end
      @(posedge CLK);
      i_wrt  = 0;
      i_read = 0;
      repeat (2) @(posedge CLK);
    end
  endtask

  // Task to read root node
  task automatic dequeue();
    begin
      if (!o_empty) begin
        i_wrt  = 0;
        i_read = 1;
        ref_queue.pop_front();
        ref_queue.rsort();
      end else begin
        $display("Dequeue: Queue empty, skipping dequeue");
      end
      @(posedge CLK);
      i_wrt  = 0;
      i_read = 0;
      repeat (3) @(posedge CLK);
    end
  endtask

  // Task to replace root node
  task automatic replace(input logic [DATA_WIDTH-1:0] value);
    begin
      i_wrt  = 1;
      i_read = 1;
      i_data = value;
      ref_queue.pop_front();
      ref_queue.push_back(value);
      ref_queue.rsort();
      @(posedge CLK);
      i_wrt  = 0;
      i_read = 0;
      repeat (2) @(posedge CLK);
    end
  endtask

endmodule