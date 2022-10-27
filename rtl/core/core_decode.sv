`timescale 1 ns / 1 ps

`include "../rv_defines.vh"

module core_decode
(
    input   wire[31:0]                  i_instr,
    input   wire                        i_flush,
    output  wire[4:0]                   o_rs1,
    output  wire[4:0]                   o_rs2,
    output  wire[4:0]                   o_rd,
    output  wire[31:0]                  o_imm,
    output  wire                        o_reg_write,
    output  wire                        o_mem_read,
    output  wire                        o_mem_write,
    output  wire[1:0]                   o_res_src,
    output  wire                        o_jump,
    output  wire                        o_branch,
    output  wire                        o_alu_op1_sel,
    output  wire                        o_alu_op2_sel,
    output  wire[2:0]                   o_funct3,
    output  wire[4:0]                   o_alu_ctrl,
    output  wire                        o_pc_sel,
`ifdef EXTENSION_Zicsr
    output  wire[11:0]                  o_csr_idx,
    output  wire[1:0]                   o_csr_op,
    output  wire                        o_csr_sel,
`endif
    output  wire                        o_inv_instr
);

    logic[6:0]  w_op;
    logic[4:0]  w_rd;
    logic[2:0]  w_funct3;
    logic[4:0]  w_rs1, w_rs2;
    logic[6:0]  w_funct7;
    logic[31:0] w_imm;
    logic[11:0] w_funct12;
    logic       w_reg_write;
    logic[1:0]  w_res_src;
    logic       r_alu_op1_sel;
    logic       r_alu_op2_sel;
    logic[4:0]  w_alu_ctrl;

    logic   w_inst_none, w_inst_supported;
    logic   w_inst_lb, w_inst_lh, w_inst_lw, w_inst_lbu, w_inst_lhu;
    logic   w_inst_addi, w_inst_slli, w_inst_slti, w_inst_sltiu;
    logic   w_inst_xori, w_inst_srli, w_inst_srai, w_inst_ori, w_inst_andi;
    logic   w_inst_auipc;
    logic   w_inst_sb, w_inst_sh, w_inst_sw;
    logic   w_inst_add, w_inst_sub, w_inst_sll, w_inst_slt, w_inst_sltu;
    logic   w_inst_xor, w_inst_srl, w_inst_sra, w_inst_or, w_inst_and;
    logic   w_inst_lui;
    logic   w_inst_beq, w_inst_bne, w_inst_blt, w_inst_bge, w_inst_bltu, w_inst_bgeu;
    logic   w_inst_jalr;
    logic   w_inst_jal;
    logic   w_inst_ecall, w_inst_ebreak;
`ifdef EXTENSION_Zicsr
    logic   w_inst_csrrw, w_inst_csrrs, w_inst_csrrc, w_inst_csrrwi, w_inst_csrrsi, w_inst_csrrci;
    logic   w_inst_csr;
`endif

    logic   w_inst_fence, w_inst_fence_i;

    logic   w_inst_load;
    logic   w_inst_store;
    logic   w_inst_imm;
    logic   w_inst_reg;
    logic   w_inst_branch;

    logic   w_inst_full;
    logic   w_inst_grp_load;
    logic   w_inst_grp_arif_imm;
    logic   w_inst_grp_auipc;
    logic   w_inst_grp_store;
    logic   w_inst_grp_arif_reg;
    logic   w_inst_grp_lui;
    logic   w_inst_grp_branch;
    logic   w_inst_grp_jalr;
    logic   w_inst_grp_jal;
    logic   w_inst_grp_misc_mem;
    logic   w_inst_grp_system;

`ifdef EXTENSION_Zicsr
    logic[1:0]  r_csr_op;
    logic       r_csr_sel;
`endif

    assign      w_op             = i_instr[6:0];
    assign      w_rd             = i_instr[11:7];
    assign      w_funct3         = i_instr[14:12];
    assign      w_rs1            = w_inst_lui ? '0 : i_instr[19:15];
    assign      w_rs2            = i_instr[24:20];
    assign      w_funct7         = i_instr[31:25];
    assign      w_funct12        = i_instr[31:20];

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

    assign  w_inst_none = !(|i_instr);
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
    assign  w_inst_csrrw    = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b001);
    assign  w_inst_csrrs    = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b010);
    assign  w_inst_csrrc    = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b011);
    assign  w_inst_csrrwi   = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b101);
    assign  w_inst_csrrsi   = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b110);
    assign  w_inst_csrrci   = (!i_flush) & w_inst_grp_system & (w_funct3 == 3'b111);
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
            w_imm = { {12{i_instr[31]}}, i_instr[19:12], i_instr[20], i_instr[30:21], 1'b0 };
        |{w_inst_lui, w_inst_auipc}:
            w_imm = { i_instr[31:12], {12{1'b0}} };
        |{w_inst_jalr, w_inst_load, w_inst_imm}:
            w_imm = { {21{i_instr[31]}}, i_instr[30:20] };
        w_inst_branch:
            w_imm = { {20{i_instr[31]}}, i_instr[7], i_instr[30:25], i_instr[11:8], 1'b0 };
        w_inst_store:
            w_imm = { {21{i_instr[31]}}, i_instr[30:25], i_instr[11:7] };
    `ifdef EXTENSION_Zicsr
        |{w_inst_csrrwi, w_inst_csrrsi, w_inst_csrrci}:
            w_imm = { {27{1'b0}}, i_instr[19:15] };
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
    logic [127:0] dbg_ascii_alu_ctrl;
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

    logic [127:0] dbg_ascii_instr;
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
