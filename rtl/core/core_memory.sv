`timescale 1 ns / 1 ps

module core_memory
(
    input   wire[2:0]                   i_funct3,
    input   wire[1:0]                   i_alu_result_low,
    input   wire[31:0]                  i_rs2_val,
    output  wire[31:0]                  o_wdata,
    output  wire[3:0]                   o_mem_sel
);

    logic[31:0] r_wdata_shuffled;
    logic[3:0]  r_mem_sel;

    always_comb
    begin
        case (i_funct3[1:0])
        2'b00:   r_wdata_shuffled = {4{i_rs2_val[0+: 8]}};
        2'b01:   r_wdata_shuffled = {2{i_rs2_val[0+:16]}};
        default: r_wdata_shuffled = i_rs2_val;
        endcase
    end

    always_comb
    begin
        case (i_funct3[1:0])
        2'b00: begin
            case (i_alu_result_low[1:0])
            2'b00: r_mem_sel = 4'b0001;
            2'b01: r_mem_sel = 4'b0010;
            2'b10: r_mem_sel = 4'b0100;
            2'b11: r_mem_sel = 4'b1000;
            endcase
        end
        2'b01: begin
            case (i_alu_result_low[1])
            1'b0: r_mem_sel = 4'b0011;
            1'b1: r_mem_sel = 4'b1100;
            endcase
        end
        default:  r_mem_sel = 4'b1111;
        endcase
    end

    assign  o_mem_sel = r_mem_sel;
    assign  o_wdata = r_wdata_shuffled;

endmodule
