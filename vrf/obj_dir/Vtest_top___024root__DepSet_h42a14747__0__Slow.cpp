// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top___024root.h"

VL_ATTR_COLD void Vtest_top___024root___settle__TOP__0(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ test_top__DOT__core__DOT__o_rdata__en0;
    CData/*0:0*/ test_top__DOT__core__DOT__w_wb_ack__out2;
    IData/*31:0*/ test_top__DOT__core__DOT__w_wb_rdata__out3;
    // Body
    ++(vlSymsp->__Vcoverage[170]);
    if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_sel_next)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_sel_next 
            = (1U | (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_sel_next));
    }
    if ((1U & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr)) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = (0xfffffffeU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr);
    }
    if (((IData)(vlSelf->i_clk) ^ (IData)(vlSelf->test_top__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->test_top__DOT____Vtogcov__i_clk = vlSelf->i_clk;
    }
    if (((IData)(vlSelf->i_reset_n) ^ (IData)(vlSelf->test_top__DOT____Vtogcov__i_reset_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->test_top__DOT____Vtogcov__i_reset_n 
            = vlSelf->i_reset_n;
    }
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack 
            = vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack;
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if (((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
          ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_fetch_instr) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
               ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
               ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
               ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
               ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                  ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                  ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                  ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                  ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                   ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                   ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                   ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                   ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                    ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                    ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                    ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                    ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                     ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                     ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                     ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                     ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                      ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                      ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                      ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                      ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                       ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                       ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                       ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                       ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                        ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                        ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
                        ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    if (((vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
          ^ vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_rdata) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out));
    }
    vlSelf->test_top__DOT__core__DOT__w_main_slave_ack 
        = ((0xfffeU & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
           | (IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
        = ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                            >> 0x15U)))));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
        = (((- (IData)((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                   >> 0x14U)));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
        = (((- (IData)((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        >> 0x1fU))) << 0xbU) | ((0x7e0U 
                                                 & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                      >> 7U))));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
        = (((- (IData)((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                                         >> 7U)))));
    vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0U] 
        = vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out;
    if ((1U & (~ ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
                ++(vlSymsp->__Vcoverage[164]);
            }
            if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)))) {
                ++(vlSymsp->__Vcoverage[169]);
            }
        }
        if ((2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
            if ((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
                ++(vlSymsp->__Vcoverage[166]);
            }
            if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)))) {
                ++(vlSymsp->__Vcoverage[165]);
            }
        }
    }
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_stb))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_stb 
            = vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb;
    }
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_cyc))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_cyc 
            = vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc;
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage 
            = ((6U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage 
            = ((5U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage 
            = ((3U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)));
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel 
            = ((0xeU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel 
            = ((0xdU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel 
            = ((0xbU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel)));
    }
    if ((8U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel 
            = ((7U & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_sel)) 
               | (8U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel)));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
               ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                        << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 1U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                        << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 2U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 4U)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                           << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 3U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 5U)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                           << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 4U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 6U)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                           << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 5U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 7U)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                           << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 6U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 8U)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                            << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 7U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 9U)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                            << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 8U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                            << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 9U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                          >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                            << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xaU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                             << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xbU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                             << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xcU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                             << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xdU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                             << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xeU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                              << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0xfU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                            >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                              << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x10U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                              << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x11U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                              << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x12U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x13U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x14U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x15U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x16U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x17U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x18U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x19U) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x1aU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x1bU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                >> 0x1cU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                             >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 << 2U)));
    }
    if ((IData)(((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                  >> 0x1dU) ^ (vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
                               >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_addr) 
               | (0x80000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 << 2U)));
    }
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
        = (0x3fffffffU & ((2U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))
                           ? ((IData)(1U) + vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)
                           : vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xfffcU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((1U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 1U) | 
              (0U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                              >> 0x1aU)))));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xfff3U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((3U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 3U) | 
              ((2U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 2U)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xffcfU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((5U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 5U) | 
              ((4U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 4U)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xff3fU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((7U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 7U) | 
              ((6U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 6U)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xfcffU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((9U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 9U) | 
              ((8U == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                               >> 0x1aU))) << 8U)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xf3ffU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((0xbU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 >> 0x1aU))) << 0xbU) 
              | ((0xaU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                   >> 0x1aU))) << 0xaU)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0xcfffU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((0xdU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 >> 0x1aU))) << 0xdU) 
              | ((0xcU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                   >> 0x1aU))) << 0xcU)));
    vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select 
        = ((0x3fffU & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
           | (((0xfU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                 >> 0x1aU))) << 0xfU) 
              | ((0xeU == (0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                   >> 0x1aU))) << 0xeU)));
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_reset_n))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_reset_n 
            = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out;
    }
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__w_all_ones 
        = (0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt));
    if (((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__w_all_ones))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__w_all_ones 
            = (0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt));
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt 
            = ((0xeU & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt 
            = ((0xdU & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt 
            = ((0xbU & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)));
    }
    if ((8U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt 
            = ((7U & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_cnt)) 
               | (8U & (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)));
    }
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev 
            = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev;
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfffeU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfffdU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfffbU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((8U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfff7U & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (8U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x10U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xffefU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x10U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x20U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xffdfU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x20U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x40U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xffbfU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x40U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x80U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xff7fU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x80U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x100U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfeffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x100U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x200U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfdffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x200U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x400U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xfbffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x400U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x800U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xf7ffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x800U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x1000U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xefffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x1000U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x2000U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xdfffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x2000U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x4000U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0xbfffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x4000U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((0x8000U & ((IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack 
            = ((0x7fffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_ack)) 
               | (0x8000U & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xfbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xf7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0xbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm 
            = ((0x7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_j_imm) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if (((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm 
          ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_i_imm) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if (((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm 
          ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_s_imm) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if (((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm 
          ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_instr_b_imm) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm));
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffffeU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (1U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffffdU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (2U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffffbU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (4U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
               ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffff7U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (8U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffffefU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffffdfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffffbfU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                  ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffff7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffeffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffdffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffffbffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                   ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffff7ffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffefffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffdfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fffbfffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                    ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fff7fffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffeffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffdffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ffbffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                     ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3ff7ffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fefffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fdfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3fbfffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                      ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3f7fffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3effffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3dffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x3bffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                       ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x37ffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x2fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next 
                        ^ vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next 
            = ((0x1fffffffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__w_pc_next) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next));
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__i_sel)))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__i_sel 
            = (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select));
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfffeU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfffdU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfffbU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((8U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfff7U & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (8U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x10U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xffefU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x10U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x20U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xffdfU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x20U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x40U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xffbfU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x40U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x80U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                  ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xff7fU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x80U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x100U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfeffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x100U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x200U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfdffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x200U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x400U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xfbffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x400U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x800U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                   ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xf7ffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x800U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x1000U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xefffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x1000U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x2000U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xdfffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x2000U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x4000U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0xbfffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x4000U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    if ((0x8000U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                    ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel 
            = ((0x7fffU & (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_main_slave_sel)) 
               | (0x8000U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)));
    }
    test_top__DOT__core__DOT__w_wb_ack__out2 = (1U 
                                                & ((((((((((((((((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                  & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                 | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                      & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                    >> 1U)) 
                                                                | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                    & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                   >> 2U)) 
                                                               | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                    & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                  >> 3U)) 
                                                              | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                  & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                 >> 4U)) 
                                                             | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                  & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                 & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                                >> 5U)) 
                                                            | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                 & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                                & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                               >> 6U)) 
                                                           | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                                & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                              >> 7U)) 
                                                          | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                              & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                             >> 8U)) 
                                                         | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                              & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                             & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                            >> 9U)) 
                                                        | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                             & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                            & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                           >> 0xaU)) 
                                                       | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                            & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                           & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                          >> 0xbU)) 
                                                      | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                           & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                          & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                         >> 0xcU)) 
                                                     | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                          & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                         & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                        >> 0xdU)) 
                                                    | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                         & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                        & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                       >> 0xeU)) 
                                                   | ((((IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select) 
                                                        & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
                                                       & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select)) 
                                                      >> 0xfU)));
    test_top__DOT__core__DOT__o_rdata__en0 = ((((((
                                                   ((((((((((((1U 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                               ? 0xffffffffU
                                                               : 0U) 
                                                             | ((2U 
                                                                 & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                 ? 0xffffffffU
                                                                 : 0U)) 
                                                            | ((4U 
                                                                & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                ? 0xffffffffU
                                                                : 0U)) 
                                                           | ((8U 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                               ? 0xffffffffU
                                                               : 0U)) 
                                                          | ((0x10U 
                                                              & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                              ? 0xffffffffU
                                                              : 0U)) 
                                                         | ((0x20U 
                                                             & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                             ? 0xffffffffU
                                                             : 0U)) 
                                                        | ((0x40U 
                                                            & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                            ? 0xffffffffU
                                                            : 0U)) 
                                                       | ((0x80U 
                                                           & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                           ? 0xffffffffU
                                                           : 0U)) 
                                                      | ((0x100U 
                                                          & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                          ? 0xffffffffU
                                                          : 0U)) 
                                                     | ((0x200U 
                                                         & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                         ? 0xffffffffU
                                                         : 0U)) 
                                                    | ((0x400U 
                                                        & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                        ? 0xffffffffU
                                                        : 0U)) 
                                                   | ((0x800U 
                                                       & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                       ? 0xffffffffU
                                                       : 0U)) 
                                                  | ((0x1000U 
                                                      & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 | ((0x2000U 
                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                | ((0x4000U 
                                                    & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                    ? 0xffffffffU
                                                    : 0U)) 
                                               | ((0x8000U 
                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                   ? 0xffffffffU
                                                   : 0U)) 
                                              | ((0U 
                                                  != (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                  ? 0U
                                                  : 0xffffffffU));
    test_top__DOT__core__DOT__w_wb_rdata__out3 = ((
                                                   ((((((((((((((((1U 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                   ? 
                                                                  vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0U]
                                                                   : 0U) 
                                                                 & ((1U 
                                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                     ? 0xffffffffU
                                                                     : 0U)) 
                                                                | (((2U 
                                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                     ? 
                                                                    vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[1U]
                                                                     : 0U) 
                                                                   & ((2U 
                                                                       & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                               | (((4U 
                                                                    & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                    ? 
                                                                   vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[2U]
                                                                    : 0U) 
                                                                  & ((4U 
                                                                      & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                              | (((8U 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                   ? 
                                                                  vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[3U]
                                                                   : 0U) 
                                                                 & ((8U 
                                                                     & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                             | (((0x10U 
                                                                  & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                  ? 
                                                                 vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[4U]
                                                                  : 0U) 
                                                                & ((0x10U 
                                                                    & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                            | (((0x20U 
                                                                 & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                 ? 
                                                                vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[5U]
                                                                 : 0U) 
                                                               & ((0x20U 
                                                                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                           | (((0x40U 
                                                                & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                ? 
                                                               vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[6U]
                                                                : 0U) 
                                                              & ((0x40U 
                                                                  & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                  ? 0xffffffffU
                                                                  : 0U))) 
                                                          | (((0x80U 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                               ? 
                                                              vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[7U]
                                                               : 0U) 
                                                             & ((0x80U 
                                                                 & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                                         | (((0x100U 
                                                              & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                              ? 
                                                             vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[8U]
                                                              : 0U) 
                                                            & ((0x100U 
                                                                & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                             ? 
                                                            vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[9U]
                                                             : 0U) 
                                                           & ((0x200U 
                                                               & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                                       | (((0x400U 
                                                            & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                            ? 
                                                           vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xaU]
                                                            : 0U) 
                                                          & ((0x400U 
                                                              & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                                      | (((0x800U 
                                                           & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                           ? 
                                                          vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xbU]
                                                           : 0U) 
                                                         & ((0x800U 
                                                             & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                                     | (((0x1000U 
                                                          & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                          ? 
                                                         vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xcU]
                                                          : 0U) 
                                                        & ((0x1000U 
                                                            & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                                    | (((0x2000U 
                                                         & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                         ? 
                                                        vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xdU]
                                                         : 0U) 
                                                       & ((0x2000U 
                                                           & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                                   | (((0x4000U 
                                                        & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                        ? 
                                                       vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xeU]
                                                        : 0U) 
                                                      & ((0x4000U 
                                                          & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                                  | (((0x8000U 
                                                       & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                       ? 
                                                      vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0xfU]
                                                       : 0U) 
                                                     & ((0x8000U 
                                                         & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))
                                                         ? 0xffffffffU
                                                         : 0U)));
    vlSelf->test_top__DOT__core__DOT__w_wb_ack = ((IData)(test_top__DOT__core__DOT__w_wb_ack__out2) 
                                                  & ((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))) 
                                                     | (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))))));
    if ((4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
        if ((1U & (~ ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)))) {
                ++(vlSymsp->__Vcoverage[167]);
            }
            if ((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
                ++(vlSymsp->__Vcoverage[168]);
            }
        }
        if ((2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))) {
            ++(vlSymsp->__Vcoverage[169]);
        }
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next = 1U;
    } else {
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next 
            = ((2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))
                ? 1U : ((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage))
                         ? ((IData)(vlSelf->test_top__DOT__core__DOT__w_wb_ack)
                             ? 2U : 1U) : 1U));
    }
    vlSelf->test_top__DOT__core__DOT__w_wb_rdata = 
        (test_top__DOT__core__DOT__w_wb_rdata__out3 
         & test_top__DOT__core__DOT__o_rdata__en0);
    if (((IData)(vlSelf->test_top__DOT__core__DOT__w_wb_ack) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_ack))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_ack 
            = vlSelf->test_top__DOT__core__DOT__w_wb_ack;
    }
    if ((1U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
               ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffffeU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (1U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((2U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
               ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffffdU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (2U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((4U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
               ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffffbU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (4U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((8U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
               ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffff7U & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (8U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x10U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                  ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffffefU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x10U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x20U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                  ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffffdfU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x20U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x40U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                  ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffffbfU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x40U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x80U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                  ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffff7fU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x80U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x100U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                   ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffeffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x100U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x200U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                   ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffdffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x200U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x400U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                   ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffffbffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x400U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x800U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                   ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffff7ffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x800U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x1000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                    ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffefffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x1000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x2000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                    ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffdfffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x2000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x4000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                    ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffffbfffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x4000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x8000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                    ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffff7fffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x8000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x10000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                     ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffeffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x10000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x20000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                     ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffdffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x20000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x40000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                     ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfffbffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x40000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x80000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                     ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfff7ffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x80000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x100000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                      ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffefffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x100000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x200000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                      ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffdfffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x200000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x400000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                      ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xffbfffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x400000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x800000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                      ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xff7fffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x800000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x1000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                       ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfeffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x1000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x2000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                       ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfdffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x2000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x4000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                       ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xfbffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x4000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x8000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                       ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xf7ffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x8000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x10000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                        ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xefffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x10000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x20000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                        ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xdfffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x20000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if ((0x40000000U & (vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
                        ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0xbfffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x40000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if (((vlSelf->test_top__DOT__core__DOT__w_wb_rdata 
          ^ vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata 
            = ((0x7fffffffU & vlSelf->test_top__DOT__core__DOT____Vtogcov__w_wb_rdata) 
               | (0x80000000U & vlSelf->test_top__DOT__core__DOT__w_wb_rdata));
    }
    if (((1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next)) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stb_next))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stb_next 
            = (1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next));
    }
    if ((1U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next 
            = ((6U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)) 
               | (1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next)));
    }
    if ((2U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next 
            = ((5U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)) 
               | (2U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next)));
    }
    if ((4U & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next) 
               ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next 
            = ((3U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT____Vtogcov__r_stage_next)) 
               | (4U & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next)));
    }
}

VL_ATTR_COLD void Vtest_top___024root___initial__TOP__0(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h7bcae3fd__0;
    // Body
    if ((0U != VL_TESTPLUSARGS_I("trace"))) {
        __Vtemp_h7bcae3fd__0[0U] = 0x2e766364U;
        __Vtemp_h7bcae3fd__0[1U] = 0x77617665U;
        __Vtemp_h7bcae3fd__0[2U] = 0x6f67732fU;
        __Vtemp_h7bcae3fd__0[3U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_h7bcae3fd__0));
        vlSymsp->_traceDumpOpen();
        ++(vlSymsp->__Vcoverage[2]);
    } else {
        ++(vlSymsp->__Vcoverage[3]);
    }
    ++(vlSymsp->__Vcoverage[4]);
    VL_READMEM_N(true, 32, 256, 0, std::string("mem.vh")
                 ,  &(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem)
                 , 0, ~0ULL);
    ++(vlSymsp->__Vcoverage[380]);
}

VL_ATTR_COLD void Vtest_top___024root___configure_coverage(Vtest_top___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "test_top.sv", 5, 41, ".test_top", "v_toggle/test_top", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "test_top.sv", 6, 41, ".test_top", "v_toggle/test_top", "i_reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "test_top.sv", 16, 5, ".test_top", "v_branch/test_top", "if", "16-18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "test_top.sv", 16, 6, ".test_top", "v_branch/test_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "test_top.sv", 15, 1, ".test_top", "v_line/test_top", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtl//core.sv", 5, 41, ".test_top.core", "v_toggle/core", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtl//core.sv", 6, 41, ".test_top.core", "v_toggle/core", "i_reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl//core.sv", 9, 17, ".test_top.core", "v_toggle/core", "w_reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//core.sv", 10, 17, ".test_top.core", "v_toggle/core", "w_wb_addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 11, 17, ".test_top.core", "v_toggle/core", "w_wb_wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtl//core.sv", 12, 17, ".test_top.core", "v_toggle/core", "w_wb_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//core.sv", 13, 17, ".test_top.core", "v_toggle/core", "w_wb_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl//core.sv", 14, 17, ".test_top.core", "v_toggle/core", "w_wb_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl//core.sv", 14, 17, ".test_top.core", "v_toggle/core", "w_wb_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl//core.sv", 14, 17, ".test_top.core", "v_toggle/core", "w_wb_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtl//core.sv", 14, 17, ".test_top.core", "v_toggle/core", "w_wb_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtl//core.sv", 15, 17, ".test_top.core", "v_toggle/core", "w_wb_stb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtl//core.sv", 16, 17, ".test_top.core", "v_toggle/core", "w_wb_cyc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtl//core.sv", 17, 17, ".test_top.core", "v_toggle/core", "w_wb_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtl//core.sv", 52, 41, ".test_top.core", "v_toggle/core", "w_main_slave_sel[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtl//core.sv", 53, 41, ".test_top.core", "v_toggle/core", "w_main_slave_ack[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtl//debounce.sv", 8, 41, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "../rtl//debounce.sv", 9, 41, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "i_sig", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl//debounce.sv", 10, 41, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "o_sig", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../rtl//debounce.sv", 15, 13, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../rtl//debounce.sv", 16, 20, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_cnt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../rtl//debounce.sv", 16, 20, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_cnt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../rtl//debounce.sv", 16, 20, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_cnt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../rtl//debounce.sv", 16, 20, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_cnt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../rtl//debounce.sv", 17, 13, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "w_all_ones", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl//debounce.sv", 18, 13, ".test_top.core.u_deb_reset", "v_toggle/debounce__L4", "r_out", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../rtl//debounce.sv", 20, 5, ".test_top.core.u_deb_reset", "v_line/debounce__L4", "block", "20-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../rtl//debounce.sv", 29, 14, ".test_top.core.u_deb_reset", "v_branch/debounce__L4", "if", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../rtl//debounce.sv", 29, 15, ".test_top.core.u_deb_reset", "v_branch/debounce__L4", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../rtl//debounce.sv", 27, 9, ".test_top.core.u_deb_reset", "v_line/debounce__L4", "elsif", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../rtl//debounce.sv", 25, 5, ".test_top.core.u_deb_reset", "v_line/debounce__L4", "block", "25-26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../rtl//debounce.sv", 37, 9, ".test_top.core.u_deb_reset", "v_branch/debounce__L4", "if", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../rtl//debounce.sv", 37, 10, ".test_top.core.u_deb_reset", "v_branch/debounce__L4", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../rtl//debounce.sv", 35, 5, ".test_top.core.u_deb_reset", "v_line/debounce__L4", "block", "35-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtl//rv_core.sv", 8, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "../rtl//rv_core.sv", 9, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_reset_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//rv_core.sv", 11, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_adr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 12, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_dat[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtl//rv_core.sv", 13, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_dat[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 14, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl//rv_core.sv", 15, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl//rv_core.sv", 15, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl//rv_core.sv", 15, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtl//rv_core.sv", 15, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtl//rv_core.sv", 16, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_stb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtl//rv_core.sv", 17, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "i_wb_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtl//rv_core.sv", 18, 41, ".test_top.core.u_rv", "v_toggle/rv_core", "o_wb_cyc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//rv_core.sv", 27, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../rtl//rv_core.sv", 28, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_pc_next[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//rv_core.sv", 29, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_addr_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../rtl//rv_core.sv", 31, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../rtl//rv_core.sv", 31, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../rtl//rv_core.sv", 31, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../rtl//rv_core.sv", 32, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage_next[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../rtl//rv_core.sv", 32, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../rtl//rv_core.sv", 32, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stage_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../rtl//rv_core.sv", 39, 9, ".test_top.core.u_rv", "v_branch/rv_core", "if", "39-40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../rtl//rv_core.sv", 39, 10, ".test_top.core.u_rv", "v_branch/rv_core", "else", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../rtl//rv_core.sv", 37, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../rtl//rv_core.sv", 47, 9, ".test_top.core.u_rv", "v_branch/rv_core", "if", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../rtl//rv_core.sv", 47, 10, ".test_top.core.u_rv", "v_branch/rv_core", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../rtl//rv_core.sv", 45, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "45-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../rtl//rv_core.sv", 57, 24, ".test_top.core.u_rv", "v_line/rv_core", "case", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../rtl//rv_core.sv", 58, 25, ".test_top.core.u_rv", "v_line/rv_core", "case", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../rtl//rv_core.sv", 59, 26, ".test_top.core.u_rv", "v_line/rv_core", "case", "59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../rtl//rv_core.sv", 60, 25, ".test_top.core.u_rv", "v_line/rv_core", "case", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../rtl//rv_core.sv", 61, 24, ".test_top.core.u_rv", "v_line/rv_core", "case", "61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../rtl//rv_core.sv", 62, 13, ".test_top.core.u_rv", "v_line/rv_core", "case", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../rtl//rv_core.sv", 53, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "53-54,56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl//rv_core.sv", 66, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl//rv_core.sv", 66, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl//rv_core.sv", 66, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtl//rv_core.sv", 66, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl//rv_core.sv", 67, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel_next[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl//rv_core.sv", 67, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl//rv_core.sv", 67, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel_next[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl//rv_core.sv", 67, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_sel_next[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../rtl//rv_core.sv", 69, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtl//rv_core.sv", 72, 13, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../rtl//rv_core.sv", 73, 13, ".test_top.core.u_rv", "v_toggle/rv_core", "r_stb_next", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../rtl//rv_core.sv", 76, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtl//rv_core.sv", 79, 13, ".test_top.core.u_rv", "v_toggle/rv_core", "r_cyc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../rtl//rv_core.sv", 80, 13, ".test_top.core.u_rv", "v_toggle/rv_core", "r_cyc_next", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../rtl//rv_core.sv", 83, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "83-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtl//rv_core.sv", 86, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "r_fetch_instr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "../rtl//rv_core.sv", 89, 9, ".test_top.core.u_rv", "v_branch/rv_core", "if", "89-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "../rtl//rv_core.sv", 89, 10, ".test_top.core.u_rv", "v_branch/rv_core", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "../rtl//rv_core.sv", 87, 5, ".test_top.core.u_rv", "v_line/rv_core", "block", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../rtl//rv_core.sv", 95, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_op[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../rtl//rv_core.sv", 96, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rd[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../rtl//rv_core.sv", 96, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rd[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../rtl//rv_core.sv", 96, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rd[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../rtl//rv_core.sv", 96, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rd[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../rtl//rv_core.sv", 96, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rd[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtl//rv_core.sv", 97, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtl//rv_core.sv", 97, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtl//rv_core.sv", 97, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtl//rv_core.sv", 98, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtl//rv_core.sv", 98, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtl//rv_core.sv", 98, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtl//rv_core.sv", 98, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtl//rv_core.sv", 98, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtl//rv_core.sv", 99, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtl//rv_core.sv", 99, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtl//rv_core.sv", 99, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtl//rv_core.sv", 99, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtl//rv_core.sv", 99, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_rs2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtl//rv_core.sv", 100, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_r_funct7[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "../rtl//rv_core.sv", 101, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_i_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "../rtl//rv_core.sv", 103, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_s_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "../rtl//rv_core.sv", 106, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_b_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "../rtl//rv_core.sv", 111, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_u_imm[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "../rtl//rv_core.sv", 113, 17, ".test_top.core.u_rv", "v_toggle/rv_core", "w_instr_j_imm[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../rtl//nic.sv", 10, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_nic_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//nic.sv", 11, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_addr_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//nic.sv", 11, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_addr_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//nic.sv", 11, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_addr_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//nic.sv", 11, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_addr_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../rtl//nic.sv", 13, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "i_ack[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtl//nic.sv", 14, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_slave_sel[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../rtl//nic.sv", 15, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../rtl//nic.sv", 16, 41, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "o_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../rtl//nic.sv", 19, 30, ".test_top.core.u_nic_main", "v_toggle/nic__A4", "w_select[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "../rtl//tcm.sv", 9, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "../rtl//tcm.sv", 10, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../rtl//tcm.sv", 11, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_addr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../rtl//tcm.sv", 12, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_stb", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../rtl//tcm.sv", 13, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_cyc", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 14, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_we", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../rtl//tcm.sv", 15, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../rtl//tcm.sv", 15, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../rtl//tcm.sv", 15, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../rtl//tcm.sv", 15, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_sel[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "../rtl//tcm.sv", 16, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "i_wb_wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../rtl//tcm.sv", 17, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../rtl//tcm.sv", 18, 41, ".test_top.core.u_tcm", "v_toggle/tcm", "o_wb_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../rtl//tcm.sv", 23, 33, ".test_top.core.u_tcm", "v_toggle/tcm", "w_addr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "../rtl//tcm.sv", 25, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "../rtl//tcm.sv", 26, 17, ".test_top.core.u_tcm", "v_toggle/tcm", "r_ack", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "../rtl//tcm.sv", 32, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "32-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "../rtl//tcm.sv", 32, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "../rtl//tcm.sv", 34, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "../rtl//tcm.sv", 34, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "../rtl//tcm.sv", 36, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "36-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "../rtl//tcm.sv", 36, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "../rtl//tcm.sv", 38, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "../rtl//tcm.sv", 38, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "../rtl//tcm.sv", 30, 5, ".test_top.core.u_tcm", "v_line/tcm", "block", "30-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "../rtl//tcm.sv", 44, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "44-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "../rtl//tcm.sv", 44, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "../rtl//tcm.sv", 46, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "46-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "../rtl//tcm.sv", 46, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "../rtl//tcm.sv", 48, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "48-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "../rtl//tcm.sv", 48, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "../rtl//tcm.sv", 50, 9, ".test_top.core.u_tcm", "v_branch/tcm", "if", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "../rtl//tcm.sv", 50, 10, ".test_top.core.u_tcm", "v_branch/tcm", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "../rtl//tcm.sv", 42, 5, ".test_top.core.u_tcm", "v_line/tcm", "block", "42-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "../rtl//tcm.sv", 54, 5, ".test_top.core.u_tcm", "v_line/tcm", "block", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "../rtl//tcm.sv", 60, 5, ".test_top.core.u_tcm", "v_line/tcm", "block", "60-61");
}
