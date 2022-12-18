typedef struct packed
{
    logic[31:2]                         pc;
    logic[31:2]                         pc_p4;
    logic[31:0]                         instr;
} ucode_t;

typedef struct packed
{
    logic[4:0]                          rs1;
    logic[4:0]                          rs2;
    logic[4:0]                          rd;
    logic[31:2]                         pc;
    logic[31:2]                         pc_p4;
    logic[31:0]                         imm;
    logic                               reg_write;
    logic                               mem_read;
    logic                               mem_write;
    logic[1:0]                          res_src;
    logic                               pc_sel;
    logic                               jump;
    logic                               branch;
    logic                               alu_op1_sel;
    logic                               alu_op2_sel;
    logic[2:0]                          funct3;
    logic[4:0]                          alu_ctrl;
`ifdef EXTENSION_Zicsr
    logic[11:0]                         csr_idx;
    logic[1:0]                          csr_op;
    logic                               csr_sel;
`endif
    logic                               inv_instr;
    logic[127:0]                        dbg_instr;
    logic[127:0]                        dbg_alu_ctrl;
} decode_t;

typedef struct packed
{
    logic[4:0]                          rs1;
    logic[4:0]                          rs2;
    logic[4:0]                          rd;
    logic[31:2]                         pc;
    logic[31:2]                         pc_p4;
    logic[31:0]                         imm;
    logic                               reg_write;
    logic                               mem_read;
    logic                               mem_write;
    logic[1:0]                          res_src;
    logic                               pc_sel;
    logic                               jump;
    logic                               branch;
    logic                               alu_op1_sel;
    logic                               alu_op2_sel;
    logic[2:0]                          funct3;
    logic[4:0]                          alu_ctrl;
`ifdef EXTENSION_Zicsr
    logic[11:0]                         csr_idx;
    logic[1:0]                          csr_op;
    logic                               csr_sel;
`endif
    logic                               inv_instr;
    logic[127:0]                        dbg_instr;
    logic[127:0]                        dbg_alu_ctrl;
    logic[31:0]                         op1;
    logic[31:0]                         op2;
    logic[31:0]                         bp1;
    logic[31:0]                         bp2;
} exec_prep_t;
