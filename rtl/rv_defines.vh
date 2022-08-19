`define RESULT_SRC_ALU      2'b00
`define RESULT_SRC_MEMORY   2'b01
`define RESULT_SRC_PC_P4    2'b10
//`define RESULT_SRC_MEMORY   2'b11

`define ALU_SRC_OP1_REG     2'b00
`define ALU_SRC_OP1_PC      2'b01
`define ALU_SRC_OP1_ZERO    2'b10

`define ALU_SRC_OP2_REG     1'b0
`define ALU_SRC_OP2_IMM     1'b1

`define ALU_CMP_EQ          3'b000
`define ALU_CMP_LTS         3'b001
`define ALU_CMP_LTU         3'b010
`define ALU_CMP_NEQ         3'b100
`define ALU_CMP_NLTS        3'b101
`define ALU_CMP_NLTU        3'b110
`define ALU_CMP_SHIFT_AR    3'b001
`define ALU_CMP_NONE        3'b000

`define ALU_CTRL_ADD        3'b000
`define ALU_CTRL_SUB        3'b001
`define ALU_CTRL_XOR        3'b010
`define ALU_CTRL_OR         3'b011
`define ALU_CTRL_AND        3'b100
`define ALU_CTRL_SHL        3'b101
`define ALU_CTRL_SHR        3'b110
`define ALU_CTRL_CMP        3'b111
