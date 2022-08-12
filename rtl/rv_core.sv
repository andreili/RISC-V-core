`timescale 1 ns / 1 ps

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
    output  wire                        o_wb_cyc
);

    reg     r_reset_n;
    always_ff @(posedge i_clk)
    begin
        r_reset_n <= i_reset_n;
    end

    localparam  STAGE_FETCH1            = 3'h1;
    localparam  STAGE_FETCH2            = 3'h2;
    localparam  STAGE_DECODE            = 3'h3;
    localparam  STAGE_EXECUTE           = 3'h4;
    localparam  STAGE_MEMORY1           = 3'h5;
    localparam  STAGE_MEMORY2           = 3'h6;
    localparam  STAGE_WRITE             = 3'h7;

    wire    w_fetch_stall;
    wire    w_decode_stall = 1'b0;
    wire    w_decode_flush = 1'b0;
    reg         r_write_pc_src;
    reg[31:2]   r_write_pc_target;
    wire    w_exec_flush = 1'b0;
    reg[31:0]   r_reg_file[31:1];

    wire[31:2]  w_fetch_pc;
    wire[31:2]  w_fetch_pc_p4;

    rv_fetch
    #(
        .RESET_ADDR                     (RESET_ADDR)
    )
    u_fetch
    (
        .i_reset_n                      (r_reset_n),
        .i_clk                          (i_clk),
        .i_stall                        (w_fetch_stall),
        .i_pc_sel                       (r_write_pc_src),
        .i_pc_target                    (r_write_pc_target),
        .o_pc                           (w_fetch_pc),
        .o_pc_p4                        (w_fetch_pc_p4)
    );

/* -- FETCH_EX MODULE -- */
    reg [31:2]  r_fetch2_pc;
    reg [31:2]  r_fetch2_pc_p4;

    always_ff @(posedge i_clk)
    begin
        r_fetch2_pc <= w_fetch_pc;
        r_fetch2_pc_p4 <= w_fetch_pc_p4;
    end
/* --------------------- */

    rv_decode
    u_decode
    (
        .i_clk                          (i_clk),
        .i_stall                        (w_decode_stall),
        .i_flush                        (w_decode_flush),
        .i_data                         (i_wb_dat & {32{(r_stage == STAGE_FETCH2)}}),
        .i_pc                           (r_fetch2_pc),
        .i_pc_p4                        (r_fetch2_pc_p4),
    );

/* --- EXECUTE MODULE -- */
    reg[31:2]   r_exec_pc;
    reg[31:2]   r_exec_pc_p4;
    reg[31:0]   r_exec_rs1_val;
    reg[31:0]   r_exec_rs2_val;
    reg[4:0]    r_exec_rs1;
    reg[4:0]    r_exec_rs2;
    reg[4:0]    r_exec_rd;
    reg[31:0]   r_exec_imm;
    reg         r_exec_reg_write;
    reg[1:0]    r_exec_res_src;
    reg         r_exec_mem_read;
    reg         r_exec_mem_write;
    reg         r_exec_jump;
    reg         r_exec_branch;
    reg         r_exec_alu_src;
    wire        w_exec_zero;
    wire[31:0]  w_exec_alu_result;
    wire        w_exec_pc_src;
    wire[31:2]  w_exec_pc_target;
    reg[2:0]    r_exec_funct3;
    reg[2:0]    r_exec_alu_ctrl;

    always_ff @(posedge i_clk)
    begin
        if (w_exec_flush)
        begin
            r_exec_pc <= '0;
            r_exec_pc_p4 <= '0;
            r_exec_rs1_val <= '0;
            r_exec_rs2_val <= '0;
            r_exec_rs1 <= '0;
            r_exec_rs2 <= '0;
            r_exec_rd <= '0;
            r_exec_imm <= '0;
            r_exec_mem_read <= '0;
            r_exec_reg_write <= '0;
            r_exec_res_src <= '0;
            r_exec_mem_write <= '0;
            r_exec_jump <= '0;
            r_exec_branch <= '0;
            r_exec_alu_src <= '0;
            r_exec_funct3 <= '0;
            r_exec_alu_ctrl <= '0;
        end
        else
        begin
            r_exec_pc <= r_decode_pc;
            r_exec_pc_p4 <= r_decode_pc_p4;
            r_exec_rs1_val <= w_decode_rs1_val;
            r_exec_rs2_val <= w_decode_rs2_val;
            r_exec_rs1 <= w_decode_rs1;
            r_exec_rs2 <= w_decode_rs2;
            r_exec_rd <= w_decode_rd;
            r_exec_imm <= w_decode_imm;
            r_exec_reg_write <= w_decode_reg_write;
            r_exec_res_src <= w_decode_res_src;
            r_exec_mem_read <= w_decode_mem_read;
            r_exec_mem_write <= w_decode_mem_write;
            r_exec_jump <= w_decode_jump;
            r_exec_branch <= w_decode_branch;
            r_exec_alu_src <= w_decode_alu_src;
            r_exec_funct3 <= w_decode_funct3;
            r_exec_alu_ctrl <= w_alu_ctrl;
        end
    end

    wire        w_exec_overflow;

    wire[31:0]  w_op2;
    assign  w_op2 = r_exec_alu_src ? r_exec_imm : r_exec_rs2_val;

    rv_alu
    u_alu
    (
        .i_src_a                        (r_exec_rs1_val),
        .i_src_b                        (w_op2),
        .i_ctrl                         (r_exec_alu_ctrl),
        .o_result                       (w_exec_alu_result),
        .o_overflow                     (w_exec_overflow),
        .o_zero                         (w_exec_zero)
    );

    assign  w_exec_pc_src = (r_exec_jump | (r_exec_branch & w_exec_zero));
    assign  w_exec_pc_target = r_exec_pc + r_exec_imm[31:2];
/* --------------------- */

/* --- MEMORY MODULE --- */
    reg[31:0]   r_memory_alu;
    reg         r_memory_reg_write;
    reg         r_memory_read;
    reg         r_memory_write;
    reg[31:0]   r_memory_wdata;
    reg[31:0]   r_memory_wdata_shuffled;
    reg[1:0]    r_memory_res_src;
    reg[4:0]    r_memory_rd;
    reg[31:2]   r_memory_pc_p4;
    reg         r_memory_pc_src;
    reg[31:2]   r_memory_pc_target;
    reg[2:0]    r_memory_funct3;
    reg[3:0]    r_memory_mem_sel;
    
    always_ff @(posedge i_clk)
    begin
        r_memory_alu <= w_exec_alu_result;
        r_memory_reg_write <= r_exec_reg_write;
        r_memory_read <= r_exec_mem_read;
        r_memory_write <= r_exec_mem_write;
        r_memory_res_src <= r_exec_res_src;
        r_memory_rd <= r_exec_rd;
        r_memory_pc_p4 <= r_exec_pc_p4;
        r_memory_pc_src <= w_exec_pc_src;
        r_memory_pc_target <= w_exec_pc_target;
        r_memory_funct3 <= r_exec_funct3;
        r_memory_wdata <= r_exec_rs2_val;
    end

    always_comb
    begin
        case (r_memory_funct3[1:0])
        2'b00:   r_memory_wdata_shuffled = {4{r_memory_wdata[0+: 8]}};
        2'b01:   r_memory_wdata_shuffled = {2{r_memory_wdata[0+:16]}};
        default: r_memory_wdata_shuffled = r_memory_wdata;
        endcase
    end

    always_comb
    begin
        case (r_memory_funct3[1:0])
        2'b00: begin
            case (r_memory_alu[1:0])
            2'b00: r_memory_mem_sel = 4'b0001;
            2'b01: r_memory_mem_sel = 4'b0010;
            2'b10: r_memory_mem_sel = 4'b0100;
            2'b11: r_memory_mem_sel = 4'b1000;
            endcase
        end
        2'b01: begin
            case (r_memory_alu[1])
            1'b0: r_memory_mem_sel = 4'b0011;
            1'b1: r_memory_mem_sel = 4'b1100;
            endcase
        end
        default:  r_memory_mem_sel = 4'b1111;
        endcase
    end

/* --------------------- */

/* --- MEMORY2 MODULE -- */
    reg[31:0]   r_memory2_alu;
    reg         r_memory2_reg_write;
    reg         r_memory2_read;
    reg         r_memory2_write;
    reg[1:0]    r_memory2_res_src;
    reg[4:0]    r_memory2_rd;
    reg[31:2]   r_memory2_pc_p4;
    wire[31:0]  w_memory2_data;
    reg         r_memory2_pc_src;
    reg[31:2]   r_memory2_pc_target;
    reg[2:0]    r_memory2_funct3;
    reg[31:0]   w_memory2_rdata;

    always_ff @(posedge i_clk)
    begin
        r_memory2_alu <= r_memory_alu;
        r_memory2_reg_write <= r_memory_reg_write;
        r_memory2_read <= r_memory_read;
        r_memory2_write <= r_memory_write;
        r_memory2_res_src <= r_memory_res_src;
        r_memory2_rd <= r_memory_rd;
        r_memory2_pc_p4 <= r_memory_pc_p4;
        r_memory2_pc_src <= r_memory_pc_src;
        r_memory2_pc_target <= r_memory_pc_target;
        r_memory2_funct3 <= r_memory_funct3;
    end

    reg[7:0]    r_data_byte;
    always_comb
    begin
        case (r_memory2_alu[1:0])
        2'b00: r_data_byte = i_wb_dat[ 0+:8];
        2'b01: r_data_byte = i_wb_dat[ 8+:8];
        2'b10: r_data_byte = i_wb_dat[16+:8];
        2'b11: r_data_byte = i_wb_dat[24+:8];
        endcase
    end
    reg[15:0]    r_data_half_word;
    always_comb
    begin
        case (r_memory2_alu[1])
        1'b0: r_data_half_word = i_wb_dat[ 0+:16];
        1'b1: r_data_half_word = i_wb_dat[16+:16];
        endcase
    end
    //assign      w_memory2_rdata
    always_comb
    begin
        case (r_memory2_funct3)
        3'b000: w_memory2_rdata = { {24{r_data_byte[7]}}, r_data_byte};
        3'b001: w_memory2_rdata = { {16{r_data_half_word[15]}}, r_data_half_word};
        3'b010: w_memory2_rdata = i_wb_dat;
        3'b100: w_memory2_rdata = { {24{1'b0}}, r_data_byte};
        3'b101: w_memory2_rdata = { {16{1'b0}}, r_data_half_word};
        default:w_memory2_rdata = '0;
        endcase
    end

    assign  w_memory2_data = (r_memory2_res_src == 2'b00) ? r_memory2_alu :
                             (r_memory2_res_src == 2'b01) ? w_memory2_rdata :
                             (r_memory2_res_src == 2'b10) ? { r_memory2_pc_p4, 2'b00 } :
                             '0;
/* --------------------- */

/* ---- WRITE MODULE --- */
    reg[31:0]   r_write_data;
    reg         r_write_reg_write;
    reg[4:0]    r_write_rd;
    
    always_ff @(posedge i_clk)
    begin
        r_write_data <= w_memory2_data;
        r_write_reg_write <= r_memory2_reg_write;
        r_write_rd <= r_memory2_rd;
        r_write_pc_src <= r_memory2_pc_src;
        r_write_pc_target <= r_memory2_pc_target;
    end

    always_ff @(posedge i_clk)
    begin
        if (r_reset_n && r_write_reg_write && (|r_write_rd))
            r_reg_file[r_write_rd] <= r_write_data;
    end
/* --------------------- */





    wire[31:2]  w_addr_out;
    wire[31:0]  w_wr_data;
    wire[31:2]  w_pc_target;

    reg[2:0]    r_stage;
    reg[2:0]    r_stage_next;

    always_ff @(posedge i_clk)
    begin
        if (!r_reset_n)
            r_stage <= STAGE_FETCH1;
        else
            r_stage <= r_stage_next;
    end

    always_comb
    begin : next_stage
        (* full_case *)
        case (r_stage)
            STAGE_FETCH1:   r_stage_next = STAGE_FETCH2;
            STAGE_FETCH2:   r_stage_next = (i_wb_ack) ? STAGE_DECODE : STAGE_FETCH2;
            STAGE_DECODE:   r_stage_next = STAGE_EXECUTE;
            STAGE_EXECUTE:  r_stage_next = STAGE_MEMORY1;
            STAGE_MEMORY1:  r_stage_next = STAGE_MEMORY2;
            STAGE_MEMORY2:  r_stage_next = (i_wb_ack) ? STAGE_WRITE : STAGE_MEMORY2;
            STAGE_WRITE:    r_stage_next = STAGE_FETCH1;
            default:        r_stage_next = STAGE_FETCH1;
        endcase
    end

    reg     r_stb;
    reg     r_stb_next;
    assign r_stb_next = (r_stage_next == STAGE_FETCH1) ? '1 :
                        (r_stage_next == STAGE_FETCH2) ? '1 :
                        (r_stage_next == STAGE_MEMORY1) ? '1 :
                        (r_stage_next == STAGE_MEMORY2) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_stb <= '0;
        else
            r_stb <= r_stb_next;
    end

    reg     r_cyc;
    reg     r_cyc_next;
    assign r_cyc_next = (r_stage_next == STAGE_FETCH1) ? '1 :
                        (r_stage_next == STAGE_FETCH2) ? '1 :
                        (r_stage_next == STAGE_MEMORY1) ? '1 :
                        (r_stage_next == STAGE_MEMORY2) ? '1 :
                        '0;
    always_ff @(posedge i_clk)
    begin
        if (!i_reset_n)
            r_cyc <= '0;
        else
            r_cyc <= r_cyc_next;
    end

    reg     r_we;
    always_ff @(posedge i_clk)
        r_we <= r_exec_mem_write;

/* ---- DECODE MODULE --- */
    assign  w_fetch_stall = (r_stage_next != STAGE_FETCH1);

    assign  w_pc_target = w_fetch_pc + w_decode_imm[31:2];
/* --------------------- */

// WB BUS assignments

    assign w_addr_out = (r_stage == STAGE_MEMORY1)? r_memory_alu[31:2] : 
                        (r_stage == STAGE_MEMORY2)? r_memory2_alu[31:2] : 
                        w_fetch_pc;

    assign  o_wb_adr = { w_addr_out, 2'b00 };
    assign  o_wb_dat = r_memory_wdata_shuffled;
    assign  o_wb_we = r_we;
    assign  o_wb_sel = (r_stage == STAGE_MEMORY1) ? r_memory_mem_sel : '1;
    assign  o_wb_stb = r_stb;
    assign  o_wb_cyc = r_cyc;

// DEBUG
	reg [127:0] dbg_ascii_stage, dbg_ascii_stage_next;

	always @* begin
		dbg_ascii_stage = "";
		if (r_stage == STAGE_FETCH1)  dbg_ascii_stage = "fetch1";
		if (r_stage == STAGE_FETCH2)  dbg_ascii_stage = "fetch2";
		if (r_stage == STAGE_DECODE)  dbg_ascii_stage = "decode";
		if (r_stage == STAGE_EXECUTE) dbg_ascii_stage = "execute";
		if (r_stage == STAGE_MEMORY1) dbg_ascii_stage = "memory1";
		if (r_stage == STAGE_MEMORY2) dbg_ascii_stage = "memory2";
		if (r_stage == STAGE_WRITE)   dbg_ascii_stage = "write";
	end

	always @* begin
		dbg_ascii_stage_next = "";
		if (r_stage_next == STAGE_FETCH1)  dbg_ascii_stage_next = "fetch1";
		if (r_stage_next == STAGE_FETCH2)  dbg_ascii_stage_next = "fetch2";
		if (r_stage_next == STAGE_DECODE)  dbg_ascii_stage_next = "decode";
		if (r_stage_next == STAGE_EXECUTE) dbg_ascii_stage_next = "execute";
		if (r_stage_next == STAGE_MEMORY1) dbg_ascii_stage_next = "memory1";
		if (r_stage_next == STAGE_MEMORY2) dbg_ascii_stage_next = "memory2";
		if (r_stage_next == STAGE_WRITE)   dbg_ascii_stage_next = "write";
	end

    localparam  INST_R                  = 3'h0;
    localparam  INST_I                  = 3'h1;
    localparam  INST_S                  = 3'h2;
    localparam  INST_B                  = 3'h3;
    localparam  INST_U                  = 3'h4;
    localparam  INST_J                  = 3'h5;
    localparam  INST_R4                 = 3'h6;
    localparam  INST_COMP               = 3'h7;
    wire[2:0]  w_decode_type = (w_decode_op == INST_OP_REG) ? INST_R :
                            ((w_decode_op == INST_OP_LOAD) || (w_decode_op == INST_OP_IMM) || (w_decode_op == INST_OP_RJUMP)) ? INST_I :
                            (w_decode_op == INST_OP_SAVE) ? INST_S :
                            (w_decode_op == INST_OP_BRANCH) ? INST_B :
                            ((w_decode_op == INST_OP_AUIPC) || (w_decode_op == INST_OP_LUI)) ? INST_U :
                            (w_decode_op == INST_OP_IJUMP) ? INST_J :
                            INST_R4;

	reg [127:0] dbg_ascii_inst_type;
	always @* begin
		dbg_ascii_inst_type = "";
		if (w_decode_type == INST_R)    dbg_ascii_inst_type = "R";
		if (w_decode_type == INST_I)    dbg_ascii_inst_type = "I";
		if (w_decode_type == INST_S)    dbg_ascii_inst_type = "S";
		if (w_decode_type == INST_B)    dbg_ascii_inst_type = "B";
		if (w_decode_type == INST_U)    dbg_ascii_inst_type = "U";
		if (w_decode_type == INST_J)    dbg_ascii_inst_type = "J";
		if (w_decode_type == INST_R4)   dbg_ascii_inst_type = "R4";
		if (w_decode_type == INST_COMP) dbg_ascii_inst_type = "COMP";
	end

	reg [127:0] dbg_ascii_op;
	always @* begin
		dbg_ascii_op = "";
		if (w_decode_op == INST_OP_LOAD)   dbg_ascii_op = "LOAD";
		if (w_decode_op == INST_OP_IMM)    dbg_ascii_op = "IMM";
		if (w_decode_op == INST_OP_AUIPC)  dbg_ascii_op = "AUIPC";
		if (w_decode_op == INST_OP_SAVE)   dbg_ascii_op = "SAVE";
		if (w_decode_op == INST_OP_REG)    dbg_ascii_op = "REG";
		if (w_decode_op == INST_OP_LUI)    dbg_ascii_op = "LUI";
		if (w_decode_op == INST_OP_BRANCH) dbg_ascii_op = "BRANCH";
		if (w_decode_op == INST_OP_RJUMP)  dbg_ascii_op = "RJUMP";
		if (w_decode_op == INST_OP_IJUMP)  dbg_ascii_op = "IJUMP";
	end

	reg [127:0] dbg_ascii_alu_ctrl;
	always @* begin
		dbg_ascii_alu_ctrl = "";
		if (w_alu_ctrl == 3'b000) dbg_ascii_alu_ctrl = "ADD";
		if (w_alu_ctrl == 3'b001) dbg_ascii_alu_ctrl = "SUB";
		if (w_alu_ctrl == 3'b010) dbg_ascii_alu_ctrl = "AND";
		if (w_alu_ctrl == 3'b011) dbg_ascii_alu_ctrl = "OR";
		if (w_alu_ctrl == 3'b100) dbg_ascii_alu_ctrl = "UNK100";
		if (w_alu_ctrl == 3'b101) dbg_ascii_alu_ctrl = "SLT";
		if (w_alu_ctrl == 3'b110) dbg_ascii_alu_ctrl = "UNK110";
		if (w_alu_ctrl == 3'b111) dbg_ascii_alu_ctrl = "UNK111";
	end

endmodule
