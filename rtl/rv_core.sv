`timescale 1 ns / 1 ps

`include "rv_defines.vh"

module rv_core
#(
    parameter   RESET_ADDR = 32'h0000_0000
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
`ifdef TO_SIM
    output  wire[31:0]                  o_x1,
    output  wire[31:0]                  o_x2,
`endif
    //
    output  wire[31:0]                  o_wb_adr,
    output  wire[31:0]                  o_wb_dat,
    input   wire[31:0]                  i_wb_dat,
    output  wire                        o_wb_we,
    output  wire[3:0]                   o_wb_sel,
    output  wire                        o_wb_stb,
    input   wire                        i_wb_ack,
    output  wire                        o_wb_cyc
);

    wire    w_fetch_stall;
    wire    w_decode_stall;
    wire    w_decode_flush;
    wire    w_exec_flush;

    wire[31:0]  w_tcm_instr;
    wire[31:0]  w_tcm_rdata;

    wire[31:2]  w_fetch_pc;
    wire[31:2]  w_fetch_pc_p4;

    wire[31:0]  w_reg_data1, w_reg_data2;
    
    wire[31:2]  w_decode_pc;
    wire[31:2]  w_decode_pc_p4;
    wire[31:0]  w_decode_imm;
    wire[4:0]   w_decode_rs1, w_decode_rs2, w_decode_rd;
    wire        w_decode_reg_write;
    wire        w_decode_mem_read;
    wire        w_decode_mem_write;
    wire[1:0]   w_decode_res_src;
    wire        w_decode_pc_sel;
    wire        w_decode_jump;
    wire        w_decode_branch;
    wire        w_decode_alu_op1_sel;
    wire        w_decode_alu_op2_sel;
    wire[2:0]   w_decode_funct3;
    wire[4:0]   w_decode_alu_ctrl;
    wire        w_decode_inv_instr;
    wire[11:0]  w_decode_csr_idx;
    wire        w_decode_csr_read;
    wire        w_decode_csr_write;

    wire[2:0]   w_exec_funct3;
    wire[31:0]  w_exec_alu_result;
    wire        w_exec_reg_write;
    wire        w_exec_mem_read;
    wire        w_exec_mem_write;
    wire[31:2]  w_exec_pc_p4;
    wire[4:0]   w_exec_rs1, w_exec_rs2;
    wire[4:0]   w_exec_rd;
    wire[1:0]   w_exec_res_src;
    wire        w_exec_pc_src;
    wire[31:2]  w_exec_pc_target;
    wire[31:0]  w_exec_rs2_val;
    
    wire[31:0]  w_memory_alu_result;
    wire        w_memory_reg_write;
    wire[1:0]   w_memory_res_src;
    wire[4:0]   w_memory_rd;
    wire[31:2]  w_memory_pc_p4;
    wire[2:0]   w_memory_funct3;
    wire[31:2]  w_memory_pc_target;
    wire        w_memory_mem_read;
    wire        w_memory_mem_write;
    wire[31:0]  w_memory_wdata;
    wire[3:0]   w_memory_sel;

    wire[31:0]  w_write_data;
    wire[4:0]   w_write_rd;
    wire        w_write_reg_write;

    reg[1:0]    w_ctrl_bp_rs1, w_ctrl_bp_rs2;
    reg         r_write_back_write;
    reg[4:0]    r_write_back_rd;
    reg[31:0]   r_write_back_rd_val;

    always_ff @(posedge i_clk)
    begin
        r_write_back_write <= w_write_reg_write;
        r_write_back_rd <= w_write_rd;
        r_write_back_rd_val <= w_write_data;
    end

`ifdef MODE_STAGED
    wire    w_pre_stall;
`endif

    rv_fetch
    #(
        .RESET_ADDR                     (RESET_ADDR)
    )
    u_st1_fetch
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_stall                        (w_fetch_stall),
        .i_pc_sel                       (w_exec_pc_src),
        .i_pc_target                    (w_exec_pc_target),
    `ifdef MODE_STAGED
        .i_pre_stall                    (w_pre_stall),
    `endif
        .o_pc                           (w_fetch_pc),
        .o_pc_p4                        (w_fetch_pc_p4)
    );

    rv_decode
    u_st2_decode
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_stall                        (w_decode_stall),
        .i_flush                        (w_decode_flush),
        //.i_bus_ack                      (i_wb_ack),
        .i_data                         (w_tcm_instr),
        .i_pc                           (w_fetch_pc),
        .i_pc_p4                        (w_fetch_pc_p4),
        .o_rs1                          (w_decode_rs1),
        .o_rs2                          (w_decode_rs2),
        .o_rd                           (w_decode_rd),
        .o_pc                           (w_decode_pc),
        .o_pc_p4                        (w_decode_pc_p4),
        .o_imm                          (w_decode_imm),
        .o_reg_write                    (w_decode_reg_write),
        .o_mem_read                     (w_decode_mem_read),
        .o_mem_write                    (w_decode_mem_write),
        .o_res_src                      (w_decode_res_src),
        .o_pc_sel                       (w_decode_pc_sel),
        .o_jump                         (w_decode_jump),
        .o_branch                       (w_decode_branch),
        .o_alu_op1_sel                  (w_decode_alu_op1_sel),
        .o_alu_op2_sel                  (w_decode_alu_op2_sel),
        .o_funct3                       (w_decode_funct3),
        .o_alu_ctrl                     (w_decode_alu_ctrl),
        .o_inv_instr                    (w_decode_inv_instr),
        .o_csr_idx                      (w_decode_csr_idx),
        .o_csr_read                     (w_decode_csr_read),
        .o_csr_write                    (w_decode_csr_write)
    );

    rv_exec
    u_st3_exec
    (
        .i_clk                          (i_clk),
        //.i_reset_n                      (i_reset_n),
        .i_flush                        (w_exec_flush),
        .i_pc                           (w_decode_pc),
        .i_pc_p4                        (w_decode_pc_p4),
        .i_rs1_val                      (w_reg_data1),
        .i_rs2_val                      (w_reg_data2),
        .i_rs1                          (w_decode_rs1),
        .i_rs2                          (w_decode_rs2),
        .i_rd                           (w_decode_rd),
        .i_imm                          (w_decode_imm),
        .i_reg_write                    (w_decode_reg_write),
        .i_mem_read                     (w_decode_mem_read),
        .i_mem_write                    (w_decode_mem_write),
        .i_res_src                      (w_decode_res_src),
        .i_pc_sel                       (w_decode_pc_sel),
        .i_jump                         (w_decode_jump),
        .i_branch                       (w_decode_branch),
        .i_alu_op1_sel                  (w_decode_alu_op1_sel),
        .i_alu_op2_sel                  (w_decode_alu_op2_sel),
        .i_funct3                       (w_decode_funct3),
        .i_alu_ctrl                     (w_decode_alu_ctrl),
        .i_bp_rs1                       (w_ctrl_bp_rs1),
        .i_bp_rs2                       (w_ctrl_bp_rs2),
        .i_memory_rd_val                (w_memory_alu_result),
        .i_write_rd_val                 (w_write_data),
        .i_write_back_rd_val            (r_write_back_rd_val),
        .o_alu_result                   (w_exec_alu_result),
        .o_reg_write                    (w_exec_reg_write),
        .o_mem_read                     (w_exec_mem_read),
        .o_mem_write                    (w_exec_mem_write),
        .o_rs1                          (w_exec_rs1),
        .o_rs2                          (w_exec_rs2),
        .o_rd                           (w_exec_rd),
        .o_pc_p4                        (w_exec_pc_p4),
        .o_res_src                      (w_exec_res_src),
        .o_pc_src                       (w_exec_pc_src),
        .o_pc_target                    (w_exec_pc_target),
        .o_funct3                       (w_exec_funct3),
        .o_rs2_val                      (w_exec_rs2_val)
    );

    rv_memory
    u_st4_memory
    (
        .i_clk                          (i_clk),
        //.i_reset_n                      (i_reset_n),
        .i_alu_result                   (w_exec_alu_result),
        .i_reg_write                    (w_exec_reg_write),
        .i_mem_read                     (w_exec_mem_read),
        .i_mem_write                    (w_exec_mem_write),
        .i_rd                           (w_exec_rd),
        .i_res_src                      (w_exec_res_src),
        .i_funct3                       (w_exec_funct3),
        .i_pc_p4                        (w_exec_pc_p4),
        .i_rs2_val                      (w_exec_rs2_val),
        .i_pc_target                    (w_exec_pc_target),
        .o_alu_result                   (w_memory_alu_result),
        .o_reg_write                    (w_memory_reg_write),
        .o_res_src                      (w_memory_res_src),
        .o_rd                           (w_memory_rd),
        .o_pc_p4                        (w_memory_pc_p4),
        .o_funct3                       (w_memory_funct3),
        .o_pc_target                    (w_memory_pc_target),
        .o_mem_write                    (w_memory_mem_write),
        .o_mem_read                     (w_memory_mem_read),
        .o_mem_sel                      (w_memory_sel),
        .o_wdata                        (w_memory_wdata)
    );

    rv_write
    u_st5_write
    (
        .i_clk                          (i_clk),
        //.i_reset_n                      (i_reset_n),
        .i_data                         (i_wb_dat),
        .i_memory_data                  (w_tcm_rdata),
        .i_alu_result                   (w_memory_alu_result),
        .i_reg_write                    (w_memory_reg_write),
        .i_rd                           (w_memory_rd),
        .i_res_src                      (w_memory_res_src),
        .i_pc_p4                        (w_memory_pc_p4),
        //.i_pc_target                    (w_memory_pc_target),
        .i_funct3                       (w_memory_funct3),
        .o_data                         (w_write_data),
        .o_rd                           (w_write_rd),
        .o_reg_write                    (w_write_reg_write)
    );

    rv_regs
    u_regs
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_rs1                          (w_decode_rs1),
        .i_rs2                          (w_decode_rs2),
        .i_rd                           (w_write_rd),
        .i_write                        (w_write_reg_write),
        .i_data                         (w_write_data),
    `ifdef TO_SIM
        .o_x1                           (o_x1),
        .o_x2                           (o_x2),
    `endif
        .o_data1                        (w_reg_data1),
        .o_data2                        (w_reg_data2)
    );
    
    rv_ctrl
    u_ctrl
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_decode_rs1                   (w_decode_rs1),
        .i_decode_rs2                   (w_decode_rs2),
        .i_decode_inv_instr             (w_decode_inv_instr),
        .i_exec_rs1                     (w_exec_rs1),
        .i_exec_rs2                     (w_exec_rs2),
        .i_exec_rd                      (w_exec_rd),
        .i_exec_pc_sel                  (w_exec_pc_src),
        .i_exec_res_src                 (w_exec_res_src),
        .i_memory_rd                    (w_memory_rd),
        .i_memory_reg_write             (w_memory_reg_write),
        .i_write_rd                     (w_write_rd),
        .i_write_reg_write              (w_write_reg_write),
        .i_write_back_write             (r_write_back_write),
        .i_write_back_rd                (r_write_back_rd),
    `ifdef MODE_STAGED
        .o_fetch_pre_stall              (w_pre_stall),
    `endif
        .o_exec_bp_rs1                  (w_ctrl_bp_rs1),
        .o_exec_bp_rs2                  (w_ctrl_bp_rs2),
        .o_fetch_stall                  (w_fetch_stall),
        .o_decode_stall                 (w_decode_stall),
        .o_decode_flush                 (w_decode_flush),
        //.o_exec_stall                   (),
        .o_exec_flush                   (w_exec_flush)
    );

    wire        w_tcm_data_sel;

    assign  w_tcm_data_sel = (w_memory_alu_result[`SLAVE_SEL_FROM:`SLAVE_SEL_TO] == `TCM_ADDR_SEL) & (w_memory_mem_write | w_memory_mem_read);
    wire    w_tcm_data_we = w_tcm_data_sel & w_memory_mem_write;

    tcm
    #(
        .MEM_ADDR_WIDTH                 (`TCM_ADDR_WIDTH)
    )
    u_tcm
    (
        .i_clk                          (i_clk),
        .i_inst_addr                    (w_fetch_pc[(`TCM_ADDR_WIDTH+1):2]),
        .i_inst_stall                   (w_fetch_stall),
        .i_inst_write                   ('0),
        .o_inst                         (w_tcm_instr),
        //.i_data_sel                     (w_tcm_data_sel),
        .i_data_addr                    (w_memory_alu_result[(`TCM_ADDR_WIDTH+1):2]),
        .i_data_write                   (w_memory_sel & { 4{w_tcm_data_we} }),
        .i_data                         (w_memory_wdata),
        .o_data                         (w_tcm_rdata)
    );

    // TODO: w_decode_csr_idx, w_decode_csr_read, w_decode_csr_write

// WB BUS assignments
    assign  o_wb_adr = w_memory_alu_result;
    assign  o_wb_dat = w_memory_wdata;
    assign  o_wb_we = w_memory_mem_write;
    assign  o_wb_sel = w_memory_sel;
    assign  o_wb_stb = (w_memory_mem_write | w_memory_mem_read);
    assign  o_wb_cyc = (w_memory_mem_write | w_memory_mem_read);

endmodule
