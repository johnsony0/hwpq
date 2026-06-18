// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister_array_pipelined_tb__pch.h"

//============================================================
// Constructors

Vregister_array_pipelined_tb::Vregister_array_pipelined_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregister_array_pipelined_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregister_array_pipelined_tb::Vregister_array_pipelined_tb(const char* _vcname__)
    : Vregister_array_pipelined_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregister_array_pipelined_tb::~Vregister_array_pipelined_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregister_array_pipelined_tb___024root___eval_debug_assertions(Vregister_array_pipelined_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister_array_pipelined_tb___024root___eval_static(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___eval_initial(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___eval_settle(Vregister_array_pipelined_tb___024root* vlSelf);
void Vregister_array_pipelined_tb___024root___eval(Vregister_array_pipelined_tb___024root* vlSelf);

void Vregister_array_pipelined_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister_array_pipelined_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister_array_pipelined_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregister_array_pipelined_tb___024root___eval_static(&(vlSymsp->TOP));
        Vregister_array_pipelined_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vregister_array_pipelined_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregister_array_pipelined_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregister_array_pipelined_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vregister_array_pipelined_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vregister_array_pipelined_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregister_array_pipelined_tb___024root___eval_final(Vregister_array_pipelined_tb___024root* vlSelf);

VL_ATTR_COLD void Vregister_array_pipelined_tb::final() {
    Vregister_array_pipelined_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregister_array_pipelined_tb::hierName() const { return vlSymsp->name(); }
const char* Vregister_array_pipelined_tb::modelName() const { return "Vregister_array_pipelined_tb"; }
unsigned Vregister_array_pipelined_tb::threads() const { return 1; }
void Vregister_array_pipelined_tb::prepareClone() const { contextp()->prepareClone(); }
void Vregister_array_pipelined_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vregister_array_pipelined_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vregister_array_pipelined_tb::trace()' called on model that was Verilated without --trace option");
}
