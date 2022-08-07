`timescale 1 ns / 1 ps

module nic
#(
    parameter   ADDR_SEL_WIDTH	= 2,
    parameter   SLAVES_COUNT	= 2 ** ADDR_SEL_WIDTH,
    parameter   DATA_WIDTH		= 32
)
(
    input   wire                        i_nic_sel,
    input   wire[(ADDR_SEL_WIDTH-1):0]  i_addr_sel,
    input   wire[(SLAVES_COUNT-1):0][(DATA_WIDTH-1):0] i_rdata,
    input   wire[(SLAVES_COUNT-1):0]    i_ack,
    output  wire[(SLAVES_COUNT-1):0]    o_slave_sel,
    output  wire[(DATA_WIDTH-1):0]      o_rdata,
    output  wire                        o_ack
);

    wire[(SLAVES_COUNT-1):0] w_select;

    genvar i;
    generate
        for(i=0 ; i<SLAVES_COUNT ; ++i)
        begin : slave_loop
            assign w_select[i] = (i_addr_sel == i) && i_nic_sel;
            assign o_rdata = w_select[i] ? i_rdata[i] : { DATA_WIDTH{1'bZ} };
            assign o_ack = w_select[i] ? i_ack[i] : 1'bZ;
        end
    endgenerate

    assign o_rdata = (|w_select) ? { DATA_WIDTH{1'bZ} } : { DATA_WIDTH{1'b0} };
    assign o_ack = (|w_select) ? 1'bZ : 1'b0;
    assign o_slave_sel = w_select;

endmodule
