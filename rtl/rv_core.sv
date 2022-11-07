`timescale 1ps/1ps

`include "rv_defines.vh"

module rv_core
#(
    parameter   RESET_ADDR = 32'h0000_0000
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    //
    output  wire[31:0]                  o_wb_adr,
    output  wire[31:0]                  o_wb_dat,
    input   wire[31:0]                  i_wb_dat,
    output  wire                        o_wb_we,
    output  wire[3:0]                   o_wb_sel,
    output  wire                        o_wb_stb,
    input   wire                        i_wb_ack,
`ifdef TO_SIM
    output  wire[31:0]                  o_debug,
`endif
    output  wire                        o_wb_cyc
);

    wire    w_fetch_stall;
    wire    w_decode_stall;
    wire    w_decode_flush;
    wire    w_exec_flush;
    logic   w_exec_st2_flush;
    logic   w_exec_stall;
    wire    w_fetch_ack;

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
`ifdef EXTENSION_Zicsr
    wire[11:0]  w_decode_csr_idx;
    wire[1:0]   w_decode_csr_op;
    wire        w_decode_csr_sel;
    wire[31:0]  w_csr_rdata;
`endif

    wire[2:0]   w_exec_funct3;
    wire[31:0]  w_exec_alu_result;
    wire        w_exec_reg_write;
    wire        w_exec_mem_read;
    wire        w_exec_mem_write;
    wire[31:2]  w_exec_pc_p4;
    wire[4:0]   w_exec_rs1, w_exec_rs2;
`ifdef ALU_2_STAGE
    logic[4:0]  w_exec_st1_rd;
`endif
    wire[4:0]   w_exec_rd;
    wire[1:0]   w_exec_res_src;
    wire        w_exec_pc_src;
    wire[31:2]  w_exec_pc_target;
    wire[31:0]  w_exec_rs2_val;
    logic       w_exec_jump;
    
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

`ifdef ICACHE_USE
    wire[31:0]  w_icache_data;
    wire        w_icache_ack;
    wire        w_icache_miss;
`endif

`ifdef DCACHE_USE
    wire[31:0]  w_dcache_data;
    wire        w_dcache_ack;
    wire        w_dcache_miss;
`endif

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
`ifdef ICACHE_USE
        .i_data                         (w_icache_data),
`else
        .i_data                         (i_wb_dat),
`endif
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
    `ifdef EXTENSION_Zicsr
        .o_csr_idx                      (w_decode_csr_idx),
        .o_csr_op                       (w_decode_csr_op),
        .o_csr_sel                      (w_decode_csr_sel),
    `endif
        .o_inv_instr                    (w_decode_inv_instr)
    );

    rv_exec
    u_st3_exec
    (
        .i_clk                          (i_clk),
        //.i_reset_n                      (i_reset_n),
        .i_flush                        (w_exec_flush),
    `ifdef ALU_2_STAGE
        .i_st2_flush                    (w_exec_st2_flush),
    `endif
        .i_stall                        (w_exec_stall),
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
        .i_memory_rd_val                (w_memory_mem_read ? i_wb_dat : w_memory_alu_result),
        .i_write_rd_val                 (w_write_data),
        .i_write_back_rd_val            (r_write_back_rd_val),
        .o_alu_result                   (w_exec_alu_result),
        .o_reg_write                    (w_exec_reg_write),
        .o_mem_read                     (w_exec_mem_read),
        .o_mem_write                    (w_exec_mem_write),
    `ifdef ALU_2_STAGE
        .o_st1_rd                       (w_exec_st1_rd),
    `endif
        .o_rs1                          (w_exec_rs1),
        .o_rs2                          (w_exec_rs2),
        .o_rd                           (w_exec_rd),
        .o_pc_p4                        (w_exec_pc_p4),
        .o_res_src                      (w_exec_res_src),
        .o_pc_src                       (w_exec_pc_src),
        .o_pc_target                    (w_exec_pc_target),
        .o_funct3                       (w_exec_funct3),
        .o_rs2_val                      (w_exec_rs2_val),
        .o_jump                         (w_exec_jump)
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
    `ifdef DCACHE_USE
        .i_data                         (w_dcache_data),
    `else
        .i_data                         (i_wb_dat),
    `endif
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
        .o_data1                        (w_reg_data1),
        .o_data2                        (w_reg_data2)
    );
    
    rv_ctrl
    u_ctrl
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_fetch_bus_ack                (w_fetch_ack),
        .i_decode_rs1                   (w_decode_rs1),
        .i_decode_rs2                   (w_decode_rs2),
        .i_decode_inv_instr             (w_decode_inv_instr),
    `ifdef ALU_2_STAGE
        .i_exec_st1_rd                  (w_exec_st1_rd),
    `endif
        .i_exec_rs1                     (w_exec_rs1),
        .i_exec_rs2                     (w_exec_rs2),
        .i_exec_rd                      (w_exec_rd),
        .i_exec_pc_sel                  (w_exec_pc_src),
        .i_exec_res_src                 (w_exec_res_src),
        .i_exec_mem_op                  (w_exec_mem_read | w_exec_mem_write),
        .i_exec_jump                    (w_exec_jump),
        .i_memory_rd                    (w_memory_rd),
        .i_memory_reg_write             (w_memory_reg_write),
        .i_write_rd                     (w_write_rd),
        .i_write_reg_write              (w_write_reg_write),
        .i_write_back_write             (r_write_back_write),
        .i_write_back_rd                (r_write_back_rd),
    `ifdef TO_SIM
        .o_inv_instr                    (o_debug[0]),
    `endif
    `ifdef MODE_STAGED
        .o_fetch_pre_stall              (w_pre_stall),
    `endif
        .o_exec_bp_rs1                  (w_ctrl_bp_rs1),
        .o_exec_bp_rs2                  (w_ctrl_bp_rs2),
        .o_fetch_stall                  (w_fetch_stall),
        .o_decode_stall                 (w_decode_stall),
        .o_decode_flush                 (w_decode_flush),
        .o_exec_flush                   (w_exec_flush),
    `ifdef ALU_2_STAGE
        .o_exec_st2_flush               (w_exec_st2_flush),
    `endif
        .o_exec_stall                   (w_exec_stall)
    );

`ifdef EXTENSION_Zicsr
    wire    w_instr_finished = (w_write_reg_write | w_exec_mem_write | w_decode_branch);

    rv_csr
    u_csr
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_flush                        (w_exec_flush),
        .i_instruction_executed         (w_instr_finished),
        .i_idx                          (w_decode_csr_idx),
        .i_op                           (w_decode_csr_op),
        .i_sel                          (w_decode_csr_sel),
        .i_imm                          (w_decode_imm[4:0]),
        .i_data                         (w_reg_data1),
        .o_data                         (w_csr_rdata)
    );
`endif

`ifdef ICACHE_USE
    rv_cache
    #(
        .WAY_COUNT_BIT                  (0),
        .LINE_SIZE_BIT                  (0),
        .SET_COUNT_BIT                  (10),
        .ADDR_HI                        (4'h0)  // only TCM region is covered by cache
    )
    u_icache
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_addr                         ({ w_fetch_pc, 2'b00 }),
        .i_read                         ('1),//!w_memory_bus),
        .i_write                        ('0),
        .i_bus_data                     (i_wb_dat),
        .i_write_sel                    ('1),
        .i_write_data                   ('0),
        .i_bus_ack                      (w_fetch_ack),
        .o_data                         (w_icache_data),
        .o_miss                         (w_icache_miss),
        .o_ack                          (w_icache_ack)
    );
`endif

`ifdef DCACHE_USE
    rv_cache
    #(
        .WAY_COUNT_BIT                  (1),
        .LINE_SIZE_BIT                  (0),
        .SET_COUNT_BIT                  (10),
        .ADDR_HI                        (4'h0)  // only TCM region is covered by cache
    )
    u_dcache
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_addr                         (w_memory_alu_result),
        .i_read                         (w_memory_mem_read),
        .i_write                        (w_memory_mem_write),
        .i_bus_data                     (i_wb_dat),
        .i_write_sel                    (w_memory_mem_read ? '1 : w_memory_sel),
        .i_write_data                   (w_memory_wdata),
        .i_bus_ack                      (i_wb_ack),
        .o_data                         (w_dcache_data),
        .o_miss                         (w_dcache_miss),
        .o_ack                          (w_dcache_ack)
    );
`endif

`ifdef TO_SIM
    rv_trace
    #(
        .RESET_ADDR                     (RESET_ADDR)
    )
    u_trace
    (
        .i_clk                          (i_clk),
        .i_reset_n                      (i_reset_n),
        .i_pc                           (w_decode_pc),
        .i_bus_data                     (i_wb_dat),
        .i_mem_addr                     (w_memory_alu_result),
        .i_mem_sel                      (w_memory_sel),
        .i_mem_data                     (w_memory_wdata),
        .i_reg_write                    (w_decode_reg_write),
        .i_mem_write                    (w_decode_mem_write),
        .i_mem_read                     (w_decode_mem_read),
        .i_reg_data                     (w_write_data),
        .i_decode_stall                 (w_decode_stall),
        .i_decode_flush                 (w_decode_flush),
        .i_exec_stall                   (w_exec_stall),
        .i_exec_flush                   (w_exec_flush)
    );
`endif

    logic   w_memory_bus;

    assign  w_memory_bus = 
`ifdef DCACHE_USE
                            w_dcache_miss & 
`endif
                            (w_memory_mem_write | w_memory_mem_read);
    assign  w_fetch_ack = 
`ifdef ICACHE_USE
                            (!(w_memory_bus & w_icache_miss)) &
`else
                            (!w_memory_bus) &
`endif
                            i_wb_ack;

// WB BUS assignments
    assign  o_wb_adr = w_memory_bus ? w_memory_alu_result :
`ifdef ICACHE_USE
                                        (w_icache_miss ? { w_fetch_pc, 2'b00 } : '0);
`else
                                        { w_fetch_pc, 2'b00 } ;
`endif
    assign  o_wb_dat = w_memory_wdata;
    assign  o_wb_we = w_memory_bus ? w_memory_mem_write : '0;
    assign  o_wb_sel = w_memory_bus ? w_memory_sel : '1;
    assign  o_wb_stb = 1'b1;//w_memory_bus;
    assign  o_wb_cyc = 1'b1;//w_memory_bus;
`ifdef TO_SIM
    assign  o_debug[31:1] = '0;
`endif

endmodule
