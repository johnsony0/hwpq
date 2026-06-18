// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_array_pipelined_tb.h for the primary calling header

#include "Vregister_array_pipelined_tb__pch.h"
#include "Vregister_array_pipelined_tb___024root.h"

void Vregister_array_pipelined_tb___024root___nba_sequent__TOP__0(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___nba_sequent__TOP__1(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___nba_sequent__TOP__2(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___nba_comb__TOP__0(Vregister_array_pipelined_tb___024root* vlSelf);

void Vregister_array_pipelined_tb___024root___eval_nba(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_array_pipelined_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_array_pipelined_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_array_pipelined_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_array_pipelined_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vregister_array_pipelined_tb___024root___timing_resume(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7ab91862__0.resume("@(posedge register_array_pipelined_tb.CLK)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregister_array_pipelined_tb___024root___timing_commit(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7ab91862__0.commit("@(posedge register_array_pipelined_tb.CLK)");
    }
}

void Vregister_array_pipelined_tb___024root___eval_triggers__act(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___eval_act(Vregister_array_pipelined_tb___024root* vlSelf);

bool Vregister_array_pipelined_tb___024root___eval_phase__act(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregister_array_pipelined_tb___024root___eval_triggers__act(vlSelf);
    Vregister_array_pipelined_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregister_array_pipelined_tb___024root___timing_resume(vlSelf);
        Vregister_array_pipelined_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregister_array_pipelined_tb___024root___eval_phase__nba(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregister_array_pipelined_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__nba(Vregister_array_pipelined_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__act(Vregister_array_pipelined_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_array_pipelined_tb___024root___eval(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregister_array_pipelined_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregister_array_pipelined_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hwpq/register_array_pipelined/rtl/sim/register_array_pipelined_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregister_array_pipelined_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregister_array_pipelined_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregister_array_pipelined_tb___024root___eval_debug_assertions(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
