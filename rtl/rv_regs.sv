`timescale 1 ns / 1 ps

module rv_regs
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire[4:0]                   i_rs1,
    input   wire[4:0]                   i_rs2,
    input   wire[4:0]                   i_rd,
    input   wire                        i_write,
    input   wire[31:0]                  i_data,
`ifdef TO_SIM
    output  wire[31:0]                  o_x1,
    output  wire[31:0]                  o_x2,
`endif
    output  wire[31:0]                  o_data1,
    output  wire[31:0]                  o_data2
);

    reg[31:0]   r_reg_file[31:1];
    reg[31:0]   r_data1;
    reg[31:0]   r_data2;
    reg         r_data1_en, r_data2_en;

    //assign  o_data1 = (|i_rs1) ? r_reg_file[i_rs1] : '0;
    //assign  o_data2 = (|i_rs2) ? r_reg_file[i_rs2] : '0;

    always_ff @(posedge i_clk)
    begin
        if (i_reset_n && i_write && (|i_rd))
            r_reg_file[i_rd] <= i_data;
        if (|i_rs1)
            r_data1 <= r_reg_file[i_rs1];
        if (|i_rs2)
            r_data2 <= r_reg_file[i_rs2];
        r_data1_en <= (|i_rs1);
        r_data2_en <= (|i_rs2);
    end

    assign  o_data1 = r_data1_en ? r_data1 : '0;
    assign  o_data2 = r_data2_en ? r_data2 : '0;

`ifdef TO_SIM
    assign  o_x1 = r_reg_file[1];
    assign  o_x2 = r_reg_file[2];

    initial begin
        r_reg_file[1] = 0;
        r_reg_file[2] = 0;
        r_reg_file[3] = 0;
    end
`endif

endmodule
