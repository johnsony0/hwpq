// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_array_pipelined_tb.h for the primary calling header

#ifndef VERILATED_VREGISTER_ARRAY_PIPELINED_TB___024ROOT_H_
#define VERILATED_VREGISTER_ARRAY_PIPELINED_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregister_array_pipelined_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_array_pipelined_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ register_array_pipelined_tb__DOT__CLK;
    CData/*0:0*/ register_array_pipelined_tb__DOT__RSTn;
    CData/*0:0*/ register_array_pipelined_tb__DOT__i_wrt_ena;
    CData/*0:0*/ register_array_pipelined_tb__DOT__i_read_ena;
    CData/*0:0*/ register_array_pipelined_tb__DOT__i_wrt_dis;
    CData/*0:0*/ register_array_pipelined_tb__DOT__i_read_dis;
    CData/*0:0*/ register_array_pipelined_tb__DOT__o_full;
    CData/*0:0*/ register_array_pipelined_tb__DOT__o_empty;
    CData/*0:0*/ register_array_pipelined_tb__DOT__current_mode;
    CData/*6:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size;
    CData/*6:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__even_cycle_flag;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_even_cycle_flag;
    CData/*6:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size;
    CData/*6:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__even_cycle_flag;
    CData/*0:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_even_cycle_flag;
    CData/*0:0*/ __Vdlyvval__register_array_pipelined_tb__DOT__CLK__v0;
    CData/*0:0*/ __Vdlyvset__register_array_pipelined_tb__DOT__CLK__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__RSTn__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ register_array_pipelined_tb__DOT__i_data_ena;
    SData/*15:0*/ register_array_pipelined_tb__DOT__i_data_dis;
    SData/*15:0*/ register_array_pipelined_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__value;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
    IData/*31:0*/ register_array_pipelined_tb__DOT__ref_queue_enq_1_size;
    IData/*31:0*/ register_array_pipelined_tb__DOT__ref_queue_enq_0_size;
    IData/*31:0*/ register_array_pipelined_tb__DOT__random_operation;
    IData/*31:0*/ register_array_pipelined_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j;
    IData/*31:0*/ register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__reset_queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__reset_queue;
    VlUnpacked<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1;
    VlQueue<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__ref_queue_enq_1;
    VlQueue<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__ref_queue_enq_0;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7ab91862__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_array_pipelined_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_array_pipelined_tb___024root(Vregister_array_pipelined_tb__Syms* symsp, const char* v__name);
    ~Vregister_array_pipelined_tb___024root();
    VL_UNCOPYABLE(Vregister_array_pipelined_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
