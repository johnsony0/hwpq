// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_array_pipelined_tb.h for the primary calling header

#include "Vregister_array_pipelined_tb__pch.h"
#include "Vregister_array_pipelined_tb__Syms.h"
#include "Vregister_array_pipelined_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_array_pipelined_tb___024root___dump_triggers__act(Vregister_array_pipelined_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_array_pipelined_tb___024root___eval_triggers__act(Vregister_array_pipelined_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_array_pipelined_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_array_pipelined_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->register_array_pipelined_tb__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0))) 
                                     | ((~ (IData)(vlSelf->register_array_pipelined_tb__DOT__RSTn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__RSTn__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->register_array_pipelined_tb__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__CLK__0 
        = vlSelf->register_array_pipelined_tb__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__register_array_pipelined_tb__DOT__RSTn__0 
        = vlSelf->register_array_pipelined_tb__DOT__RSTn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregister_array_pipelined_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
