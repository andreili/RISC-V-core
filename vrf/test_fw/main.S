.section .text
.globl Reset

Reset:
    addi    x1, x0, 16  ; x1=16
    slli    x0, x1, 2
    slti    x0, x1, 9
    sltiu   x0, x1, 20
    xori    x0, x1, 1
    lbu     x11, 0(x1)
    addi    x17, x11, 10
l_test:
    addi    x17, x17, -1
    bne     x17, x0, l_test
    srli    x0, x1, 2
    srai    x0, x1, 3
    ori     x0, x1, 5
    andi    x0, x1, 15
    auipc   x0, 10
    lui     x0, 12
    lb      x9, 1(x1)
    lh      x10, 2(x1)
    lw      x11, 0(x1)
    slli    x2, x1, 1   ; x2=32
    srli    x3, x2, 2   ; x3=8
    ori     x4, x3, 2   ; x4=10
    andi    x5, x4, 7   ; x5=2
    add     x6, x2, x3  ; x6=40
    la      x1, 0xa5a5a5a5
    la      x2, 0x5a5a5a5a
loop:
    j       loop
