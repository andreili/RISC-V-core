`timescale 1 ns / 1 ps

module tcm
#
(
    parameter   MEM_ADDR_WIDTH          = 8
)
(
    input   wire                        i_clk,
    input   wire                        i_sel,
    input   wire[31:0]                  i_wb_addr,
    input   wire                        i_wb_stb,
    input   wire                        i_wb_cyc,
    input   wire                        i_wb_we,
    input   wire[3:0]                   i_wb_sel,
    input   wire[31:0]                  i_wb_wdata,
    output  wire                        o_wb_ack,
    output  wire[31:0]                  o_wb_rdata
);

    localparam  MEM_SIZE = 2 ** MEM_ADDR_WIDTH;

    wire[(MEM_ADDR_WIDTH)-1:0]  w_addr;
    reg[31:0]   r_mem[(MEM_SIZE-1):0];
    reg[31:0]   r_out;
    reg         r_ack;

    assign w_addr = i_wb_addr[2 +: MEM_ADDR_WIDTH];

    always_ff @(posedge i_clk)
    begin
        if ((i_wb_we == '1) & i_wb_stb & i_wb_cyc & i_wb_sel[0])
            r_mem[w_addr][0+:8] <= i_wb_wdata[0+:8];
        if ((i_wb_we == '1) & i_wb_stb & i_wb_cyc & i_wb_sel[1])
            r_mem[w_addr][8+:8] <= i_wb_wdata[8+:8];
        if ((i_wb_we == '1) & i_wb_stb & i_wb_cyc & i_wb_sel[2])
            r_mem[w_addr][16+:8] <= i_wb_wdata[16+:8];
        if ((i_wb_we == '1) & i_wb_stb & i_wb_cyc & i_wb_sel[3])
            r_mem[w_addr][24+:8] <= i_wb_wdata[24+:8];
    end

    always_ff @(posedge i_clk)
    begin
        if ((i_wb_we == '0) & i_wb_stb & i_wb_cyc & i_wb_sel[0])
            r_out[0+:8] <= r_mem[w_addr][0+:8];
        if ((i_wb_we == '0) & i_wb_stb & i_wb_cyc & i_wb_sel[1])
            r_out[8+:8] <= r_mem[w_addr][8+:8];
        if ((i_wb_we == '0) & i_wb_stb & i_wb_cyc & i_wb_sel[2])
            r_out[16+:8] <= r_mem[w_addr][16+:8];
        if ((i_wb_we == '0) & i_wb_stb & i_wb_cyc & i_wb_sel[3])
            r_out[24+:8] <= r_mem[w_addr][24+:8];
    end

    always_ff @(posedge i_clk)
        r_ack <= i_wb_stb & i_wb_cyc;

    assign o_wb_rdata = r_out;
    assign o_wb_ack = r_ack;

    initial begin
        $readmemh("mem.vh", r_mem);
    end

endmodule
