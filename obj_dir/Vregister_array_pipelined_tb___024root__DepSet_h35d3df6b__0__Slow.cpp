// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_array_pipelined_tb.h for the primary calling header

#include "Vregister_array_pipelined_tb__pch.h"
#include "Vregister_array_pipelined_tb___024root.h"

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_static__TOP(Vregister_array_pipelined_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_static(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_static\n"); );
    // Body
    Vregister_array_pipelined_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_static__TOP(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size = 0U;
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size = 0U;
}

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_initial__TOP(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__reset_queue[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__reset_queue[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_final(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__stl(Vregister_array_pipelined_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregister_array_pipelined_tb___024root___eval_phase__stl(Vregister_array_pipelined_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_settle(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vregister_array_pipelined_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregister_array_pipelined_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__stl(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___stl_sequent__TOP__0(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked;
    register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked;
    register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked = 0;
    // Body
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_even_cycle_flag 
        = (1U & (~ (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__even_cycle_flag)));
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_even_cycle_flag 
        = (1U & (~ (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__even_cycle_flag)));
    if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
        if (vlSelf->register_array_pipelined_tb__DOT__current_mode) {
            vlSelf->register_array_pipelined_tb__DOT__o_full 
                = (0x40U <= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size));
            vlSelf->register_array_pipelined_tb__DOT__o_empty 
                = (0U >= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size));
        } else {
            vlSelf->register_array_pipelined_tb__DOT__o_full 
                = (0x40U <= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size));
            vlSelf->register_array_pipelined_tb__DOT__o_empty 
                = (0U >= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size));
        }
    } else {
        vlSelf->register_array_pipelined_tb__DOT__o_full 
            = (0x40U <= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size));
        vlSelf->register_array_pipelined_tb__DOT__o_empty 
            = (0U >= (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size));
    }
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue 
        = ((~ (IData)(vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis)) 
           & (IData)(vlSelf->register_array_pipelined_tb__DOT__i_read_dis));
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace 
        = ((IData)(vlSelf->register_array_pipelined_tb__DOT__i_read_dis) 
           & (IData)(vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis));
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue 
        = ((~ (IData)(vlSelf->register_array_pipelined_tb__DOT__i_read_ena)) 
           & (IData)(vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena));
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue 
        = ((~ (IData)(vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena)) 
           & (IData)(vlSelf->register_array_pipelined_tb__DOT__i_read_ena));
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace 
        = ((IData)(vlSelf->register_array_pipelined_tb__DOT__i_read_ena) 
           & (IData)(vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena));
    register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked = 0x3fU;
    if ((4U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue) 
                 << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace)))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size)));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3fU]) ? 0x3fU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3eU]) ? 0x3eU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3dU]) ? 0x3dU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3cU]) ? 0x3cU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3bU]) ? 0x3bU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x3aU]) ? 0x3aU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x39U]) ? 0x39U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x38U]) ? 0x38U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x37U]) ? 0x37U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x36U]) ? 0x36U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x35U]) ? 0x35U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x34U]) ? 0x34U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x33U]) ? 0x33U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x32U]) ? 0x32U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x31U]) ? 0x31U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x30U]) ? 0x30U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2fU]) ? 0x2fU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2eU]) ? 0x2eU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2dU]) ? 0x2dU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2cU]) ? 0x2cU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2bU]) ? 0x2bU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x2aU]) ? 0x2aU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x29U]) ? 0x29U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x28U]) ? 0x28U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x27U]) ? 0x27U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x26U]) ? 0x26U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x25U]) ? 0x25U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x24U]) ? 0x24U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x23U]) ? 0x23U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x22U]) ? 0x22U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x21U]) ? 0x21U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x20U]) ? 0x20U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1fU]) ? 0x1fU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1eU]) ? 0x1eU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1dU]) ? 0x1dU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1cU]) ? 0x1cU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1bU]) ? 0x1bU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x1aU]) ? 0x1aU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x19U]) ? 0x19U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x18U]) ? 0x18U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x17U]) ? 0x17U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x16U]) ? 0x16U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x15U]) ? 0x15U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x14U]) ? 0x14U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x13U]) ? 0x13U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x12U]) ? 0x12U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x11U]) ? 0x11U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0x10U]) ? 0x10U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xfU]) ? 0xfU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xeU]) ? 0xeU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xdU]) ? 0xdU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xcU]) ? 0xcU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xbU]) ? 0xbU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0xaU]) ? 0xaU : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [9U]) ? 9U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [8U]) ? 8U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [7U]) ? 7U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [6U]) ? 6U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [5U]) ? 5U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [4U]) ? 4U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [3U]) ? 3U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [2U]) ? 2U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [1U]) ? 1U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [0U]) ? 0U : register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[1U] 
            = (VL_LTES_III(32, 1U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [1U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[2U] 
            = (VL_LTES_III(32, 2U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [1U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [2U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[3U] 
            = (VL_LTES_III(32, 3U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [2U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [3U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[4U] 
            = (VL_LTES_III(32, 4U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [3U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [4U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[5U] 
            = (VL_LTES_III(32, 5U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [4U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [5U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[6U] 
            = (VL_LTES_III(32, 6U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [5U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [6U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[7U] 
            = (VL_LTES_III(32, 7U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [6U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [7U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[8U] 
            = (VL_LTES_III(32, 8U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [7U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [8U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[9U] 
            = (VL_LTES_III(32, 9U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [8U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [9U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xaU] 
            = (VL_LTES_III(32, 0xaU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [9U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xaU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xbU] 
            = (VL_LTES_III(32, 0xbU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xaU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xbU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xcU] 
            = (VL_LTES_III(32, 0xcU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xbU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xcU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xdU] 
            = (VL_LTES_III(32, 0xdU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xcU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xdU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xeU] 
            = (VL_LTES_III(32, 0xeU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xdU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xeU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0xfU] 
            = (VL_LTES_III(32, 0xfU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xeU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xfU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x10U] 
            = (VL_LTES_III(32, 0x10U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0xfU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x10U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x11U] 
            = (VL_LTES_III(32, 0x11U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x10U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x11U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x12U] 
            = (VL_LTES_III(32, 0x12U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x11U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x12U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x13U] 
            = (VL_LTES_III(32, 0x13U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x12U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x13U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x14U] 
            = (VL_LTES_III(32, 0x14U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x13U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x14U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x15U] 
            = (VL_LTES_III(32, 0x15U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x14U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x15U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x16U] 
            = (VL_LTES_III(32, 0x16U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x15U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x16U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x17U] 
            = (VL_LTES_III(32, 0x17U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x16U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x17U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x18U] 
            = (VL_LTES_III(32, 0x18U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x17U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x18U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x19U] 
            = (VL_LTES_III(32, 0x19U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x18U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x19U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1aU] 
            = (VL_LTES_III(32, 0x1aU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x19U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1bU] 
            = (VL_LTES_III(32, 0x1bU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1cU] 
            = (VL_LTES_III(32, 0x1cU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1dU] 
            = (VL_LTES_III(32, 0x1dU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1eU] 
            = (VL_LTES_III(32, 0x1eU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x1fU] 
            = (VL_LTES_III(32, 0x1fU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x20U] 
            = (VL_LTES_III(32, 0x20U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x1fU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x20U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x21U] 
            = (VL_LTES_III(32, 0x21U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x20U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x21U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x22U] 
            = (VL_LTES_III(32, 0x22U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x21U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x22U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x23U] 
            = (VL_LTES_III(32, 0x23U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x22U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x23U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x24U] 
            = (VL_LTES_III(32, 0x24U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x23U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x24U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x25U] 
            = (VL_LTES_III(32, 0x25U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x24U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x25U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x26U] 
            = (VL_LTES_III(32, 0x26U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x25U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x26U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x27U] 
            = (VL_LTES_III(32, 0x27U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x26U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x27U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x28U] 
            = (VL_LTES_III(32, 0x28U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x27U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x28U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x29U] 
            = (VL_LTES_III(32, 0x29U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x28U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x29U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2aU] 
            = (VL_LTES_III(32, 0x2aU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x29U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2bU] 
            = (VL_LTES_III(32, 0x2bU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2cU] 
            = (VL_LTES_III(32, 0x2cU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2dU] 
            = (VL_LTES_III(32, 0x2dU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2eU] 
            = (VL_LTES_III(32, 0x2eU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x2fU] 
            = (VL_LTES_III(32, 0x2fU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x30U] 
            = (VL_LTES_III(32, 0x30U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x2fU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x30U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x31U] 
            = (VL_LTES_III(32, 0x31U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x30U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x31U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x32U] 
            = (VL_LTES_III(32, 0x32U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x31U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x32U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x33U] 
            = (VL_LTES_III(32, 0x33U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x32U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x33U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x34U] 
            = (VL_LTES_III(32, 0x34U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x33U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x34U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x35U] 
            = (VL_LTES_III(32, 0x35U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x34U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x35U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x36U] 
            = (VL_LTES_III(32, 0x36U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x35U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x36U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x37U] 
            = (VL_LTES_III(32, 0x37U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x36U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x37U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x38U] 
            = (VL_LTES_III(32, 0x38U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x37U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x38U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x39U] 
            = (VL_LTES_III(32, 0x39U, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x38U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x39U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3aU] 
            = (VL_LTES_III(32, 0x3aU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x39U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3bU] 
            = (VL_LTES_III(32, 0x3bU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3cU] 
            = (VL_LTES_III(32, 0x3cU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3dU] 
            = (VL_LTES_III(32, 0x3dU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3eU] 
            = (VL_LTES_III(32, 0x3eU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0x3fU] 
            = (VL_LTES_III(32, 0x3fU, register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
               [0x3fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0U] 
            = vlSelf->register_array_pipelined_tb__DOT__i_data_dis;
    } else if ((2U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue) 
                        << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace)))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size 
            = (0x7fU & ((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size) 
                        - (IData)(1U)));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0U] = 0U;
    } else if ((1U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue) 
                        << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace)))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size 
            = (0x7fU & (((0U == (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size)) 
                         & (0U != (IData)(vlSelf->register_array_pipelined_tb__DOT__i_data_dis)))
                         ? ((IData)(1U) + (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size))
                         : (((0U != (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size)) 
                             & (0U == (IData)(vlSelf->register_array_pipelined_tb__DOT__i_data_dis)))
                             ? ((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size) 
                                - (IData)(1U)) : (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size))));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[0U] 
            = vlSelf->register_array_pipelined_tb__DOT__i_data_dis;
    } else {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size 
            = (0x7fU & (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked = 0x3fU;
    if ((4U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue) 
                 << 2U) | (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue) 
                            << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace))))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size)));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3fU]) ? 0x3fU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3eU]) ? 0x3eU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3dU]) ? 0x3dU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3cU]) ? 0x3cU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3bU]) ? 0x3bU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x3aU]) ? 0x3aU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x39U]) ? 0x39U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x38U]) ? 0x38U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x37U]) ? 0x37U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x36U]) ? 0x36U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x35U]) ? 0x35U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x34U]) ? 0x34U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x33U]) ? 0x33U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x32U]) ? 0x32U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x31U]) ? 0x31U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x30U]) ? 0x30U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2fU]) ? 0x2fU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2eU]) ? 0x2eU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2dU]) ? 0x2dU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2cU]) ? 0x2cU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2bU]) ? 0x2bU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x2aU]) ? 0x2aU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x29U]) ? 0x29U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x28U]) ? 0x28U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x27U]) ? 0x27U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x26U]) ? 0x26U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x25U]) ? 0x25U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x24U]) ? 0x24U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x23U]) ? 0x23U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x22U]) ? 0x22U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x21U]) ? 0x21U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x20U]) ? 0x20U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1fU]) ? 0x1fU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1eU]) ? 0x1eU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1dU]) ? 0x1dU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1cU]) ? 0x1cU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1bU]) ? 0x1bU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x1aU]) ? 0x1aU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x19U]) ? 0x19U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x18U]) ? 0x18U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x17U]) ? 0x17U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x16U]) ? 0x16U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x15U]) ? 0x15U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x14U]) ? 0x14U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x13U]) ? 0x13U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x12U]) ? 0x12U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x11U]) ? 0x11U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0x10U]) ? 0x10U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xfU]) ? 0xfU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xeU]) ? 0xeU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xdU]) ? 0xdU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xcU]) ? 0xcU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xbU]) ? 0xbU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0xaU]) ? 0xaU : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [9U]) ? 9U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [8U]) ? 8U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [7U]) ? 7U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [6U]) ? 6U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [5U]) ? 5U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [4U]) ? 4U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [3U]) ? 3U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [2U]) ? 2U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [1U]) ? 1U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked 
            = ((0U == vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [0U]) ? 0U : register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[1U] 
            = (VL_LTES_III(32, 1U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [1U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[2U] 
            = (VL_LTES_III(32, 2U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [1U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [2U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[3U] 
            = (VL_LTES_III(32, 3U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [2U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [3U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[4U] 
            = (VL_LTES_III(32, 4U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [3U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [4U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[5U] 
            = (VL_LTES_III(32, 5U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [4U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [5U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[6U] 
            = (VL_LTES_III(32, 6U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [5U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [6U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[7U] 
            = (VL_LTES_III(32, 7U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [6U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [7U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[8U] 
            = (VL_LTES_III(32, 8U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [7U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [8U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[9U] 
            = (VL_LTES_III(32, 9U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [8U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [9U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xaU] 
            = (VL_LTES_III(32, 0xaU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [9U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xaU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xbU] 
            = (VL_LTES_III(32, 0xbU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xaU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xbU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xcU] 
            = (VL_LTES_III(32, 0xcU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xbU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xcU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xdU] 
            = (VL_LTES_III(32, 0xdU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xcU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xdU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xeU] 
            = (VL_LTES_III(32, 0xeU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xdU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xeU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0xfU] 
            = (VL_LTES_III(32, 0xfU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xeU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xfU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x10U] 
            = (VL_LTES_III(32, 0x10U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0xfU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x10U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x11U] 
            = (VL_LTES_III(32, 0x11U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x10U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x11U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x12U] 
            = (VL_LTES_III(32, 0x12U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x11U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x12U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x13U] 
            = (VL_LTES_III(32, 0x13U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x12U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x13U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x14U] 
            = (VL_LTES_III(32, 0x14U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x13U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x14U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x15U] 
            = (VL_LTES_III(32, 0x15U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x14U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x15U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x16U] 
            = (VL_LTES_III(32, 0x16U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x15U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x16U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x17U] 
            = (VL_LTES_III(32, 0x17U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x16U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x17U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x18U] 
            = (VL_LTES_III(32, 0x18U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x17U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x18U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x19U] 
            = (VL_LTES_III(32, 0x19U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x18U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x19U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1aU] 
            = (VL_LTES_III(32, 0x1aU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x19U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1bU] 
            = (VL_LTES_III(32, 0x1bU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1cU] 
            = (VL_LTES_III(32, 0x1cU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1dU] 
            = (VL_LTES_III(32, 0x1dU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1eU] 
            = (VL_LTES_III(32, 0x1eU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x1fU] 
            = (VL_LTES_III(32, 0x1fU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x20U] 
            = (VL_LTES_III(32, 0x20U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x1fU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x20U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x21U] 
            = (VL_LTES_III(32, 0x21U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x20U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x21U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x22U] 
            = (VL_LTES_III(32, 0x22U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x21U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x22U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x23U] 
            = (VL_LTES_III(32, 0x23U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x22U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x23U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x24U] 
            = (VL_LTES_III(32, 0x24U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x23U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x24U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x25U] 
            = (VL_LTES_III(32, 0x25U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x24U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x25U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x26U] 
            = (VL_LTES_III(32, 0x26U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x25U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x26U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x27U] 
            = (VL_LTES_III(32, 0x27U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x26U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x27U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x28U] 
            = (VL_LTES_III(32, 0x28U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x27U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x28U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x29U] 
            = (VL_LTES_III(32, 0x29U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x28U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x29U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2aU] 
            = (VL_LTES_III(32, 0x2aU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x29U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2bU] 
            = (VL_LTES_III(32, 0x2bU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2cU] 
            = (VL_LTES_III(32, 0x2cU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2dU] 
            = (VL_LTES_III(32, 0x2dU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2eU] 
            = (VL_LTES_III(32, 0x2eU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x2fU] 
            = (VL_LTES_III(32, 0x2fU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x30U] 
            = (VL_LTES_III(32, 0x30U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x2fU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x30U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x31U] 
            = (VL_LTES_III(32, 0x31U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x30U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x31U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x32U] 
            = (VL_LTES_III(32, 0x32U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x31U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x32U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x33U] 
            = (VL_LTES_III(32, 0x33U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x32U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x33U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x34U] 
            = (VL_LTES_III(32, 0x34U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x33U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x34U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x35U] 
            = (VL_LTES_III(32, 0x35U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x34U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x35U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x36U] 
            = (VL_LTES_III(32, 0x36U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x35U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x36U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x37U] 
            = (VL_LTES_III(32, 0x37U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x36U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x37U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x38U] 
            = (VL_LTES_III(32, 0x38U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x37U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x38U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x39U] 
            = (VL_LTES_III(32, 0x39U, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x38U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x39U]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3aU] 
            = (VL_LTES_III(32, 0x3aU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x39U] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3aU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3bU] 
            = (VL_LTES_III(32, 0x3bU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3aU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3bU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3cU] 
            = (VL_LTES_III(32, 0x3cU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3bU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3cU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3dU] 
            = (VL_LTES_III(32, 0x3dU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3cU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3dU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3eU] 
            = (VL_LTES_III(32, 0x3eU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3dU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3eU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0x3fU] 
            = (VL_LTES_III(32, 0x3fU, register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue_operation__DOT__empty_checked)
                ? vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3eU] : vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
               [0x3fU]);
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0U] 
            = vlSelf->register_array_pipelined_tb__DOT__i_data_ena;
    } else if ((2U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue) 
                        << 2U) | (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue) 
                                   << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace))))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size 
            = (0x7fU & ((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size) 
                        - (IData)(1U)));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0U] = 0U;
    } else if ((1U == (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue) 
                        << 2U) | (((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue) 
                                   << 1U) | (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace))))) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size 
            = (0x7fU & (((0U == (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size)) 
                         & (0U != (IData)(vlSelf->register_array_pipelined_tb__DOT__i_data_ena)))
                         ? ((IData)(1U) + (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size))
                         : (((0U != (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size)) 
                             & (0U == (IData)(vlSelf->register_array_pipelined_tb__DOT__i_data_ena)))
                             ? ((IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size) 
                                - (IData)(1U)) : (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size))));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[0U] 
            = vlSelf->register_array_pipelined_tb__DOT__i_data_ena;
    } else {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size 
            = (0x7fU & (IData)(vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size));
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__even_cycle_flag) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [1U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [1U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [1U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [3U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [2U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [3U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [2U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [2U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [3U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [5U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [4U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [5U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [4U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [4U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [5U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [7U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [6U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [7U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [6U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [6U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [7U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [9U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [8U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [9U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [8U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [8U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [9U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xbU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xaU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xbU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xaU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xaU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xbU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xdU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xcU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xdU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xcU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xcU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xdU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xfU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xeU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xfU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xeU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xeU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xfU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x11U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x10U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x11U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x10U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x10U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x11U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x13U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x12U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x13U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x12U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x12U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x13U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x15U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x14U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x15U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x14U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x14U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x15U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x17U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x16U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x17U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x16U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x16U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x17U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x19U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x18U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x19U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x18U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x18U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x19U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1fU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x21U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x20U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x21U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x20U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x20U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x21U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x23U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x22U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x23U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x22U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x22U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x23U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x25U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x24U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x25U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x24U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x24U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x25U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x27U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x26U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x27U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x26U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x26U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x27U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x29U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x28U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x29U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x28U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x28U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x29U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2fU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x31U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x30U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x31U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x30U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x30U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x31U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x33U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x32U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x33U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x32U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x32U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x33U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x35U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x34U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x35U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x34U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x34U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x35U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x37U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x36U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x37U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x36U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x36U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x37U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x39U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x38U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x39U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x38U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x38U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x39U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3fU];
        }
    } else if (vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__even_cycle_flag) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [2U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [1U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [2U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [1U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [1U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [2U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [4U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [3U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [4U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [3U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [3U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [4U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [6U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [5U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [6U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [5U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [5U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [6U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [8U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [7U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [8U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [7U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [7U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [8U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xaU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [9U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xaU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [9U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [9U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xaU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xcU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xbU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xcU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xbU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xbU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xcU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xeU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xdU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xeU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xdU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xdU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xeU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x10U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0xfU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x10U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xfU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0xfU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x10U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x12U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x11U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x12U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x11U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x11U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x12U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x14U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x13U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x14U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x13U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x13U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x14U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x16U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x15U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x16U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x15U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x15U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x16U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x18U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x17U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x18U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x17U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x17U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x18U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x19U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x19U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x19U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1eU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x20U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x1fU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x20U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1fU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x1fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x20U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x22U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x21U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x22U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x21U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x21U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x22U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x24U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x23U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x24U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x23U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x23U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x24U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x26U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x25U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x26U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x25U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x25U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x26U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x28U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x27U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x28U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x27U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x27U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x28U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x29U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x29U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x29U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2eU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x30U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x2fU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x30U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2fU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x2fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x30U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x32U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x31U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x32U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x31U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x31U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x32U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x34U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x33U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x34U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x33U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x33U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x34U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x36U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x35U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x36U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x35U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x35U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x36U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x38U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x37U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x38U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x37U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x37U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x38U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x39U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x39U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x39U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
             [0x3dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1
                [0x3eU];
        }
    }
    if (vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__even_cycle_flag) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [1U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [1U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [1U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [3U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [2U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [3U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [2U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [2U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [3U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [5U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [4U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [5U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [4U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [4U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [5U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [7U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [6U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [7U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [6U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [6U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [7U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [9U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [8U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [9U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [8U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [8U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [9U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xbU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xaU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xbU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xaU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xaU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xbU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xdU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xcU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xdU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xcU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xcU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xdU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xfU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xeU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xfU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xeU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xeU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xfU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x11U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x10U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x11U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x10U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x10U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x11U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x13U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x12U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x13U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x12U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x12U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x13U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x15U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x14U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x15U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x14U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x14U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x15U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x17U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x16U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x17U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x16U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x16U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x17U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x19U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x18U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x19U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x18U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x18U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x19U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1fU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x21U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x20U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x21U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x20U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x20U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x21U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x23U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x22U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x23U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x22U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x22U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x23U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x25U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x24U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x25U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x24U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x24U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x25U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x27U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x26U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x27U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x26U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x26U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x27U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x29U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x28U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x29U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x28U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x28U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x29U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2fU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x31U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x30U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x31U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x30U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x30U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x31U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x33U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x32U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x33U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x32U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x32U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x33U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x35U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x34U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x35U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x34U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x34U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x35U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x37U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x36U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x37U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x36U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x36U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x37U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x39U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x38U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x39U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x38U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x38U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x39U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3bU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3aU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3aU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3bU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3dU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3cU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3cU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3dU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3fU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3eU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3eU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3fU];
        }
    } else if (vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__even_cycle_flag) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[__Vilp] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [2U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [1U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [2U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [1U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[1U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [1U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[2U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [2U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [4U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [3U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [4U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [3U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[3U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [3U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[4U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [4U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [6U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [5U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [6U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [5U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[5U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [5U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[6U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [6U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [8U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [7U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [8U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [7U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[7U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [7U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[8U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [8U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xaU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [9U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xaU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [9U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[9U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [9U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xaU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xaU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xcU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xbU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xcU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xbU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xbU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xbU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xcU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xcU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xeU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xdU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xeU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xdU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xdU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xdU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xeU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xeU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x10U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0xfU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x10U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xfU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0xfU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0xfU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x10U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x10U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x12U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x11U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x12U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x11U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x11U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x11U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x12U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x12U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x14U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x13U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x14U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x13U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x13U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x13U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x14U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x14U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x16U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x15U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x16U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x15U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x15U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x15U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x16U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x16U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x18U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x17U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x18U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x17U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x17U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x17U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x18U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x18U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x19U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x19U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x19U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x19U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1eU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x20U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x1fU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x20U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1fU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x1fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x1fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x20U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x20U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x22U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x21U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x22U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x21U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x21U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x21U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x22U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x22U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x24U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x23U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x24U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x23U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x23U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x23U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x24U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x24U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x26U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x25U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x26U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x25U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x25U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x25U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x26U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x26U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x28U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x27U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x28U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x27U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x27U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x27U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x28U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x28U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x29U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x29U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x29U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x29U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2eU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x30U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x2fU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x30U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2fU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x2fU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x2fU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x30U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x30U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x32U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x31U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x32U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x31U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x31U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x31U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x32U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x32U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x34U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x33U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x34U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x33U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x33U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x33U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x34U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x34U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x36U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x35U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x36U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x35U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x35U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x35U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x36U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x36U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x38U] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x37U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x38U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x37U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x37U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x37U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x38U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x38U];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3aU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x39U])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3aU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x39U];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x39U] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x39U];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3aU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3aU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3cU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3bU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3cU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3bU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3bU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3bU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3cU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3cU];
        }
        if ((vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3eU] > vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
             [0x3dU])) {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3eU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3dU];
        } else {
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3dU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3dU];
            vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[0x3eU] 
                = vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1
                [0x3eU];
        }
    }
}

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_stl(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vregister_array_pipelined_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___eval_triggers__stl(Vregister_array_pipelined_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregister_array_pipelined_tb___024root___eval_phase__stl(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregister_array_pipelined_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vregister_array_pipelined_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__act(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge register_array_pipelined_tb.CLK or negedge register_array_pipelined_tb.RSTn)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge register_array_pipelined_tb.CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__nba(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge register_array_pipelined_tb.CLK or negedge register_array_pipelined_tb.RSTn)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge register_array_pipelined_tb.CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___ctor_var_reset(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->register_array_pipelined_tb__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__RSTn = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_ena = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__i_read_ena = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__i_data_ena = VL_RAND_RESET_I(16);
    vlSelf->register_array_pipelined_tb__DOT__i_wrt_dis = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__i_read_dis = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__i_data_dis = VL_RAND_RESET_I(16);
    vlSelf->register_array_pipelined_tb__DOT__o_full = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__o_empty = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__current_mode = 0;
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1.atDefault() = VL_RAND_RESET_I(16);
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_1_size = 0;
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0.atDefault() = VL_RAND_RESET_I(16);
    vlSelf->register_array_pipelined_tb__DOT__ref_queue_enq_0_size = 0;
    vlSelf->register_array_pipelined_tb__DOT__random_operation = 0;
    vlSelf->register_array_pipelined_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp = VL_RAND_RESET_I(16);
    vlSelf->register_array_pipelined_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 0;
    vlSelf->register_array_pipelined_tb__DOT__unnamedblk13__DOT__unnamedblk14__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__reset_queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__stage1[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__size = VL_RAND_RESET_I(7);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_size = VL_RAND_RESET_I(7);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__enqueue = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__dequeue = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__replace = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__even_cycle_flag = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_ena__DOT__next_even_cycle_flag = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__reset_queue[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__stage1[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__size = VL_RAND_RESET_I(7);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_size = VL_RAND_RESET_I(7);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__dequeue = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__replace = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__even_cycle_flag = VL_RAND_RESET_I(1);
    vlSelf->register_array_pipelined_tb__DOT__u_RegisterArray_dis__DOT__next_even_cycle_flag = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__value = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__i = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__unnamedblk17__DOT__unnamedblk18__DOT__j = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__enqueue__2__tmp = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__value = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__i = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk25__DOT__unnamedblk26__DOT__j = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__i = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk27__DOT__unnamedblk28__DOT__j = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__i = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk21__DOT__unnamedblk22__DOT__j = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__i = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__unnamedblk23__DOT__unnamedblk24__DOT__j = 0;
    vlSelf->__Vtask_register_array_pipelined_tb__DOT__replace__9__tmp = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvval__register_array_pipelined_tb__DOT__CLK__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__register_array_pipelined_tb__DOT__CLK__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__RSTn__0 = VL_RAND_RESET_I(1);
}
