// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_top.h"
#include "Vtest_top__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtest_top::Vtest_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtest_top__Syms(_vcontextp__, _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_reset_n{vlSymsp->TOP.i_reset_n}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtest_top::Vtest_top(const char* _vcname__)
    : Vtest_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtest_top::~Vtest_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtest_top___024root___eval_initial(Vtest_top___024root* vlSelf);
void Vtest_top___024root___eval_settle(Vtest_top___024root* vlSelf);
void Vtest_top___024root___eval(Vtest_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vtest_top___024root___eval_debug_assertions(Vtest_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_top___024root___final(Vtest_top___024root* vlSelf);

static void _eval_initial_loop(Vtest_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtest_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtest_top___024root___eval_settle(&(vlSymsp->TOP));
        Vtest_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtest_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtest_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

void Vtest_top::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtest_top::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Utilities

VerilatedContext* Vtest_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtest_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtest_top::final() {
    Vtest_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtest_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtest_top::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
