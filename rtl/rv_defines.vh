//`define MODE_STAGED
//`define ICACHE_USE
//`define DCACHE_USE

`define EXTENSION_Zicsr

`ifdef EXTENSION_Zicsr
    `define EXTENSION_Zicntr
    `define EXTENSION_Zihpm
    //`define EXTENSION_Zicntr
`endif

`define STAGED_BP_MEMORY    2'b11
`define STAGED_BP_WRITE_BK  2'b10
`define STAGED_BP_WRITE     2'b01
`define STAGED_BP_DIRECT    2'b00

`define RESULT_SRC_ALU      2'b00
`define RESULT_SRC_MEMORY   2'b01
`define RESULT_SRC_PC_P4    2'b10

`define ALU_SRC_OP1_REG     1'b0
`define ALU_SRC_OP1_PC      1'b1

`define ALU_SRC_OP2_REG     1'b0
`define ALU_SRC_OP2_IMM     1'b1

`define ALU_CMP_EQ          4'b0000
`define ALU_CMP_LTS         4'b0001
`define ALU_CMP_LTU         4'b0010
`define ALU_CMP_NEQ         4'b0100
`define ALU_CMP_NLTS        4'b0101
`define ALU_CMP_NLTU        4'b0110
`define ALU_CMP_SHIFT_AR    4'b0001
`define ALU_CMP_NONE        4'b0000

`define ALU_CTRL_ADD        4'b1000
`define ALU_CTRL_SUB        4'b1001
`define ALU_CTRL_SHL        4'b1010
`define ALU_CTRL_SHR        4'b1011
`define ALU_CTRL_XOR        4'b1100
`define ALU_CTRL_OR         4'b1101
`define ALU_CTRL_AND        4'b1110
//`define ALU_CTRL_CMP        4'b1111

`define CSR_OP_NONE         2'b00
`define CSR_OP_RW           2'b01
`define CSR_OP_RS           2'b10
`define CSR_OP_RC           2'b11

`define CSR_SRC_SEL_REG     1'b0
`define CSR_SRC_SEL_IMM     1'b1

`ifdef TO_SIM
    `define TCM_ADDR_WIDTH      21
`else
    `define TCM_ADDR_WIDTH      13
`endif

`define TCM_ADDR_SEL        4'b0000

`define SLAVE_SEL_WIDTH     4
`define SLAVE_SEL_FROM      (31)
`define SLAVE_SEL_TO        (`SLAVE_SEL_FROM - (`SLAVE_SEL_WIDTH  -1))
