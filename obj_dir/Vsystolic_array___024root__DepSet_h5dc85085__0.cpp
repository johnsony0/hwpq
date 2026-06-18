// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"
#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array___024root___eval_triggers__act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->systolic_array_tb__DOT__CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__CLK__0))) 
                                     | ((~ (IData)(vlSelf->systolic_array_tb__DOT__RSTn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__RSTn__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->systolic_array_tb__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__CLK__0))));
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__CLK__0 
        = vlSelf->systolic_array_tb__DOT__CLK;
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__RSTn__0 
        = vlSelf->systolic_array_tb__DOT__RSTn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array___024root___dump_triggers__act(vlSelf);
    }
#endif
}
