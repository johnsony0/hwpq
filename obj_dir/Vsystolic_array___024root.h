// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ systolic_array_tb__DOT__CLK;
    CData/*0:0*/ systolic_array_tb__DOT__RSTn;
    CData/*0:0*/ systolic_array_tb__DOT__i_wrt;
    CData/*0:0*/ systolic_array_tb__DOT__i_read;
    CData/*0:0*/ __Vdlyvval__systolic_array_tb__DOT__CLK__v0;
    CData/*0:0*/ __Vdlyvset__systolic_array_tb__DOT__CLK__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_array_tb__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_array_tb__DOT__RSTn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ systolic_array_tb__DOT__ref_size;
    IData/*31:0*/ systolic_array_tb__DOT__random_operation;
    IData/*31:0*/ systolic_array_tb__DOT__u_SystolicArray__DOT__size;
    IData/*31:0*/ systolic_array_tb__DOT__u_SystolicArray__DOT__size_next;
    IData/*31:0*/ __VactIterCount;
    VlQueue<SData/*15:0*/, 8> systolic_array_tb__DOT__ref_queue;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h11045a6e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystolic_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* v__name);
    ~Vsystolic_array___024root();
    VL_UNCOPYABLE(Vsystolic_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
