module rv_decode
(
    input   wire                        i_clk,
    input   wire                        i_stall,
    input   wire                        i_flush,
    input   wire[31:0]                  i_data,
    input   wire[31:2]                  i_pc,
    input   wire[31:2]                  i_pc_p4
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

    reg[31:0]   r_decode_instr;
    reg[31:2]   r_decode_pc;
    reg[31:2]   r_decode_pc_p4;

    wire[6:0]   w_decode_op;
    wire[4:0]   w_decode_rd;
    wire[2:0]   w_decode_funct3;
    wire[4:0]   w_decode_rs1, w_decode_rs2;
    wire[6:0]   w_decode_funct7;
    reg[31:0]   w_decode_imm;
    wire[31:0]  w_decode_rs1_val;
    wire[31:0]  w_decode_rs2_val;

    wire        w_decode_reg_write;
    reg[2:0]    w_decode_imm_src;
    reg[1:0]    w_decode_res_src;
    wire        w_decode_mem_read;
    wire        w_decode_mem_write;
    reg         w_decode_jump;
    wire        w_decode_branch;
    reg         w_decode_alu_src;

    always_ff @(posedge i_clk)
    begin
        if (i_flush)
        begin
            r_decode_instr <= '0;
            r_decode_pc <= '0;
            r_decode_pc_p4 <= '0;
        end
        else if (!i_stall)
        begin
            r_decode_instr <= i_data;
            r_decode_pc <= i_pc;
            r_decode_pc_p4 <= i_pc_p4;
        end
    end

    assign      w_decode_op             = r_decode_instr[6:0];
    assign      w_decode_rd             = r_decode_instr[11:7];
    assign      w_decode_funct3         = r_decode_instr[14:12];
    assign      w_decode_rs1            = r_decode_instr[19:15];
    assign      w_decode_rs2            = r_decode_instr[24:20];
    assign      w_decode_funct7         = r_decode_instr[31:25];

    always_comb
    begin
        case (w_decode_op)
        INST_OP_LOAD:   w_decode_imm_src = 3'b000;
        INST_OP_IMM:    w_decode_imm_src = 3'b000;
        INST_OP_RJUMP:  w_decode_imm_src = 3'b000;
        INST_OP_SAVE:   w_decode_imm_src = 3'b001;
        INST_OP_BRANCH: w_decode_imm_src = 3'b010;
        INST_OP_IJUMP:  w_decode_imm_src = 3'b011;
        INST_OP_AUIPC:  w_decode_imm_src = 3'b100;
        INST_OP_LUI:    w_decode_imm_src = 3'b100;
        default:        w_decode_imm_src = 3'b111;
        endcase
    end

    always_comb
    begin
        case (w_decode_imm_src)
        // I type
        3'b000: w_decode_imm = { {21{r_decode_instr[31]}},
                                r_decode_instr[30:20] };
        // L/S type
        3'b001: w_decode_imm = { {21{r_decode_instr[31]}},
                                r_decode_instr[30:25],
                                r_decode_instr[11:7] };
        // B type
        3'b010: w_decode_imm = { {20{r_decode_instr[31]}},
                                r_decode_instr[7],
                                r_decode_instr[30:25],
                                r_decode_instr[11:8],
                                1'b0 };
        // J type
        3'b011: w_decode_imm = { {13{r_decode_instr[31]}},
                                r_decode_instr[19:12],
                                r_decode_instr[20],
                                r_decode_instr[30:21] };
        // U type
        3'b100: w_decode_imm = { r_decode_instr[31:12],
                                {12{1'b0}} };
        default:w_decode_imm = 'x;
        endcase
    end

    assign w_decode_rs1_val = (|w_decode_rs1) ? r_reg_file[w_decode_rs1] : '0;
    assign w_decode_rs2_val = (|w_decode_rs2) ? r_reg_file[w_decode_rs2] : '0;
    assign w_decode_reg_write = (w_decode_op == INST_OP_REG) ||
                                (w_decode_op == INST_OP_LOAD) ||
                                (w_decode_op == INST_OP_IMM) ||
                                (w_decode_op == INST_OP_RJUMP) ||
                                (w_decode_op == INST_OP_IJUMP) ||
                                (w_decode_op == INST_OP_AUIPC) ||
                                (w_decode_op == INST_OP_LUI);
    assign w_decode_mem_read = (w_decode_op == INST_OP_LOAD);
    assign w_decode_mem_write = (w_decode_op == INST_OP_SAVE);
    assign w_decode_branch = (w_decode_op == INST_OP_BRANCH);
    always_comb
    begin
        case (w_decode_op)
        INST_OP_IJUMP:  w_decode_jump = '1;
        INST_OP_RJUMP:  w_decode_jump = '1;
        default:        w_decode_jump = '0;
        endcase
    end
    always_comb
    begin
        case (w_decode_op)
        INST_OP_LOAD:  w_decode_res_src = 2'b01;
        INST_OP_IJUMP: w_decode_res_src = 2'b10;
        INST_OP_RJUMP: w_decode_res_src = 2'b10;
        default:       w_decode_res_src = 2'b00;
        endcase
    end
    always_comb
    begin
        case (w_decode_op)
        INST_OP_LOAD:  w_decode_alu_src = '1;
        INST_OP_IMM:   w_decode_alu_src = '1;
        INST_OP_SAVE:  w_decode_alu_src = '1;
        INST_OP_RJUMP: w_decode_alu_src = '1;
        default:       w_decode_alu_src = '0;
        endcase
    end
    wire[1:0]   w_alu_op;
    wire[2:0]   w_alu_ctrl;
    assign  w_alu_op =  (w_decode_op == INST_OP_LOAD) ? 2'b00 :
                        (w_decode_op == INST_OP_SAVE) ? 2'b00 :
                        (w_decode_op == INST_OP_REG) ? 2'b10 :
                        (w_decode_op == INST_OP_BRANCH) ? 2'b01 :
                        (w_decode_op == INST_OP_IMM) ? 2'b10 :
                        2'b11;
    assign  w_alu_ctrl = (w_alu_op == 2'b00) ? 3'b000 :
                        (w_alu_op == 2'b01) ? 3'b001 :
                        ((w_decode_funct3 == 3'b000) && (!(&{w_decode_op[5], w_decode_funct7[5]}))) ? 3'b000 :
                        (w_decode_funct3 == 3'b000) ? 3'b001 :
                        (w_decode_funct3 == 3'b010) ? 3'b101 :
                        (w_decode_funct3 == 3'b110) ? 3'b011 :
                        3'b010;

endmodule
