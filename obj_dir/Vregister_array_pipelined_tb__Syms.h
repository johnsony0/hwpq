// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER_ARRAY_PIPELINED_TB__SYMS_H_
#define VERILATED_VREGISTER_ARRAY_PIPELINED_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vregister_array_pipelined_tb.h"

// INCLUDE MODULE CLASSES
#include "Vregister_array_pipelined_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vregister_array_pipelined_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregister_array_pipelined_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vregister_array_pipelined_tb___024root TOP;

    // CONSTRUCTORS
    Vregister_array_pipelined_tb__Syms(VerilatedContext* contextp, const char* namep, Vregister_array_pipelined_tb* modelp);
    ~Vregister_array_pipelined_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
