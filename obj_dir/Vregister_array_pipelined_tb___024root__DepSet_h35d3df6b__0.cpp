// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_array_pipelined_tb.h for the primary calling header

#include "Vregister_array_pipelined_tb__pch.h"
#include "Vregister_array_pipelined_tb___024root.h"

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_initial__TOP(Vregister_array_pipelined_tb___024root* vlSelf);
VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_array_pipelined_tb___024root* vlSelf);
VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__1(Vregister_array_pipelined_tb___024root* vlSelf);

void Vregister_array_pipelined_tb___024root___eval_initial(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_initial\n"); );
    // Body
    Vregister_array_pipelined_tb___024root___eval_initial__TOP(vlSelf);
    Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0 
        = vlSelf->register_array_pipelined_tb__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__RSTn__0 
        = vlSelf->register_array_pipelined_tb__DOT__RSTn;
}

VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__0(Vregister_array_pipelined_tb___024root* vlSelf);
VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__1(Vregister_array_pipelined_tb___024root* vlSelf);
VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__2(Vregister_array_pipelined_tb___024root* vlSelf);
VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__3(Vregister_array_pipelined_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_await Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
    co_await Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__3(vlSelf);
}

VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__0(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    VlQueue<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__ref_queue_prev;
    register_array_pipelined_tb__DOT__ref_queue_prev.atDefault() = 0;
    SData/*15:0*/ register_array_pipelined_tb__DOT__random_value;
    register_array_pipelined_tb__DOT__random_value = 0;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j = 0;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0;
    // Body
    vlSelf->register_array_pipelined_tb__DOT__CLK = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__current_mode = 0U;
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.clear();
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.clear();
    register_array_pipelined_tb__DOT__ref_queue_prev.clear();
    vlSelf->register_array_pipelined_tb__DOT__RSTn = 0U;
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       136);
    vlSelf->register_array_pipelined_tb__DOT__RSTn = 1U;
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       138);
    VL_WRITEF("\n=== Testing with ENQ_ENA enabled ===\n\nInitializing enqueue enabled module by enqueue into it\n");
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__0__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__0__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    VL_WRITEF("\nTest Case 1: Dequeue Test (ENQ_ENA enabled)\n");
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk20__DOT__i);
            }
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                         (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                                                                          - (IData)(1U))) = 0U;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                   - (IData)(1U));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena = 0U;
        __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__1__unnamedblk19__DOT__i);
        }
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                     (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                                                                      - (IData)(1U))) = 0U;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
               - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       448);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               454);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           453);
    }
    VL_WRITEF("\nTest Case 2: Enqueue Test (ENQ_ENA enabled)\n");
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp;
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i 
                = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i);
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       409);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               415);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           414);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value 
        = register_array_pipelined_tb__DOT__random_value;
}
