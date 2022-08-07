// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef VERILATED_VTEST_TOP___024ROOT_H_
#define VERILATED_VTEST_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtest_top__Syms;
VL_MODULE(Vtest_top___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_reset_n,0,0);
    CData/*0:0*/ test_top__DOT____Vtogcov__i_clk;
    CData/*0:0*/ test_top__DOT____Vtogcov__i_reset_n;
    CData/*0:0*/ test_top__DOT__core__DOT__w_wb_ack;
    CData/*0:0*/ test_top__DOT__core__DOT____Vtogcov__w_reset_n;
    CData/*3:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_sel;
    CData/*0:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_stb;
    CData/*0:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_cyc;
    CData/*0:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_ack;
    CData/*0:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev;
    CData/*3:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt;
    CData/*0:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT__w_all_ones;
    CData/*0:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT__r_out;
    CData/*0:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev;
    CData/*3:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt;
    CData/*0:0*/ test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__w_all_ones;
    CData/*2:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_stage;
    CData/*2:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_stage_next;
    CData/*3:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_sel;
    CData/*0:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_stb;
    CData/*0:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_cyc;
    CData/*2:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage;
    CData/*2:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next;
    CData/*3:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_sel_next;
    CData/*0:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stb_next;
    CData/*0:0*/ test_top__DOT__core__DOT__u_tcm__DOT__r_ack;
    CData/*0:0*/ test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__i_sel;
    CData/*0:0*/ test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    SData/*15:0*/ test_top__DOT__core__DOT__w_main_slave_ack;
    SData/*15:0*/ test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel;
    SData/*15:0*/ test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack;
    SData/*15:0*/ test_top__DOT__core__DOT__u_nic_main__DOT__w_select;
    IData/*31:0*/ test_top__DOT__core__DOT__w_wb_rdata;
    VlWide<16>/*511:0*/ test_top__DOT__core__DOT__w_main_slave_rdata;
    IData/*31:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_addr;
    IData/*31:0*/ test_top__DOT__core__DOT____Vtogcov__w_wb_rdata;
    IData/*29:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_pc;
    IData/*29:0*/ test_top__DOT__core__DOT__u_rv__DOT__w_pc_next;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm;
    IData/*19:0*/ test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm;
    IData/*29:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm;
    IData/*31:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm;
    IData/*19:0*/ test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm;
    IData/*31:0*/ test_top__DOT__core__DOT__u_tcm__DOT__r_out;
    IData/*31:0*/ test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata;
    VlUnpacked<IData/*31:0*/, 256> test_top__DOT__core__DOT__u_tcm__DOT__r_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtest_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_top___024root(Vtest_top__Syms* symsp, const char* name);
    ~Vtest_top___024root();
    VL_UNCOPYABLE(Vtest_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
