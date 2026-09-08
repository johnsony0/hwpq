package bram_tree_pkg;
  localparam integer SYSTOLIC_QUEUE_SIZE = 16;
  localparam integer TREE_COUNT = 11;

  localparam integer BRAM_TREE_QUEUE_SIZE = 2047;
  localparam integer DATA_WIDTH = 16;
  localparam integer TREE_DEPTH    = $clog2(BRAM_TREE_QUEUE_SIZE + 1);
  localparam integer NODES_NEEDED  = (1 << TREE_DEPTH) - 1; 
  localparam integer ADDRESS_WIDTH = $clog2(NODES_NEEDED);

  // Keep track if the node is active, it's value and how much available nodes are under it
  typedef struct packed {
    logic active;
    logic [DATA_WIDTH-1:0] value;
    logic [ADDRESS_WIDTH-1:0]  capacity;
  } bram_tree_mem_t;

  // Keep track of the current node's value and position
  typedef struct packed {
    logic [DATA_WIDTH-1:0] value;
    logic [ADDRESS_WIDTH-1:0] position;
    logic [ADDRESS_WIDTH-1:0] capacity;
  } bram_tree_curr_t;

endpackage
