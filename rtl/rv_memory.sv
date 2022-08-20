`timescale 1 ns / 1 ps

module rv_memory
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,

    input   wire[31:0]                  i_alu_result,
    input   wire                        i_reg_write,
    input   wire                        i_mem_read,
    input   wire                        i_mem_write,
    input   wire[4:0]                   i_rd,
    input   wire[1:0]                   i_res_src,
    input   wire[2:0]                   i_funct3,
    input   wire[31:2]                  i_pc_p4,
    input   wire[31:0]                  i_rs2_val,
    input   wire[31:2]                  i_pc_target,
    output  wire[31:0]                  o_alu_result,
    output  wire                        o_reg_write,
    output  wire[1:0]                   o_res_src,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc_p4,
    output  wire[2:0]                   o_funct3,
    output  wire[31:2]                  o_pc_target,
    output  wire                        o_mem_write,
    output  wire                        o_mem_read,
    output  wire[3:0]                   o_mem_sel,
    output  wire[31:0]                  o_wdata
);

    reg[31:0]   r_alu;
    reg         r_reg_write;
    reg         r_read;
    reg         r_write;
    reg[31:0]   r_wdata;
    reg[31:0]   r_wdata_shuffled;
    reg[1:0]    r_res_src;
    reg[4:0]    r_rd;
    reg[31:2]   r_pc_p4;
    reg[31:2]   r_pc_target;
    reg[2:0]    r_funct3;
    reg[3:0]    r_mem_sel;
    
    always_ff @(posedge i_clk)
    begin
        r_alu <= i_alu_result;
        r_reg_write <= i_reg_write;
        r_read <= i_mem_read;
        r_write <= i_mem_write;
        r_res_src <= i_res_src;
        r_rd <= i_rd;
        r_pc_p4 <= i_pc_p4;
        r_pc_target <= i_pc_target;
        r_funct3 <= i_funct3;
        r_wdata <= i_rs2_val;
    end

    always_comb
    begin
        case (r_funct3[1:0])
        2'b00:   r_wdata_shuffled = {4{r_wdata[0+: 8]}};
        2'b01:   r_wdata_shuffled = {2{r_wdata[0+:16]}};
        default: r_wdata_shuffled = r_wdata;
        endcase
    end

    always_comb
    begin
        case (r_funct3[1:0])
        2'b00: begin
            case (r_alu[1:0])
            2'b00: r_mem_sel = 4'b0001;
            2'b01: r_mem_sel = 4'b0010;
            2'b10: r_mem_sel = 4'b0100;
            2'b11: r_mem_sel = 4'b1000;
            endcase
        end
        2'b01: begin
            case (r_alu[1])
            1'b0: r_mem_sel = 4'b0011;
            1'b1: r_mem_sel = 4'b1100;
            endcase
        end
        default:  r_mem_sel = 4'b1111;
        endcase
    end

    assign  o_alu_result = r_alu;
    assign  o_reg_write = r_reg_write;
    assign  o_res_src = r_res_src;
    assign  o_rd = r_rd;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_funct3 = r_funct3;
    assign  o_pc_target = r_pc_target;
    assign  o_mem_write = r_write;
    assign  o_mem_read = r_read;
    assign  o_mem_sel = r_mem_sel;
    assign  o_wdata = r_wdata_shuffled;

endmodule
