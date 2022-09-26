`timescale 1 ns / 1 ps

`include "rv_defines.vh"

module rv_cache
#
(
    parameter   LINE_COUNT_BIT  = 0,    // 1 line per set
    parameter   LINE_SIZE_BIT   = 0,    // 1 word per line
    parameter   SET_COUNT_BIT   = 3,    // 8 sets
    parameter   ADDR_HI         = 4'b0
)
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire[31:0]                  i_addr,
    input   wire                        i_read,
    input   wire                        i_write,
    input   wire[31:0]                  i_bus_data,
    input   wire[3:0]                   i_write_sel,
    input   wire[31:0]                  i_write_data,
    input   wire                        i_bus_ack,
    input   wire[31:0]                  i_data,
    output  wire[31:0]                  o_data,
    output  wire                        o_miss,
    output  wire                        o_ack
);

    localparam LINE_COUNT = 2 ** LINE_COUNT_BIT;
    localparam LINE_SIZE  = 2 ** LINE_SIZE_BIT;
    localparam SET_COUNT  = 2 ** SET_COUNT_BIT;
    localparam CACHE_SIZE = SET_COUNT * LINE_COUNT * LINE_SIZE;
    localparam TAG_WIDTH  = 32 - `SLAVE_SEL_WIDTH - 2 - LINE_COUNT_BIT - LINE_SIZE_BIT - SET_COUNT_BIT;

    localparam LINE_OFFSET_END  = 2 + LINE_SIZE_BIT - 1;
    localparam SET_OFFSET_END   = LINE_OFFSET_END + SET_COUNT_BIT;

    wire[15:0]  w_line_offset;
    wire[15:0]  w_set_idx;

if (LINE_SIZE_BIT > 0)
begin
    assign  w_line_offset[15:LINE_SIZE_BIT]    = '0;
    assign  w_line_offset[(LINE_SIZE_BIT-1):0] = i_addr[LINE_OFFSET_END-:LINE_SIZE_BIT];
end
else
begin
    assign  w_line_offset = '0;
end

if (SET_COUNT_BIT > 0)
begin
    assign  w_set_idx[15:SET_COUNT_BIT]    = '0;
    assign  w_set_idx[(SET_COUNT_BIT-1):0] = i_addr[SET_OFFSET_END-:SET_COUNT_BIT];
end
else
begin
    assign  w_set_idx = '0;
end

    reg[31:0]   r_cache[CACHE_SIZE];
    reg[31:0]   r_counter_miss, r_counter_hit;

    wire[(TAG_WIDTH-1):0]   w_addr_tag;
    wire[(SET_COUNT_BIT+LINE_COUNT_BIT+LINE_SIZE_BIT-1):0] w_cache_addr;
    reg[TAG_WIDTH:0]    r_tags[SET_COUNT][LINE_COUNT];
    reg                 r_line_hit;

    if ((LINE_COUNT_BIT == 0) && (LINE_SIZE_BIT == 0))
        assign  w_cache_addr = { w_set_idx[(SET_COUNT_BIT-1):0] };
    else if ((LINE_COUNT_BIT == 0) && (LINE_SIZE_BIT > 0))
        assign  w_cache_addr = { w_set_idx[(SET_COUNT_BIT-1):0], w_line_offset[(LINE_SIZE_BIT-1):0] };
    //else if ((LINE_COUNT_BIT > 0) && (LINE_SIZE_BIT == 0))
    //    assign  w_cache_addr = { w_set_idx[(SET_COUNT_BIT-1):0], w_line}
    assign  w_addr_tag = i_addr[27-:TAG_WIDTH];

    wire  w_cache_hit;
    wire[(LINE_COUNT-1):0]  w_tag_eq;
    wire[(LINE_COUNT-1):0]  w_line_valid;
    wire[(LINE_COUNT-1):0]  w_line_hit;

    wire[TAG_WIDTH:0]       w_tags_set[LINE_COUNT];

    genvar set_idx, line_idx;
    generate
        for (set_idx=0 ; set_idx<SET_COUNT ; ++set_idx)
        begin : set
            wire   w_set_selected;
            assign w_set_selected = (set_idx == w_set_idx) && (i_addr[31-:`SLAVE_SEL_WIDTH] == ADDR_HI) && (i_read || i_write);

            for (line_idx=0 ; line_idx<LINE_COUNT ; ++line_idx)
            begin : line
                always_ff @(posedge i_clk)
                begin
                    if (i_reset_n == '0)
                    begin
                        r_tags[set_idx][line_idx] <= '0;
                    end
                    else if (w_set_selected)
                    begin
                        r_tags[set_idx][line_idx] <= { 1'b1, w_addr_tag };
                    end
                end
            end
        end
    endgenerate

    assign w_tags_set = r_tags[w_set_idx[(SET_COUNT_BIT-1):0]];

    generate
        for (line_idx=0 ; line_idx<LINE_COUNT ; ++line_idx)
        begin : line
            wire[TAG_WIDTH:0]   w_tag_line;

            assign w_tag_line = w_tags_set[line_idx];
            assign w_line_valid[line_idx] = w_tag_line[TAG_WIDTH];
            assign w_tag_eq[line_idx] = (w_tag_line[(TAG_WIDTH-1):0] == w_addr_tag) && (i_addr[31-:`SLAVE_SEL_WIDTH] == ADDR_HI);
        end
    endgenerate

    assign w_line_hit = w_line_valid & w_tag_eq & { LINE_COUNT{i_read} };
    assign w_cache_hit = |w_line_hit;

    always_ff @(posedge i_clk)
    begin
        if (i_reset_n == '0)
        begin
        end
        else if (((!w_cache_hit) && i_read) || ((i_addr[31:28] == ADDR_HI) && i_write))
        begin
            if (i_write_sel[0]) r_cache[w_cache_addr][ 0+:8] <= i_write ? i_write_data[ 0+:8] : i_bus_data[ 0+:8];
            if (i_write_sel[1]) r_cache[w_cache_addr][ 8+:8] <= i_write ? i_write_data[ 8+:8] : i_bus_data[ 8+:8];
            if (i_write_sel[2]) r_cache[w_cache_addr][16+:8] <= i_write ? i_write_data[16+:8] : i_bus_data[16+:8];
            if (i_write_sel[3]) r_cache[w_cache_addr][24+:8] <= i_write ? i_write_data[24+:8] : i_bus_data[24+:8];
        end
    end

    always_ff @(posedge i_clk)
    begin
        if (i_reset_n == '0)
        begin
            r_counter_hit <= '0;
            r_counter_miss <= '0;
        end
        else if (w_cache_hit && i_read)
        begin
            r_counter_hit <= r_counter_hit + 1'b1;
        end
        else if ((!w_cache_hit) && i_read)
        begin
            r_counter_miss <= r_counter_miss + 1'b1;
        end
    end

    assign  o_data = w_cache_hit ? r_cache[w_cache_addr] : i_bus_data;
    assign  o_miss = ((!w_cache_hit) && i_read) || i_write;
    assign  o_ack = w_cache_hit ? '1 : i_bus_ack;

endmodule
