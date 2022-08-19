.section .text
.globl Reset

Reset:
    nop
    nop
    addi    x1, x0, 16  ; x1=16
    slli    x0, x1, 2
    slti    x0, x1, 9
    sltiu   x0, x1, 20
    xori    x0, x1, 1
    srli    x0, x1, 2
    srai    x0, x1, 3
    ori     x0, x1, 5
    andi    x0, x1, 15
    auipc   x0, 10
    lui     x0, 12
    lb      x9, 1(x1)
    lh      x10, 2(x1)
    lw      x11, 0(x1)
    sb      x9,  65(x1)
    sh      x10, 70(x1)
    sw      x11, 72(x1)
    lw      x12, 64(x1)
    lw      x13, 60(x1)
    lw      x14, 68(x1)
    lw      x15, 72(x1)
    slli    x2, x1, 1   ; x2=32
    srli    x3, x2, 2   ; x3=8
    ori     x4, x3, 2   ; x4=10
    andi    x5, x4, 7   ; x5=2
    add     x6, x2, x3  ; x6=40
loop:
    j       loop
