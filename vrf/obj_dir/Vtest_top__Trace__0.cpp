// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top___024root__trace_chg_sub_0(Vtest_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtest_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_top_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_top___024root__trace_chg_sub_0(Vtest_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out));
        bufp->chgIData(oldp+1,((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                << 2U)),32);
        bufp->chgIData(oldp+2,(vlSelf->test_top__DOT__core__DOT__w_wb_rdata),32);
        bufp->chgCData(oldp+3,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel),4);
        bufp->chgBit(oldp+4,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb));
        bufp->chgBit(oldp+5,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc));
        bufp->chgBit(oldp+6,(vlSelf->test_top__DOT__core__DOT__w_wb_ack));
        bufp->chgSData(oldp+7,(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select),16);
        bufp->chgSData(oldp+8,(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack),16);
        bufp->chgWData(oldp+9,(vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata),512);
        bufp->chgBit(oldp+25,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev));
        bufp->chgCData(oldp+26,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt),4);
        bufp->chgBit(oldp+27,((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt))));
        bufp->chgCData(oldp+28,((0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                         >> 0x1aU))),4);
        bufp->chgIData(oldp+29,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc),30);
        bufp->chgIData(oldp+30,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next),30);
        bufp->chgCData(oldp+31,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage),3);
        bufp->chgCData(oldp+32,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next),3);
        bufp->chgBit(oldp+33,((1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next))));
        bufp->chgIData(oldp+34,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr),32);
        bufp->chgCData(oldp+35,((0x7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr)),7);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                          >> 7U))),5);
        bufp->chgCData(oldp+37,((7U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+40,((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+41,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm),32);
        bufp->chgIData(oldp+42,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm),32);
        bufp->chgIData(oldp+43,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm),32);
        bufp->chgIData(oldp+44,((0xfffff000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr)),32);
        bufp->chgIData(oldp+45,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm),20);
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))));
        bufp->chgBit(oldp+47,(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack));
        bufp->chgIData(oldp+48,(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out),32);
        bufp->chgCData(oldp+49,((0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)),8);
    }
    bufp->chgBit(oldp+50,(vlSelf->i_clk));
    bufp->chgBit(oldp+51,(vlSelf->i_reset_n));
}

void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_cleanup\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
