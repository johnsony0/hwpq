// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"
#include "Vsystolic_array___024root.h"

VlCoroutine Vsystolic_array___024root___eval_initial__TOP__Vtiming__0(Vsystolic_array___024root* vlSelf);
VlCoroutine Vsystolic_array___024root___eval_initial__TOP__Vtiming__1(Vsystolic_array___024root* vlSelf);

void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial\n"); );
    // Body
    Vsystolic_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsystolic_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__CLK__0 
        = vlSelf->systolic_array_tb__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__RSTn__0 
        = vlSelf->systolic_array_tb__DOT__RSTn;
}

VL_INLINE_OPT VlCoroutine Vsystolic_array___024root___eval_initial__TOP__Vtiming__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    SData/*15:0*/ systolic_array_tb__DOT__random_value;
    systolic_array_tb__DOT__random_value = 0;
    IData/*31:0*/ systolic_array_tb__DOT__unnamedblk5__DOT__i;
    systolic_array_tb__DOT__unnamedblk5__DOT__i = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__0__value;
    __Vtask_systolic_array_tb__DOT__enqueue__0__value = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i;
    __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j;
    __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i;
    __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__2__value;
    __Vtask_systolic_array_tb__DOT__enqueue__2__value = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i;
    __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j;
    __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__replace__3__value;
    __Vtask_systolic_array_tb__DOT__replace__3__value = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i;
    __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j;
    __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__replace__3__tmp;
    __Vtask_systolic_array_tb__DOT__replace__3__tmp = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__4__value;
    __Vtask_systolic_array_tb__DOT__enqueue__4__value = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i;
    __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j;
    __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__enqueue__4__tmp;
    __Vtask_systolic_array_tb__DOT__enqueue__4__tmp = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i;
    __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__replace__6__value;
    __Vtask_systolic_array_tb__DOT__replace__6__value = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i;
    __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i = 0;
    IData/*31:0*/ __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j;
    __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    SData/*15:0*/ __Vtask_systolic_array_tb__DOT__replace__6__tmp;
    __Vtask_systolic_array_tb__DOT__replace__6__tmp = 0;
    // Body
    vlSelf->systolic_array_tb__DOT__CLK = 0U;
    vlSelf->systolic_array_tb__DOT__RSTn = 0U;
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       63);
    vlSelf->systolic_array_tb__DOT__RSTn = 1U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       65);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__0__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__0__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__0__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__0__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       73);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       73);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       73);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       73);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       73);
    VL_WRITEF("\nTest Case 1: Dequeue Test\n");
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i, 
                          (vlSelf->systolic_array_tb__DOT__ref_size 
                           - (IData)(1U)))) {
            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i) 
                = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                               ((IData)(1U) 
                                                                + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i));
            __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__1__unnamedblk8__DOT__i);
        }
        vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                     (vlSelf->systolic_array_tb__DOT__ref_size 
                                                      - (IData)(1U))) = 0U;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            (vlSelf->systolic_array_tb__DOT__ref_size 
             - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       199);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       202);
    VL_WRITEF("\nTest Case 2: Enqueue Test\n");
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__enqueue__2__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 0U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
            = __Vtask_systolic_array_tb__DOT__enqueue__2__value;
        vlSelf->systolic_array_tb__DOT__ref_size = 
            ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
        __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__enqueue__2__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__enqueue__2__tmp;
                }
                __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__unnamedblk7__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__2__unnamedblk6__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       177);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       180);
    VL_WRITEF("\nTest Case 3: Replace Test\n");
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    systolic_array_tb__DOT__random_value = (0xffffU 
                                            & VL_URANDOM_RANGE_I(0U, 0x400U));
    __Vtask_systolic_array_tb__DOT__replace__3__value 
        = systolic_array_tb__DOT__random_value;
    if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
        vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
        vlSelf->systolic_array_tb__DOT__i_read = 1U;
        vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
            = __Vtask_systolic_array_tb__DOT__replace__3__value;
        __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
            while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                     < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                    __Vtask_systolic_array_tb__DOT__replace__3__tmp 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                        = __Vtask_systolic_array_tb__DOT__replace__3__tmp;
                }
                __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j 
                    = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__unnamedblk10__DOT__j);
            }
            __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i 
                = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__3__unnamedblk9__DOT__i);
        }
    } else {
        VL_WRITEF("Replace: Queue empty, skipping replace\n");
    }
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       228);
    vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
    vlSelf->systolic_array_tb__DOT__i_read = 0U;
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge systolic_array_tb.CLK)", 
                                                       "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                       231);
    VL_WRITEF("\nTest Case 4: Stress Test\n");
    systolic_array_tb__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, systolic_array_tb__DOT__unnamedblk5__DOT__i)) {
        systolic_array_tb__DOT__random_value = (0xffffU 
                                                & VL_URANDOM_RANGE_I(0U, 0x400U));
        vlSelf->systolic_array_tb__DOT__random_operation 
            = VL_URANDOM_RANGE_I(1U, 3U);
        if ((1U == vlSelf->systolic_array_tb__DOT__random_operation)) {
            __Vtask_systolic_array_tb__DOT__enqueue__4__value 
                = systolic_array_tb__DOT__random_value;
            if (VL_UNLIKELY(VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
                VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
            } else {
                vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
                vlSelf->systolic_array_tb__DOT__i_read = 0U;
                vlSelf->systolic_array_tb__DOT__ref_queue.at(vlSelf->systolic_array_tb__DOT__ref_size) 
                    = __Vtask_systolic_array_tb__DOT__enqueue__4__value;
                vlSelf->systolic_array_tb__DOT__ref_size 
                    = ((IData)(1U) + vlSelf->systolic_array_tb__DOT__ref_size);
                __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
                    __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j 
                        = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i);
                    while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                        if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i) 
                             < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j))) {
                            __Vtask_systolic_array_tb__DOT__enqueue__4__tmp 
                                = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i);
                            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i) 
                                = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j);
                            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j) 
                                = __Vtask_systolic_array_tb__DOT__enqueue__4__tmp;
                        }
                        __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j 
                            = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__unnamedblk7__DOT__j);
                    }
                    __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i 
                        = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__enqueue__4__unnamedblk6__DOT__i);
                }
            }
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               177);
            vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
            vlSelf->systolic_array_tb__DOT__i_read = 0U;
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               180);
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               180);
        } else if ((2U == vlSelf->systolic_array_tb__DOT__random_operation)) {
            if (VL_UNLIKELY(VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))) {
                VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
            } else {
                vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
                vlSelf->systolic_array_tb__DOT__i_read = 1U;
                __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i, 
                                  (vlSelf->systolic_array_tb__DOT__ref_size 
                                   - (IData)(1U)))) {
                    vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i) 
                        = vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                                       ((IData)(1U) 
                                                                        + __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i));
                    __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i 
                        = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__dequeue__5__unnamedblk8__DOT__i);
                }
                vlSelf->systolic_array_tb__DOT__ref_queue.at(
                                                             (vlSelf->systolic_array_tb__DOT__ref_size 
                                                              - (IData)(1U))) = 0U;
                vlSelf->systolic_array_tb__DOT__ref_size 
                    = (vlSelf->systolic_array_tb__DOT__ref_size 
                       - (IData)(1U));
            }
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               199);
            vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
            vlSelf->systolic_array_tb__DOT__i_read = 0U;
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               202);
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               202);
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               202);
        } else if (VL_LIKELY((3U == vlSelf->systolic_array_tb__DOT__random_operation))) {
            __Vtask_systolic_array_tb__DOT__replace__6__value 
                = systolic_array_tb__DOT__random_value;
            if (VL_LIKELY(VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__ref_size))) {
                vlSelf->systolic_array_tb__DOT__i_wrt = 1U;
                vlSelf->systolic_array_tb__DOT__i_read = 1U;
                vlSelf->systolic_array_tb__DOT__ref_queue.at(0U) 
                    = __Vtask_systolic_array_tb__DOT__replace__6__value;
                __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i = 0U;
                while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i, vlSelf->systolic_array_tb__DOT__ref_size)) {
                    __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j 
                        = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i);
                    while (VL_LTS_III(32, __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j, vlSelf->systolic_array_tb__DOT__ref_size)) {
                        if ((vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i) 
                             < vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j))) {
                            __Vtask_systolic_array_tb__DOT__replace__6__tmp 
                                = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i);
                            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i) 
                                = vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j);
                            vlSelf->systolic_array_tb__DOT__ref_queue.at(__Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j) 
                                = __Vtask_systolic_array_tb__DOT__replace__6__tmp;
                        }
                        __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j 
                            = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__unnamedblk10__DOT__j);
                    }
                    __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i 
                        = ((IData)(1U) + __Vtask_systolic_array_tb__DOT__replace__6__unnamedblk9__DOT__i);
                }
            } else {
                VL_WRITEF("Replace: Queue empty, skipping replace\n");
            }
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               228);
            vlSelf->systolic_array_tb__DOT__i_wrt = 0U;
            vlSelf->systolic_array_tb__DOT__i_read = 0U;
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               231);
            co_await vlSelf->__VtrigSched_h11045a6e__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge systolic_array_tb.CLK)", 
                                                               "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                                               231);
        } else {
            VL_WRITEF("Invalid operation: %11d\n",32,
                      vlSelf->systolic_array_tb__DOT__random_operation);
        }
        systolic_array_tb__DOT__unnamedblk5__DOT__i 
            = ((IData)(1U) + systolic_array_tb__DOT__unnamedblk5__DOT__i);
    }
    VL_WRITEF("\nTest completed! \n");
    VL_FINISH_MT("hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 150, "");
}

VL_INLINE_OPT VlCoroutine Vsystolic_array___024root___eval_initial__TOP__Vtiming__1(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 
                                           52);
        vlSelf->__Vdlyvval__systolic_array_tb__DOT__CLK__v0 
            = (1U & (~ (IData)(vlSelf->systolic_array_tb__DOT__CLK)));
        vlSelf->__Vdlyvset__systolic_array_tb__DOT__CLK__v0 = 1U;
    }
}

VL_INLINE_OPT void Vsystolic_array___024root___act_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size_next 
        = ((((IData)(vlSelf->systolic_array_tb__DOT__i_wrt) 
             & (~ (IData)(vlSelf->systolic_array_tb__DOT__i_read))) 
            & VL_GTS_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))
            ? ((IData)(1U) + vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)
            : ((((~ (IData)(vlSelf->systolic_array_tb__DOT__i_wrt)) 
                 & (IData)(vlSelf->systolic_array_tb__DOT__i_read)) 
                & VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))
                ? (vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size 
                   - (IData)(1U)) : (((((IData)(vlSelf->systolic_array_tb__DOT__i_wrt) 
                                        & (IData)(vlSelf->systolic_array_tb__DOT__i_read)) 
                                       & VL_GTS_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)) 
                                      & VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))
                                      ? vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size
                                      : (((((IData)(vlSelf->systolic_array_tb__DOT__i_wrt) 
                                            & (IData)(vlSelf->systolic_array_tb__DOT__i_read)) 
                                           & VL_LTES_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)) 
                                          & VL_LTS_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))
                                          ? vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size
                                          : (((((IData)(vlSelf->systolic_array_tb__DOT__i_wrt) 
                                                & (IData)(vlSelf->systolic_array_tb__DOT__i_read)) 
                                               & VL_GTS_III(32, 8U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)) 
                                              & VL_GTES_III(32, 0U, vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size))
                                              ? ((IData)(1U) 
                                                 + vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)
                                              : vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size)))));
}

void Vsystolic_array___024root___eval_act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsystolic_array___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsystolic_array___024root___nba_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->__Vdlyvset__systolic_array_tb__DOT__CLK__v0) {
        vlSelf->systolic_array_tb__DOT__CLK = vlSelf->__Vdlyvval__systolic_array_tb__DOT__CLK__v0;
        vlSelf->__Vdlyvset__systolic_array_tb__DOT__CLK__v0 = 0U;
    }
}

VL_INLINE_OPT void Vsystolic_array___024root___nba_sequent__TOP__1(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size 
        = ((IData)(vlSelf->systolic_array_tb__DOT__RSTn)
            ? vlSelf->systolic_array_tb__DOT__u_SystolicArray__DOT__size_next
            : 0U);
}

void Vsystolic_array___024root___eval_nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsystolic_array___024root___timing_resume(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h11045a6e__0.resume("@(posedge systolic_array_tb.CLK)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vsystolic_array___024root___timing_commit(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h11045a6e__0.commit("@(posedge systolic_array_tb.CLK)");
    }
}

void Vsystolic_array___024root___eval_triggers__act(Vsystolic_array___024root* vlSelf);

bool Vsystolic_array___024root___eval_phase__act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystolic_array___024root___eval_triggers__act(vlSelf);
    Vsystolic_array___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsystolic_array___024root___timing_resume(vlSelf);
        Vsystolic_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystolic_array___024root___eval_phase__nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsystolic_array___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hwpq/systolic_array/rtl/sim/systolic_array_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsystolic_array___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsystolic_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsystolic_array___024root___eval_debug_assertions(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
