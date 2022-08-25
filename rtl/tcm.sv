`timescale 1 ns / 1 ps

module tcm
#
(
    parameter   MEM_ADDR_WIDTH          = 8
)
(
    input   wire                        i_clk,
    //
    input   wire[(MEM_ADDR_WIDTH+1):2]  i_inst_addr,
    output  wire[31:0]                  o_inst,
    //
    input   wire                        i_data_sel,
    input   wire[(MEM_ADDR_WIDTH+1):2]  i_data_addr,
    input   wire                        i_data_write,
    input   wire[3:0]                   i_data_mask,
    input   wire[31:0]                  i_data,
    output  wire[31:0]                  o_data
);

`define OUT_REG

    localparam  MEM_SIZE = 2 ** MEM_ADDR_WIDTH;

`ifdef QUARTUS
    reg[3:0][7:0]r_mem[MEM_SIZE];
`else
    reg[31:0]   r_mem[MEM_SIZE];
`endif
    reg[31:0]   r_inst_out;
    reg[31:0]   r_data_out;

    always_ff @(posedge i_clk)
    begin
        if (i_data_write & i_data_sel)
        begin
        `ifdef QUARTUS
            if (i_data_mask[0]) r_mem[i_data_addr][0] <= i_data[ 0+:8];
            if (i_data_mask[1]) r_mem[i_data_addr][1] <= i_data[ 8+:8];
            if (i_data_mask[2]) r_mem[i_data_addr][2] <= i_data[16+:8];
            if (i_data_mask[3]) r_mem[i_data_addr][3] <= i_data[24+:8];
        `else
            if (i_data_mask[0]) r_mem[i_data_addr][ 0+:8] <= i_data[ 0+:8];
            if (i_data_mask[1]) r_mem[i_data_addr][ 8+:8] <= i_data[ 8+:8];
            if (i_data_mask[2]) r_mem[i_data_addr][16+:8] <= i_data[16+:8];
            if (i_data_mask[3]) r_mem[i_data_addr][24+:8] <= i_data[24+:8];
        `endif
        end
    end

`ifdef OUT_REG
    always_ff @(posedge i_clk)
    begin
        r_inst_out <= r_mem[i_inst_addr];
    end

    always_ff @(posedge i_clk)
    begin
        r_data_out <= r_mem[i_data_addr];
    end

    assign o_inst = r_inst_out;
    //assign o_inst = r_mem[i_inst_addr];
    assign o_data = r_data_out;
`else
    assign o_inst = r_mem[i_inst_addr];
    assign o_data = r_mem[i_data_addr];
`endif

    initial
    begin
    `ifdef TO_SIM
        string fw_file;
        if ($value$plusargs("TEST_FW=%s", fw_file))
            $readmemh(fw_file, r_mem);
        else
    `endif
            $readmemh("../vrf/test_fw/out/risc.vh", r_mem);
    end

endmodule
