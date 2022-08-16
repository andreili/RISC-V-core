`timescale 1 ns / 1 ps

module rv_decode
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_flush,
    input   wire                        i_bus_ack,
    input   wire[31:0]                  i_data,
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4,
    output  wire[4:0]                   o_rs1,
    output  wire[4:0]                   o_rs2,
    output  wire[4:0]                   o_rd,
    output  wire[31:2]                  o_pc,
    output  wire[31:2]                  o_pc_p4,
    output  wire[31:0]                  o_imm,
    output  wire                        o_reg_write,
    output  wire                        o_mem_read,
    output  wire                        o_mem_write,
    output  wire[1:0]                   o_res_src,
    output  wire                        o_jump,
    output  wire                        o_branch,
    output  wire                        o_alu_src,
    output  wire[2:0]                   o_funct3,
    output  wire[2:0]                   o_alu_ctrl
);

    localparam  INST_OP_LOAD            = 7'h03;
    localparam  INST_OP_IMM             = 7'h13;
    localparam  INST_OP_AUIPC           = 7'h17;
    localparam  INST_OP_SAVE            = 7'h23;
    localparam  INST_OP_REG             = 7'h33;
    localparam  INST_OP_LUI             = 7'h37;
    localparam  INST_OP_BRANCH          = 7'h63;
    localparam  INST_OP_RJUMP           = 7'h67;
    localparam  INST_OP_IJUMP           = 7'h6F;

    reg[31:0]   r_instr;
    reg[31:2]   r_pc;
    reg[31:2]   r_pc_p4;

    wire[6:0]   w_op;
    wire[4:0]   w_rd;
    wire[2:0]   w_funct3;
    wire[4:0]   w_rs1, w_rs2;
    wire[6:0]   w_funct7;
    reg[31:0]   w_imm;

    wire        w_reg_write;
    reg[2:0]    w_imm_src;
    reg[1:0]    w_res_src;
    wire        w_mem_read;
    wire        w_mem_write;
    reg         w_jump;
    wire        w_branch;
    reg         w_alu_src;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_pc <= '0;
            r_pc_p4 <= '0;
        end
        else if (!i_stall)
        begin
            r_pc <= i_pc;
            r_pc_p4 <= i_pc_p4;
        end
    end

    always_ff @(posedge i_clk)
    begin
        if ((!i_reset_n) || i_flush)
            r_instr <= '0;
        else if ((!i_stall) && i_bus_ack)
            r_instr <= i_data;
    end

    assign      w_op             = r_instr[6:0];
    assign      w_rd             = r_instr[11:7];
    assign      w_funct3         = r_instr[14:12];
    assign      w_rs1            = r_instr[19:15];
    assign      w_rs2            = r_instr[24:20];
    assign      w_funct7         = r_instr[31:25];

    always_comb
    begin
        case (w_op)
        INST_OP_LOAD:   w_imm_src = 3'b000;
        INST_OP_IMM:    w_imm_src = 3'b000;
        INST_OP_RJUMP:  w_imm_src = 3'b000;
        INST_OP_SAVE:   w_imm_src = 3'b001;
        INST_OP_BRANCH: w_imm_src = 3'b010;
        INST_OP_IJUMP:  w_imm_src = 3'b011;
        INST_OP_AUIPC:  w_imm_src = 3'b100;
        INST_OP_LUI:    w_imm_src = 3'b100;
        default:        w_imm_src = 3'b111;
        endcase
    end

    always_comb
    begin
        case (w_imm_src)
        // I type
        3'b000: w_imm = { {21{r_instr[31]}},
                                r_instr[30:20] };
        // L/S type
        3'b001: w_imm = { {21{r_instr[31]}},
                                r_instr[30:25],
                                r_instr[11:7] };
        // B type
        3'b010: w_imm = { {20{r_instr[31]}},
                                r_instr[7],
                                r_instr[30:25],
                                r_instr[11:8],
                                1'b0 };
        // J type
        3'b011: w_imm = { {12{r_instr[31]}},
                                r_instr[19:12],
                                r_instr[20],
                                r_instr[30:21],
                                1'b0 };
        // U type
        3'b100: w_imm = { r_instr[31:12],
                                {12{1'b0}} };
        default:w_imm = 'x;
        endcase
    end

    assign w_reg_write = (w_op == INST_OP_REG) ||
                                (w_op == INST_OP_LOAD) ||
                                (w_op == INST_OP_IMM) ||
                                (w_op == INST_OP_RJUMP) ||
                                (w_op == INST_OP_IJUMP) ||
                                (w_op == INST_OP_AUIPC) ||
                                (w_op == INST_OP_LUI);
    assign w_mem_read = (w_op == INST_OP_LOAD);
    assign w_mem_write = (w_op == INST_OP_SAVE);
    assign w_branch = (w_op == INST_OP_BRANCH);
    always_comb
    begin
        case (w_op)
        INST_OP_IJUMP:  w_jump = '1;
        INST_OP_RJUMP:  w_jump = '1;
        default:        w_jump = '0;
        endcase
    end
    always_comb
    begin
        case (w_op)
        INST_OP_LOAD:  w_res_src = 2'b01;
        INST_OP_IJUMP: w_res_src = 2'b10;
        INST_OP_RJUMP: w_res_src = 2'b10;
        default:       w_res_src = 2'b00;
        endcase
    end
    always_comb
    begin
        case (w_op)
        INST_OP_LOAD:  w_alu_src = '1;
        INST_OP_IMM:   w_alu_src = '1;
        INST_OP_SAVE:  w_alu_src = '1;
        INST_OP_RJUMP: w_alu_src = '1;
        default:       w_alu_src = '0;
        endcase
    end
    wire[1:0]   w_alu_op;
    wire[2:0]   w_alu_ctrl;
    assign  w_alu_op =  (w_op == INST_OP_LOAD) ? 2'b00 :
                        (w_op == INST_OP_SAVE) ? 2'b00 :
                        (w_op == INST_OP_REG) ? 2'b10 :
                        (w_op == INST_OP_BRANCH) ? 2'b01 :
                        (w_op == INST_OP_AUIPC) ? 2'b00 :
                        (w_op == INST_OP_LUI) ? 2'b00 :
                        (w_op == INST_OP_IMM) ? 2'b10 :
                        2'b11;
    assign  w_alu_ctrl = (w_alu_op == 2'b00) ? 3'b000 :
                        (w_alu_op == 2'b01) ? 3'b001 :
                        ((w_funct3 == 3'b000) && (!(&{w_op[5], w_funct7[5]}))) ? 3'b000 :
                        (w_funct3 == 3'b000) ? 3'b001 :
                        (w_funct3 == 3'b111) ? 3'b010 :
                        (w_funct3 == 3'b110) ? 3'b011 :
                        (w_funct3 == 3'b010) ? 3'b101 :  // SLT
                        (w_funct3 == 3'b011) ? 3'b101 :  // SLTU
                        (w_funct3 == 3'b001) ? 3'b110 :
                        (w_funct3 == 3'b101) ? 3'b111 :
                        3'b100;

    localparam  INST_R                  = 3'h0;
    localparam  INST_I                  = 3'h1;
    localparam  INST_S                  = 3'h2;
    localparam  INST_B                  = 3'h3;
    localparam  INST_U                  = 3'h4;
    localparam  INST_J                  = 3'h5;
    localparam  INST_R4                 = 3'h6;
    localparam  INST_COMP               = 3'h7;
    wire[2:0]  w_type = (w_op == INST_OP_REG) ? INST_R :
                            ((w_op == INST_OP_LOAD) || (w_op == INST_OP_IMM) || (w_op == INST_OP_RJUMP)) ? INST_I :
                            (w_op == INST_OP_SAVE) ? INST_S :
                            (w_op == INST_OP_BRANCH) ? INST_B :
                            ((w_op == INST_OP_AUIPC) || (w_op == INST_OP_LUI)) ? INST_U :
                            (w_op == INST_OP_IJUMP) ? INST_J :
                            INST_R4;

	reg [127:0] dbg_ascii_inst_type;
	always @* begin
		dbg_ascii_inst_type = "";
		if (w_type == INST_R)    dbg_ascii_inst_type = "R";
		if (w_type == INST_I)    dbg_ascii_inst_type = "I";
		if (w_type == INST_S)    dbg_ascii_inst_type = "S";
		if (w_type == INST_B)    dbg_ascii_inst_type = "B";
		if (w_type == INST_U)    dbg_ascii_inst_type = "U";
		if (w_type == INST_J)    dbg_ascii_inst_type = "J";
		if (w_type == INST_R4)   dbg_ascii_inst_type = "R4";
		if (w_type == INST_COMP) dbg_ascii_inst_type = "COMP";
	end

	reg [127:0] dbg_ascii_op;
	always @* begin
		dbg_ascii_op = "";
		if (w_op == INST_OP_LOAD)   dbg_ascii_op = "LOAD";
		if (w_op == INST_OP_IMM)    dbg_ascii_op = "IMM";
		if (w_op == INST_OP_AUIPC)  dbg_ascii_op = "AUIPC";
		if (w_op == INST_OP_SAVE)   dbg_ascii_op = "SAVE";
		if (w_op == INST_OP_REG)    dbg_ascii_op = "REG";
		if (w_op == INST_OP_LUI)    dbg_ascii_op = "LUI";
		if (w_op == INST_OP_BRANCH) dbg_ascii_op = "BRANCH";
		if (w_op == INST_OP_RJUMP)  dbg_ascii_op = "RJUMP";
		if (w_op == INST_OP_IJUMP)  dbg_ascii_op = "IJUMP";
	end

	reg [127:0] dbg_ascii_alu_ctrl;
	always @* begin
		dbg_ascii_alu_ctrl = "";
		if (w_alu_ctrl == 3'b000) dbg_ascii_alu_ctrl = "ADD";
		if (w_alu_ctrl == 3'b001) dbg_ascii_alu_ctrl = "SUB";
		if (w_alu_ctrl == 3'b010) dbg_ascii_alu_ctrl = "AND";
		if (w_alu_ctrl == 3'b011) dbg_ascii_alu_ctrl = "OR";
		if (w_alu_ctrl == 3'b100) dbg_ascii_alu_ctrl = "XOR";
		if (w_alu_ctrl == 3'b101) dbg_ascii_alu_ctrl = "SLT";
		if (w_alu_ctrl == 3'b110) dbg_ascii_alu_ctrl = "ShL";
		if (w_alu_ctrl == 3'b111) dbg_ascii_alu_ctrl = "ShR";
	end

    assign  o_rs1 = w_rs1;
    assign  o_rs2 = w_rs2;
    assign  o_rd = w_rd;
    assign  o_pc = r_pc;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_imm = w_imm;
    assign  o_reg_write = w_reg_write;
    assign  o_mem_read = w_mem_write;
    assign  o_mem_write = w_mem_write;
    assign  o_res_src = w_res_src;
    assign  o_jump = w_jump;
    assign  o_branch = w_branch;
    assign  o_alu_src = w_alu_src;
    assign  o_funct3 = w_funct3;
    assign  o_alu_ctrl = w_alu_ctrl;

endmodule
