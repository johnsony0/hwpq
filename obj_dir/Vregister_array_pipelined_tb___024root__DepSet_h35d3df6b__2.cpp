// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_array_pipelined_tb.h for the primary calling header

#include "Vregister_array_pipelined_tb__pch.h"
#include "Vregister_array_pipelined_tb___024root.h"

VlCoroutine Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__2(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    // Init
    VlQueue<SData/*15:0*/, 64> register_array_pipelined_tb__DOT__ref_queue_prev;
    register_array_pipelined_tb__DOT__ref_queue_prev.atDefault() = 0;
    SData/*15:0*/ register_array_pipelined_tb__DOT__random_value;
    register_array_pipelined_tb__DOT__random_value = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0;
    IData/*31:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j = 0;
    SData/*15:0*/ __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp = 0;
    // Body
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[7U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(7U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[8U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(8U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[9U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(9U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xaU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xaU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xbU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xbU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xcU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xcU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xdU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xdU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xeU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xeU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xfU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0xfU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x10U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x10U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x11U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x11U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x12U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x12U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x13U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x13U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x14U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x14U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x15U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x15U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x16U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x16U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x17U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x17U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x18U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x18U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x19U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x19U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1aU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1aU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1bU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1bU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1cU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1cU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1dU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1dU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1eU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1eU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1fU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x1fU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x20U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x20U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x21U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x21U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x22U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x22U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x23U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x23U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x24U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x24U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x25U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x25U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x26U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x26U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x27U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x27U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x28U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x28U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x29U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x29U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2aU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2aU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2bU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2bU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2cU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2cU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2dU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2dU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2eU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2eU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2fU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x2fU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x30U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x30U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x31U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x31U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x32U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x32U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x33U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x33U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x34U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x34U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x35U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x35U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x36U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x36U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x37U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x37U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x38U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x38U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x39U] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x39U);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3aU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3aU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3bU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3bU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3cU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3cU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3dU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3dU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3eU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3eU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3fU] 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0x3fU);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size = 0x40U;
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       274);
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       274);
    VL_WRITEF("\nTest Case 5: Dequeue Test (ENQ_ENA disabled)\n");
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_empty)) {
        VL_WRITEF("Dequeue: Queue empty, skipping dequeue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis = 0U;
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i = 0U;
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i, 
                              (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                               - (IData)(1U)))) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i) 
                    = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(
                                                                                ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i));
                __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk20__DOT__i);
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
        __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i, 
                          (vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                           - (IData)(1U)))) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i) 
                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(
                                                                               ((IData)(1U) 
                                                                                + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i));
            __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__dequeue__7__unnamedblk19__DOT__i);
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
    VL_WRITEF("\nTest Case 6: Enqueue Test (ENQ_ENA disabled)\n");
    register_array_pipelined_tb__DOT__ref_queue_prev 
        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0;
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (VL_UNLIKELY(vlSelf->register_array_pipelined_tb__DOT__o_full)) {
        VL_WRITEF("Enqueue: Queue full, skipping enqueue\n");
    } else if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 0U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 0U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
            = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__value;
        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
            = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
        __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
            while (VL_LTS_III(32, __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                     < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j))) {
                    __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i) 
                        = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
                    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(__Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j) 
                        = __Vtask_register_array_pipelined_tb__DOT__enqueue__8__tmp;
                }
                __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j 
                    = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__unnamedblk18__DOT__j);
            }
            __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i 
                = ((IData)(1U) + __Vtask_register_array_pipelined_tb__DOT__enqueue__8__unnamedblk17__DOT__i);
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
    if ((0U == vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
        vlSelf->register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelf->register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
            vlSelf->register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i);
        }
    }
    VL_WRITEF("\nTest Case 7: Replace Test (ENQ_ENA disabled)\n");
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_read_dis = 1U;
            vlSelf->register_array_pipelined_tb__DOT__i_data_dis 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size 
                    = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size);
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i);
                }
            } else {
                vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(0U) 
                    = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0U;
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                    while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size)) {
                        if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                             < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j))) {
                            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i) 
                                = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j) 
                                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                        }
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j 
                            = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j);
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i);
                }
            }
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_read_ena = 1U;
        vlSelf->register_array_pipelined_tb__DOT__i_data_ena 
            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
        if (vlSelf->register_array_pipelined_tb__DOT__o_empty) {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size 
                = ((IData)(1U) + vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size);
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i);
            }
        } else {
            vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(0U) 
                = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value;
            vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0U;
            while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                while (VL_LTS_III(32, vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j, vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size)) {
                    if ((vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                         < vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j))) {
                        vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i) 
                            = vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                        vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.at(vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j) 
                            = vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp;
                    }
                    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j 
                        = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j);
                }
                vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i 
                    = ((IData)(1U) + vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i);
            }
        }
    }
    co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge register_array_pipelined_tb.CLK)", 
                                                       "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                       520);
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
                                                               526);
            co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge register_array_pipelined_tb.CLK)", 
                                                               "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                               526);
        }
    } else {
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
        co_await vlSelf->__VtrigSched_h7ab91862__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge register_array_pipelined_tb.CLK)", 
                                                           "hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 
                                                           525);
    }
    register_array_pipelined_tb__DOT__random_value 
        = (0xffffU & VL_MODDIV_III(32, (IData)((0xffffU 
                                                & VL_RANDOM_I())), (IData)(0x401U)));
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value 
        = register_array_pipelined_tb__DOT__random_value;
}
