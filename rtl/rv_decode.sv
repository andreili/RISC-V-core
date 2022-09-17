`timescale 1 ns / 1 ps

module rv_decode
(
    input   wire                        i_clk,
    input   wire                        i_reset_n,
    input   wire                        i_stall,
    input   wire                        i_flush,
    //input   wire                        i_bus_ack,
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
    output  wire                        o_pc_sel,
    output  wire                        o_jump,
    output  wire                        o_branch,
    output  wire                        o_alu_op1_sel,
    output  wire                        o_alu_op2_sel,
    output  wire[2:0]                   o_funct3,
    output  wire[4:0]                   o_alu_ctrl,
`ifdef EXTENSION_Zicsr
    output  wire[11:0]                  o_csr_idx,
    output  wire[1:0]                   o_csr_op,
    output  wire                        o_csr_sel,
`endif
    output  wire                        o_inv_instr
);

`include "rv_defines.vh"

    reg[31:0]   r_instr;
    reg[31:2]   r_pc;
    reg[31:2]   r_pc_p4;

    wire[6:0]   w_op;
    wire[4:0]   w_rd;
    wire[2:0]   w_funct3;
    wire[4:0]   w_rs1, w_rs2;
    wire[6:0]   w_funct7;
    reg[31:0]   w_imm;
    wire[11:0]  w_funct12;

    wire        w_reg_write;
    reg[1:0]    w_res_src;
    reg         r_alu_op1_sel;
    reg         r_alu_op2_sel;

    wire    w_inst_none, w_inst_supported;
    wire    w_inst_lb, w_inst_lh, w_inst_lw, w_inst_lbu, w_inst_lhu;
    wire    w_inst_addi, w_inst_slli, w_inst_slti, w_inst_sltiu;
    wire    w_inst_xori, w_inst_srli, w_inst_srai, w_inst_ori, w_inst_andi;
    wire    w_inst_auipc;
    wire    w_inst_sb, w_inst_sh, w_inst_sw;
    wire    w_inst_add, w_inst_sub, w_inst_sll, w_inst_slt, w_inst_sltu;
    wire    w_inst_xor, w_inst_srl, w_inst_sra, w_inst_or, w_inst_and;
    wire    w_inst_lui;
    wire    w_inst_beq, w_inst_bne, w_inst_blt, w_inst_bge, w_inst_bltu, w_inst_bgeu;
    wire    w_inst_jalr;
    wire    w_inst_jal;
    wire    w_inst_ecall, w_inst_ebreak;
`ifdef EXTENSION_Zicsr
    wire    w_inst_csrrw, w_inst_csrrs, w_inst_csrrc, w_inst_csrrwi, w_inst_csrrsi, w_inst_csrrci;
    wire    w_inst_csr;
`endif

    wire    w_inst_fence, w_inst_fence_i;

    wire    w_inst_load;
    wire    w_inst_store;
    wire    w_inst_imm;
    wire    w_inst_reg;
    wire    w_inst_branch;

    wire    w_inst_full;
    wire    w_inst_grp_load;
    wire    w_inst_grp_arif_imm;
    wire    w_inst_grp_auipc;
    wire    w_inst_grp_store;
    wire    w_inst_grp_arif_reg;
    wire    w_inst_grp_lui;
    wire    w_inst_grp_branch;
    wire    w_inst_grp_jalr;
    wire    w_inst_grp_jal;
    wire    w_inst_grp_misc_mem;
    wire    w_inst_grp_system;

`ifdef EXTENSION_Zicsr
    reg[1:0]    r_csr_op;
    reg         r_csr_sel;
`endif

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
            r_instr <= i_data;
        end
    end

    reg[31:0]  w_instr;
    reg     r_flush;
    reg     r_stall;
    always_ff @(posedge i_clk)
    begin
        r_flush <= i_flush;
        r_stall <= i_stall;
    end

    always_comb
    begin
        if ((!i_reset_n) | r_flush)
            w_instr = '0;
        else 
            w_instr = r_instr;
    end

    assign      w_op             = w_instr[6:0];
    assign      w_rd             = w_instr[11:7];
    assign      w_funct3         = w_instr[14:12];
    assign      w_rs1            = w_inst_lui ? '0 : w_instr[19:15];
    assign      w_rs2            = w_instr[24:20];
    assign      w_funct7         = w_instr[31:25];
    assign      w_funct12        = w_instr[31:20];

    assign  w_inst_supported = 
            w_inst_none |
            w_inst_lb    | w_inst_lh   | w_inst_lw   | w_inst_lbu   | w_inst_lhu  |
            w_inst_addi  | w_inst_slli | w_inst_slti | w_inst_sltiu |
            w_inst_xori  | w_inst_srli | w_inst_srai | w_inst_ori   | w_inst_andi |
            w_inst_auipc |
            w_inst_sb    | w_inst_sh   | w_inst_sw   |
            w_inst_add   | w_inst_sub  | w_inst_sll  | w_inst_slt   | w_inst_sltu |
            w_inst_xor   | w_inst_srl  | w_inst_sra  | w_inst_or    | w_inst_and  |
            w_inst_lui   |
            w_inst_beq   | w_inst_bne  | w_inst_blt  | w_inst_bge   | w_inst_bltu | w_inst_bgeu |
            w_inst_jalr  |
            w_inst_jal   |
            w_inst_fence | w_inst_fence_i
        `ifdef EXTENSION_Zicsr
            | w_inst_csrrw | w_inst_csrrs | w_inst_csrrc | w_inst_csrrwi | w_inst_csrrsi | w_inst_csrrci
        `endif
            ;

    assign  w_inst_full = (w_op[1:0] == 2'b11);

    assign  w_inst_none = !(|w_instr);
    // instructions groups
    assign  w_inst_grp_load     = (w_op[6:2] == 5'b00000) & w_inst_full;
    assign  w_inst_grp_misc_mem = (w_op[6:2] == 5'b00011) & w_inst_full;
    assign  w_inst_grp_arif_imm = (w_op[6:2] == 5'b00100) & w_inst_full;
    assign  w_inst_grp_auipc    = (w_op[6:2] == 5'b00101) & w_inst_full;
    assign  w_inst_grp_store    = (w_op[6:2] == 5'b01000) & w_inst_full;
    assign  w_inst_grp_arif_reg = (w_op[6:2] == 5'b01100) & w_inst_full;
    assign  w_inst_grp_lui      = (w_op[6:2] == 5'b01101) & w_inst_full;
    assign  w_inst_grp_branch   = (w_op[6:2] == 5'b11000) & w_inst_full;
    assign  w_inst_grp_jalr     = (w_op[6:2] == 5'b11001) & w_inst_full;
    assign  w_inst_grp_jal      = (w_op[6:2] == 5'b11011) & w_inst_full;
    assign  w_inst_grp_system   = (w_op[6:2] == 5'b11100) & w_inst_full;

    // memory read operations
    assign  w_inst_lb       = w_inst_grp_load & (w_funct3 == 3'b000);
    assign  w_inst_lh       = w_inst_grp_load & (w_funct3 == 3'b001);
    assign  w_inst_lw       = w_inst_grp_load & (w_funct3 == 3'b010);
    assign  w_inst_lbu      = w_inst_grp_load & (w_funct3 == 3'b100);
    assign  w_inst_lhu      = w_inst_grp_load & (w_funct3 == 3'b101);
    // arifmetical with immediate
    assign  w_inst_addi     = w_inst_grp_arif_imm & (w_funct3 == 3'b000);
    assign  w_inst_slli     = w_inst_grp_arif_imm & (w_funct3 == 3'b001);
    assign  w_inst_slti     = w_inst_grp_arif_imm & (w_funct3 == 3'b010);
    assign  w_inst_sltiu    = w_inst_grp_arif_imm & (w_funct3 == 3'b011);
    assign  w_inst_xori     = w_inst_grp_arif_imm & (w_funct3 == 3'b100);
    assign  w_inst_srli     = w_inst_grp_arif_imm & (w_funct3 == 3'b101) & (w_funct7 == 7'b0000000);
    assign  w_inst_srai     = w_inst_grp_arif_imm & (w_funct3 == 3'b101) & (w_funct7 == 7'b0100000);
    assign  w_inst_ori      = w_inst_grp_arif_imm & (w_funct3 == 3'b110);
    assign  w_inst_andi     = w_inst_grp_arif_imm & (w_funct3 == 3'b111);
    // add upper immediate to PC
    assign  w_inst_auipc    = w_inst_grp_auipc;
    // memory write operations
    assign  w_inst_sb       = w_inst_grp_store & (w_funct3 == 3'b000);
    assign  w_inst_sh       = w_inst_grp_store & (w_funct3 == 3'b001);
    assign  w_inst_sw       = w_inst_grp_store & (w_funct3 == 3'b010);
    // arifmetical with register
    assign  w_inst_add      = w_inst_grp_arif_reg & (w_funct3 == 3'b000) & (w_funct7 == 7'b0000000);
    assign  w_inst_sub      = w_inst_grp_arif_reg & (w_funct3 == 3'b000) & (w_funct7 == 7'b0100000);
    assign  w_inst_sll      = w_inst_grp_arif_reg & (w_funct3 == 3'b001) & (w_funct7 == 7'b0000000);
    assign  w_inst_slt      = w_inst_grp_arif_reg & (w_funct3 == 3'b010) & (w_funct7 == 7'b0000000);
    assign  w_inst_sltu     = w_inst_grp_arif_reg & (w_funct3 == 3'b011) & (w_funct7 == 7'b0000000);
    assign  w_inst_xor      = w_inst_grp_arif_reg & (w_funct3 == 3'b100) & (w_funct7 == 7'b0000000);
    assign  w_inst_srl      = w_inst_grp_arif_reg & (w_funct3 == 3'b101) & (w_funct7 == 7'b0000000);
    assign  w_inst_sra      = w_inst_grp_arif_reg & (w_funct3 == 3'b101) & (w_funct7 == 7'b0100000);
    assign  w_inst_or       = w_inst_grp_arif_reg & (w_funct3 == 3'b110) & (w_funct7 == 7'b0000000);
    assign  w_inst_and      = w_inst_grp_arif_reg & (w_funct3 == 3'b111) & (w_funct7 == 7'b0000000);
    // load upper immediate
    assign  w_inst_lui      = w_inst_grp_lui;
    // branches
    assign  w_inst_beq      = w_inst_grp_branch & (w_funct3 == 3'b000);
    assign  w_inst_bne      = w_inst_grp_branch & (w_funct3 == 3'b001);
    assign  w_inst_blt      = w_inst_grp_branch & (w_funct3 == 3'b100);
    assign  w_inst_bge      = w_inst_grp_branch & (w_funct3 == 3'b101);
    assign  w_inst_bltu     = w_inst_grp_branch & (w_funct3 == 3'b110);
    assign  w_inst_bgeu     = w_inst_grp_branch & (w_funct3 == 3'b111);
    // jumps
    assign  w_inst_jalr     = w_inst_grp_jalr & (w_funct3 == 3'b000);
    assign  w_inst_jal      = w_inst_grp_jal;
    // fence
    assign  w_inst_fence    = w_inst_grp_misc_mem & (w_funct3 == 3'b000);
    assign  w_inst_fence_i  = w_inst_grp_misc_mem & (w_funct3 == 3'b001);
    // system
    assign  w_inst_ecall    = w_inst_grp_system & (w_funct3 == 3'b000) & (w_funct12 == 12'b000000000000);
    assign  w_inst_ebreak   = w_inst_grp_system & (w_funct3 == 3'b000) & (w_funct12 == 12'b000000000001);
`ifdef EXTENSION_Zicsr
    assign  w_inst_csrrw    = w_inst_grp_system & (w_funct3 == 3'b001);
    assign  w_inst_csrrs    = w_inst_grp_system & (w_funct3 == 3'b010);
    assign  w_inst_csrrc    = w_inst_grp_system & (w_funct3 == 3'b011);
    assign  w_inst_csrrwi   = w_inst_grp_system & (w_funct3 == 3'b101);
    assign  w_inst_csrrsi   = w_inst_grp_system & (w_funct3 == 3'b110);
    assign  w_inst_csrrci   = w_inst_grp_system & (w_funct3 == 3'b111);
`endif

    assign  w_inst_load = w_inst_lb | w_inst_lh | w_inst_lw | w_inst_lbu | w_inst_lhu;
    assign  w_inst_store = w_inst_sb | w_inst_sh | w_inst_sw;
    assign  w_inst_imm  = w_inst_addi  | w_inst_slli | w_inst_slti | w_inst_sltiu |
                w_inst_xori  | w_inst_srli | w_inst_srai | w_inst_ori   | w_inst_andi;
    assign  w_inst_reg  = w_inst_add   | w_inst_sub  | w_inst_sll  | w_inst_slt   | w_inst_sltu |
                w_inst_xor   | w_inst_srl  | w_inst_sra  | w_inst_or    | w_inst_and;
    assign  w_inst_branch =  w_inst_beq   | w_inst_bne  | w_inst_blt  | w_inst_bge   | w_inst_bltu | w_inst_bgeu;
`ifdef EXTENSION_Zicsr
    assign  w_inst_csr = w_inst_csrrw | w_inst_csrrs | w_inst_csrrc | w_inst_csrrwi | w_inst_csrrsi | w_inst_csrrci;
`endif

    always_comb
    begin
        case (1'b1)
        w_inst_jal:
            w_imm = { {12{w_instr[31]}}, w_instr[19:12], w_instr[20], w_instr[30:21], 1'b0 };
        |{w_inst_lui, w_inst_auipc}:
            w_imm = { w_instr[31:12], {12{1'b0}} };
        |{w_inst_jalr, w_inst_load, w_inst_imm}:
            w_imm = { {21{w_instr[31]}}, w_instr[30:20] };
        w_inst_branch:
            w_imm = { {20{w_instr[31]}}, w_instr[7], w_instr[30:25], w_instr[11:8], 1'b0 };
        w_inst_store:
            w_imm = { {21{w_instr[31]}}, w_instr[30:25], w_instr[11:7] };
    `ifdef EXTENSION_Zicsr
        |{w_inst_csrrwi, w_inst_csrrsi, w_inst_csrrci}:
            w_imm = { {27{1'b0}}, w_instr[19:15] };
    `endif
        default:w_imm = 'x;
        endcase
    end

    assign w_reg_write = w_inst_load | w_inst_imm | w_inst_auipc | w_inst_reg | w_inst_lui | w_inst_jalr | w_inst_jal
`ifdef EXTENSION_Zicsr
                        | w_inst_csr
`endif
    ;

    always_comb
    begin
        case (1'b1)
        |{w_inst_auipc,w_inst_jal}:
            r_alu_op1_sel = `ALU_SRC_OP1_PC;
        default:
            r_alu_op1_sel = `ALU_SRC_OP1_REG;
        endcase
    end

    always_comb
    begin
        case (1'b1)
        |{w_inst_auipc,w_inst_jal,w_inst_jalr,w_inst_lui,w_inst_imm,w_inst_load,w_inst_store}:
            r_alu_op2_sel = `ALU_SRC_OP2_IMM;
        default:
            r_alu_op2_sel = `ALU_SRC_OP2_REG;
        endcase
    end

    always_comb
    begin
        case (1'b1)
        w_inst_load:
            w_res_src = `RESULT_SRC_MEMORY;
        |{w_inst_jalr,w_inst_jal}:
            w_res_src = `RESULT_SRC_PC_P4;
        default:
            w_res_src = `RESULT_SRC_ALU;
        endcase
    end

    reg[4:0]    w_alu_ctrl;

    assign  w_alu_ctrl[4] = |{w_inst_srai,w_inst_sra};

    always_comb
    begin
        case (1'b1)
        w_inst_beq:
            w_alu_ctrl[3:0] = `ALU_CMP_EQ;
        |{w_inst_slti,w_inst_slt,w_inst_blt}:
            w_alu_ctrl[3:0] = `ALU_CMP_LTS;
        |{w_inst_sltiu,w_inst_bltu,w_inst_sltu}:
            w_alu_ctrl[3:0] = `ALU_CMP_LTU;
        w_inst_bne:
            w_alu_ctrl[3:0] = `ALU_CMP_NEQ;
        w_inst_bge:
            w_alu_ctrl[3:0] = `ALU_CMP_NLTS;
        w_inst_bgeu:
            w_alu_ctrl[3:0] = `ALU_CMP_NLTU;
        w_inst_sub:
            w_alu_ctrl[3:0] = `ALU_CTRL_SUB;
        w_inst_xori | w_inst_xor:
            w_alu_ctrl[3:0] = `ALU_CTRL_XOR;
        w_inst_ori | w_inst_or:
            w_alu_ctrl[3:0] = `ALU_CTRL_OR;
        w_inst_andi | w_inst_and:
            w_alu_ctrl[3:0] = `ALU_CTRL_AND;
        w_inst_slli | w_inst_sll:
            w_alu_ctrl[3:0] = `ALU_CTRL_SHL;
        w_inst_srli | w_inst_srl | w_inst_srai | w_inst_sra:
            w_alu_ctrl[3:0] = `ALU_CTRL_SHR;
        default:
            w_alu_ctrl[3:0] = `ALU_CTRL_ADD;
        endcase
    end

`ifdef EXTENSION_Zicsr
    always_comb
    begin
        case (1'b1)
        |{w_inst_csrrw, w_inst_csrrwi}: r_csr_op = `CSR_OP_RW;
        |{w_inst_csrrs, w_inst_csrrsi}: r_csr_op = `CSR_OP_RS;
        |{w_inst_csrrc, w_inst_csrrci}: r_csr_op = `CSR_OP_RC;
        default:                        r_csr_op = `CSR_OP_NONE;
        endcase
    end
    always_comb
    begin
        case (1'b1)
        |{w_inst_csrrwi, w_inst_csrrsi, w_inst_csrrci}: r_csr_sel = `CSR_SRC_SEL_IMM;
        default:                                        r_csr_sel = `CSR_SRC_SEL_REG;
        endcase
    end
`endif

`ifdef TO_SIM
	reg [127:0] dbg_ascii_alu_ctrl;
	always @* begin
		dbg_ascii_alu_ctrl = '0;
        if (w_alu_ctrl[3:0] == `ALU_CMP_EQ) dbg_ascii_alu_ctrl = "EQ";
        if (w_alu_ctrl[3:0] == `ALU_CMP_LTS) dbg_ascii_alu_ctrl = "LTS";
        if (w_alu_ctrl[3:0] == `ALU_CMP_LTU) dbg_ascii_alu_ctrl = "LTU";
        if (w_alu_ctrl[3:0] == `ALU_CMP_NEQ) dbg_ascii_alu_ctrl = "!EQ";
        if (w_alu_ctrl[3:0] == `ALU_CMP_NLTS) dbg_ascii_alu_ctrl = "!LTS";
        if (w_alu_ctrl[3:0] == `ALU_CMP_NLTU) dbg_ascii_alu_ctrl = "!LTU";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_ADD) dbg_ascii_alu_ctrl = "ADD";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_SUB) dbg_ascii_alu_ctrl = "SUB";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_XOR) dbg_ascii_alu_ctrl = "XOR";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_OR) dbg_ascii_alu_ctrl = "OR";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_AND) dbg_ascii_alu_ctrl = "AND";
        if (w_alu_ctrl[3:0] == `ALU_CTRL_SHL) dbg_ascii_alu_ctrl = "SHL";
        if (w_alu_ctrl[4:0] == {1'b0,`ALU_CTRL_SHR}) dbg_ascii_alu_ctrl = "L_SHR";
        if (w_alu_ctrl[4:0] == {1'b1,`ALU_CTRL_SHR}) dbg_ascii_alu_ctrl = "A_SHR";
	end

	reg [127:0] dbg_ascii_instr;
	always @* begin
		dbg_ascii_instr = '0;

        if (w_inst_none)     dbg_ascii_instr = "NONE";

		if (w_inst_lui)      dbg_ascii_instr = "lui";
		if (w_inst_auipc)    dbg_ascii_instr = "auipc";
		if (w_inst_jal)      dbg_ascii_instr = "jal";
		if (w_inst_jalr)     dbg_ascii_instr = "jalr";

		if (w_inst_beq)      dbg_ascii_instr = "beq";
		if (w_inst_bne)      dbg_ascii_instr = "bne";
		if (w_inst_blt)      dbg_ascii_instr = "blt";
		if (w_inst_bge)      dbg_ascii_instr = "bge";
		if (w_inst_bltu)     dbg_ascii_instr = "bltu";
		if (w_inst_bgeu)     dbg_ascii_instr = "bgeu";

		if (w_inst_lb)       dbg_ascii_instr = "lb";
		if (w_inst_lh)       dbg_ascii_instr = "lh";
		if (w_inst_lw)       dbg_ascii_instr = "lw";
		if (w_inst_lbu)      dbg_ascii_instr = "lbu";
		if (w_inst_lhu)      dbg_ascii_instr = "lhu";
		if (w_inst_sb)       dbg_ascii_instr = "sb";
		if (w_inst_sh)       dbg_ascii_instr = "sh";
		if (w_inst_sw)       dbg_ascii_instr = "sw";

		if (w_inst_addi)     dbg_ascii_instr = "addi";
		if (w_inst_slti)     dbg_ascii_instr = "slti";
		if (w_inst_sltiu)    dbg_ascii_instr = "sltiu";
		if (w_inst_xori)     dbg_ascii_instr = "xori";
		if (w_inst_ori)      dbg_ascii_instr = "ori";
		if (w_inst_andi)     dbg_ascii_instr = "andi";
		if (w_inst_slli)     dbg_ascii_instr = "slli";
		if (w_inst_srli)     dbg_ascii_instr = "srli";
		if (w_inst_srai)     dbg_ascii_instr = "srai";

		if (w_inst_add)      dbg_ascii_instr = "add";
		if (w_inst_sub)      dbg_ascii_instr = "sub";
		if (w_inst_sll)      dbg_ascii_instr = "sll";
		if (w_inst_slt)      dbg_ascii_instr = "slt";
		if (w_inst_sltu)     dbg_ascii_instr = "sltu";
		if (w_inst_xor)      dbg_ascii_instr = "xor";
		if (w_inst_srl)      dbg_ascii_instr = "srl";
		if (w_inst_sra)      dbg_ascii_instr = "sra";
		if (w_inst_or)       dbg_ascii_instr = "or";
		if (w_inst_and)      dbg_ascii_instr = "and";
        
		if (w_inst_fence)    dbg_ascii_instr = "fence";
		if (w_inst_fence_i)  dbg_ascii_instr = "fence.i";
        
		if (w_inst_ecall)    dbg_ascii_instr = "ecall";
		if (w_inst_ebreak)   dbg_ascii_instr = "ebreak";
        
    `ifdef EXTENSION_Zicsr
		if (w_inst_csrrw)    dbg_ascii_instr = "csrrw";
		if (w_inst_csrrs)    dbg_ascii_instr = "csrrs";
		if (w_inst_csrrc)    dbg_ascii_instr = "csrrc";
		if (w_inst_csrrwi)   dbg_ascii_instr = "csrrwi";
		if (w_inst_csrrsi)   dbg_ascii_instr = "csrrsi";
		if (w_inst_csrrci)   dbg_ascii_instr = "csrrci";
    `endif
	end
`endif

    assign  o_rs1 = w_rs1;
    assign  o_rs2 = w_rs2;
    assign  o_rd = w_rd;
    assign  o_pc = r_pc;
    assign  o_pc_p4 = r_pc_p4;
    assign  o_imm = w_imm;
    assign  o_reg_write = w_reg_write;
    assign  o_mem_read = w_inst_load;
    assign  o_mem_write = w_inst_store;
    assign  o_res_src = w_res_src;
    assign  o_jump = w_inst_jalr | w_inst_jal;
    assign  o_branch = w_inst_branch;
    assign  o_alu_op1_sel = r_alu_op1_sel;
    assign  o_alu_op2_sel = r_alu_op2_sel;
    assign  o_funct3 = w_funct3;
    assign  o_alu_ctrl = w_alu_ctrl;
    assign  o_pc_sel = w_inst_jalr;
    assign  o_inv_instr = !w_inst_supported;
`ifdef EXTENSION_Zicsr
    assign  o_csr_idx = w_funct12;
    assign  o_csr_op = r_csr_op;
    assign  o_csr_sel = r_csr_sel;
`endif

endmodule
