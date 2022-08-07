// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"

#include "Vtest_top___024root.h"

VL_ATTR_COLD void Vtest_top___024root___initial__TOP__0(Vtest_top___024root* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_initial(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_initial\n"); );
    // Body
    Vtest_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__i_clk = vlSelf->i_clk;
}

VL_ATTR_COLD void Vtest_top___024root___settle__TOP__0(Vtest_top___024root* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_settle(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_settle\n"); );
    // Body
    Vtest_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtest_top___024root___final(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___final\n"); );
}

VL_ATTR_COLD void Vtest_top___024root___ctor_var_reset(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_reset_n = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT____Vtogcov__i_clk = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT____Vtogcov__i_reset_n = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__w_wb_rdata = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__w_wb_ack = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__w_main_slave_ack = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512, vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_reset_n = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel = VL_RAND_RESET_I(4);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_stb = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_cyc = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_ack = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel = VL_RAND_RESET_I(16);
    vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack = VL_RAND_RESET_I(16);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__w_all_ones = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt = VL_RAND_RESET_I(4);
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__w_all_ones = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc = VL_RAND_RESET_I(30);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next = VL_RAND_RESET_I(30);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage = VL_RAND_RESET_I(3);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next = VL_RAND_RESET_I(3);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel = VL_RAND_RESET_I(4);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm = VL_RAND_RESET_I(20);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next = VL_RAND_RESET_I(30);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage = VL_RAND_RESET_I(3);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next = VL_RAND_RESET_I(3);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_sel_next = VL_RAND_RESET_I(4);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stb_next = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm = VL_RAND_RESET_I(20);
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out = VL_RAND_RESET_I(32);
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__i_sel = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack = VL_RAND_RESET_I(1);
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
