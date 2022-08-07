// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtest_top__Syms.h"


VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__0(Vtest_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"i_reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("test_top ");
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"i_reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"i_reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"w_reset_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"w_wb_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"w_wb_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"w_wb_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"w_wb_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"w_wb_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+5,"w_wb_stb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"w_wb_cyc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"w_wb_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"MAIN_NIC_SEL_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+56,"MAIN_NIC_SLAVES_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+57,"MAIN_NIC_SLAVE_TCM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+8,"w_main_slave_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+9,"w_main_slave_ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declArray(c+10,"w_main_slave_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->pushNamePrefix("u_deb_reset ");
    tracep->declBus(c+55,"LENGTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"i_sig",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"o_sig",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"MAX_IDX",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+26,"r_prev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+27,"r_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+28,"w_all_ones",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"r_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_nic_main ");
    tracep->declBus(c+55,"ADDR_SEL_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+56,"SLAVES_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+59,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+60,"i_nic_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"i_addr_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declArray(c+10,"i_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBus(c+9,"i_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+8,"o_slave_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+3,"o_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"o_ack",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"w_select",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_rv ");
    tracep->declBus(c+53,"RESET_ADDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"i_reset_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"o_wb_adr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"o_wb_dat",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"i_wb_dat",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"o_wb_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"o_wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+5,"o_wb_stb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"i_wb_ack",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"o_wb_cyc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"STAGE_FETCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+62,"STAGE_DECODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+63,"STAGE_EXECUTE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+64,"STAGE_MEMORY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+65,"STAGE_WRITE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+30,"r_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,2);
    tracep->declBus(c+31,"w_pc_next",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,2);
    tracep->declBus(c+30,"w_addr_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,2);
    tracep->declBus(c+32,"r_stage",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,"r_stage_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,"r_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,"r_sel_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+5,"r_stb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"r_stb_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"r_cyc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"r_cyc_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+35,"r_fetch_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"w_instr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+37,"w_instr_r_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"w_instr_r_funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+39,"w_instr_r_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"w_instr_r_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+41,"w_instr_r_funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+42,"w_instr_i_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"w_instr_s_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"w_instr_b_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"w_instr_u_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"w_instr_j_imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_tcm ");
    tracep->declBus(c+67,"MEM_ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+51,"i_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"i_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"i_wb_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"i_wb_stb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"i_wb_cyc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"i_wb_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+4,"i_wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"i_wb_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"o_wb_ack",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"o_wb_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"MEM_SIZE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"w_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+49,"r_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,"r_ack",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_top\n"); );
    // Body
    Vtest_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtest_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest_top___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vtest_top___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vtest_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_top_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_out));
    bufp->fullIData(oldp+2,((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                             << 2U)),32);
    bufp->fullIData(oldp+3,(vlSelf->test_top__DOT__core__DOT__w_wb_rdata),32);
    bufp->fullCData(oldp+4,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_sel),4);
    bufp->fullBit(oldp+5,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stb));
    bufp->fullBit(oldp+6,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_cyc));
    bufp->fullBit(oldp+7,(vlSelf->test_top__DOT__core__DOT__w_wb_ack));
    bufp->fullSData(oldp+8,(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select),16);
    bufp->fullSData(oldp+9,(vlSelf->test_top__DOT__core__DOT__w_main_slave_ack),16);
    bufp->fullWData(oldp+10,(vlSelf->test_top__DOT__core__DOT__w_main_slave_rdata),512);
    bufp->fullBit(oldp+26,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_prev));
    bufp->fullCData(oldp+27,(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt),4);
    bufp->fullBit(oldp+28,((0xfU == (IData)(vlSelf->test_top__DOT__core__DOT__u_deb_reset__DOT__r_cnt))));
    bufp->fullCData(oldp+29,((0xfU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc 
                                      >> 0x1aU))),4);
    bufp->fullIData(oldp+30,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc),30);
    bufp->fullIData(oldp+31,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_pc_next),30);
    bufp->fullCData(oldp+32,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage),3);
    bufp->fullCData(oldp+33,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next),3);
    bufp->fullBit(oldp+34,((1U == (IData)(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_stage_next))));
    bufp->fullIData(oldp+35,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr),32);
    bufp->fullCData(oldp+36,((0x7fU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr)),7);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                       >> 7U))),5);
    bufp->fullCData(oldp+38,((7U & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+41,((vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+42,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_i_imm),32);
    bufp->fullIData(oldp+43,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_s_imm),32);
    bufp->fullIData(oldp+44,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_b_imm),32);
    bufp->fullIData(oldp+45,((0xfffff000U & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_fetch_instr)),32);
    bufp->fullIData(oldp+46,(vlSelf->test_top__DOT__core__DOT__u_rv__DOT__w_instr_j_imm),20);
    bufp->fullBit(oldp+47,((1U & (IData)(vlSelf->test_top__DOT__core__DOT__u_nic_main__DOT__w_select))));
    bufp->fullBit(oldp+48,(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_ack));
    bufp->fullIData(oldp+49,(vlSelf->test_top__DOT__core__DOT__u_tcm__DOT__r_out),32);
    bufp->fullCData(oldp+50,((0xffU & vlSelf->test_top__DOT__core__DOT__u_rv__DOT__r_pc)),8);
    bufp->fullBit(oldp+51,(vlSelf->i_clk));
    bufp->fullBit(oldp+52,(vlSelf->i_reset_n));
    bufp->fullIData(oldp+53,(0U),32);
    bufp->fullBit(oldp+54,(0U));
    bufp->fullIData(oldp+55,(4U),32);
    bufp->fullIData(oldp+56,(0x10U),32);
    bufp->fullIData(oldp+57,(0U),32);
    bufp->fullIData(oldp+58,(3U),32);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullBit(oldp+60,(1U));
    bufp->fullCData(oldp+61,(1U),3);
    bufp->fullCData(oldp+62,(2U),3);
    bufp->fullCData(oldp+63,(3U),3);
    bufp->fullCData(oldp+64,(4U),3);
    bufp->fullCData(oldp+65,(5U),3);
    bufp->fullCData(oldp+66,(0xfU),4);
    bufp->fullIData(oldp+67,(8U),32);
    bufp->fullIData(oldp+68,(0x100U),32);
}
