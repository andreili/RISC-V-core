// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top___024root.h"

VL_INLINE_OPT void Vtest_top___024root___combo__TOP__0(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___combo__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->i_clk) ^ (IData)(vlSelf->test_top__DOT____Vtogcov__i_clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->test_top__DOT____Vtogcov__i_clk = vlSelf->i_clk;
    }
    if (((IData)(vlSelf->i_reset_n) ^ (IData)(vlSelf->test_top__DOT____Vtogcov__i_reset_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->test_top__DOT____Vtogcov__i_reset_n 
            = vlSelf->i_reset_n;
    }
}

VL_INLINE_OPT void Vtest_top___024root___sequent__TOP__0(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ test_top__DOT__core__DOT__o_rdata__en0;
    CData/*0:0*/ test_top__DOT__core__DOT__w_wb_ack__out2;
    IData/*31:0*/ test_top__DOT__core__DOT__w_wb_rdata__out3;
    CData/*3:0*/ __Vdly__test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt;
    // Body
    __Vdly__test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt 
        = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt;
    ++(vlSymsp->__Vcoverage[114]);
    ++(vlSymsp->__Vcoverage[118]);
    ++(vlSymsp->__Vcoverage[121]);
    ++(vlSymsp->__Vcoverage[160]);
    ++(vlSymsp->__Vcoverage[163]);
    ++(vlSymsp->__Vcoverage[172]);
    ++(vlSymsp->__Vcoverage[174]);
    ++(vlSymsp->__Vcoverage[175]);
    ++(vlSymsp->__Vcoverage[210]);
    ++(vlSymsp->__Vcoverage[366]);
    ++(vlSymsp->__Vcoverage[364]);
    ++(vlSymsp->__Vcoverage[362]);
    ++(vlSymsp->__Vcoverage[368]);
    ++(vlSymsp->__Vcoverage[369]);
    ++(vlSymsp->__Vcoverage[378]);
    ++(vlSymsp->__Vcoverage[379]);
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev) 
         != (IData)(vlSelf->i_reset_n))) {
        ++(vlSymsp->__Vcoverage[117]);
        __Vdly__test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt = 0U;
    } else if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__w_all_ones)))) {
        __Vdly__test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)));
    }
    if ((1U & (~ (IData)((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)))))) {
        ++(vlSymsp->__Vcoverage[120]);
    }
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev) 
         == (IData)(vlSelf->i_reset_n))) {
        if ((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt))) {
            ++(vlSymsp->__Vcoverage[116]);
        }
        if ((1U & (~ (IData)((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt)))))) {
            ++(vlSymsp->__Vcoverage[115]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out)))) {
        ++(vlSymsp->__Vcoverage[158]);
        ++(vlSymsp->__Vcoverage[161]);
    }
    if ((1U & (~ (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
                  & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
                     >> 2U))))) {
        ++(vlSymsp->__Vcoverage[375]);
    }
    if ((1U & (~ (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
                  & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
                     >> 1U))))) {
        ++(vlSymsp->__Vcoverage[373]);
    }
    if ((1U & (~ (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
                  & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel))))) {
        ++(vlSymsp->__Vcoverage[371]);
    }
    if ((1U & (~ (((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
                   & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
                  & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
                     >> 3U))))) {
        ++(vlSymsp->__Vcoverage[377]);
    }
    if ((((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
          & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
         & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
            = ((0xffffff00U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out) 
               | (0xffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem
                  [(0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)]));
    }
    if ((((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
          & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
         & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
            >> 1U))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
            = ((0xffff00ffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out) 
               | (0xff00U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem
                  [(0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)]));
    }
    if ((((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
          & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
         & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
            >> 2U))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
            = ((0xff00ffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out) 
               | (0xff0000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem
                  [(0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)]));
    }
    if ((((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
          & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc)) 
         & ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel) 
            >> 3U))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out 
            = ((0xffffffU & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out) 
               | (0xff000000U & vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_mem
                  [(0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)]));
    }
    if (((1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)) 
         & (IData)(vlSelf->test_top__DOT__core__DOT__w_wb_ack))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
            = vlSelf->test_top__DOT__core__DOT__w_wb_rdata;
    }
    if ((1U & (~ ((1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage)) 
                  & (IData)(vlSelf->test_top__DOT__core__DOT__w_wb_ack))))) {
        ++(vlSymsp->__Vcoverage[209]);
    }
    if (vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out) {
        ++(vlSymsp->__Vcoverage[159]);
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage 
            = vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next;
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
            = vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next;
    } else {
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage = 1U;
        vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc = 0U;
    }
    if ((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out 
            = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev;
    }
    vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack 
        = ((IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb) 
           & (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc));
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->test_top__DOT__core__DOT__u_tcm__DOT____Vtogcov__o_wb_ack 
            = vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack;
    }
    vlSelf->test_top__DOT__core__DOT__w_main_slave_ack 
        = ((0xfffeU & (IData)(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack)) 
           | (IData)(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack));
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
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb 
        = (1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc 
        = (1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next));
    vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel = 0xfU;
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
    vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata[0U] 
        = vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out;
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
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt 
        = __Vdly__test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt;
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
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT____Vtogcov__w_reset_n))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->test_top__DOT__core__DOT____Vtogcov__w_reset_n 
            = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out;
    }
    vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev 
        = vlSelf->i_reset_n;
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
    if (((IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev) 
         ^ (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT____Vtogcov__r_prev 
            = vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev;
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
