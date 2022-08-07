// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"

#include "Vtest_top___024root.h"

void Vtest_top___024root___combo__TOP__0(Vtest_top___024root* vlSelf);
void Vtest_top___024root___sequent__TOP__0(Vtest_top___024root* vlSelf);

void Vtest_top___024root___eval(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval\n"); );
    // Body
    Vtest_top___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->i_clk) & (~ (IData)(vlSelf->__Vclklast__TOP__i_clk)))) {
        Vtest_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
}

#ifdef VL_DEBUG
void Vtest_top___024root___eval_debug_assertions(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_reset_n & 0xfeU))) {
        Verilated::overWidthError("i_reset_n");}
}
#endif  // VL_DEBUG
