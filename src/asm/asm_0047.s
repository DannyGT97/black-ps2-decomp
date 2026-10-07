# ==== FUN_00388dd8 @ 00388dd8 ====
  00388dd8  f0ffbd27  addiu sp,sp,-0x10
  00388ddc  0000bfff  sd ra,0x0(sp)
  00388de0  30008290  lbu v0,0x30(a0)
  00388de4  01004230  andi v0,v0,0x1
  00388de8  05004014  bne v0,zero,0x00388e00
  00388dec  2d180000  _move v1,zero
  00388df0  78140a0c  jal 0x002851e0
  00388df4  00000000  _nop
  00388df8  0100422c  sltiu v0,v0,0x1
  00388dfc  2d184000  move v1,v0
  00388e00  0000bfdf  ld ra,0x0(sp)
  00388e04  2d106000  move v0,v1
  00388e08  0800e003  jr ra
  00388e0c  1000bd27  _addiu sp,sp,0x10

# ==== FUN_00388e18 @ 00388e18 ====
  00388e18  08b30234  ori v0,zero,0xb308
  00388e1c  0800e003  jr ra
  00388e20  21108200  _addu v0,a0,v0

# ==== FUN_00388e30 @ 00388e30 ====
  00388e30  080085a0  sb a1,0x8(a0)
  00388e34  0800e003  jr ra
  00388e38  040080ac  _sw zero,0x4(a0)

# ==== FUN_00388e40 @ 00388e40 ====
  00388e40  0800e003  jr ra
  00388e44  0400828c  _lw v0,0x4(a0)

# ==== FUN_00388e48 @ 00388e48 ====
  00388e48  080085a0  sb a1,0x8(a0)
  00388e4c  0800e003  jr ra
  00388e50  040080ac  _sw zero,0x4(a0)

# ==== FUN_00388e58 @ 00388e58 ====
  00388e58  0c00828c  lw v0,0xc(a0)
  00388e5c  00290500  sll a1,a1,0x4
  00388e60  2128a200  addu a1,a1,v0
  00388e64  0800e003  jr ra
  00388e68  0800a28c  _lw v0,0x8(a1)

# ==== FUN_00388e70 @ 00388e70 ====
  00388e70  0800e003  jr ra
  00388e74  00000000  _nop

# ==== FUN_00388e88 @ 00388e88 ====
  00388e88  3e00023c  lui v0,0x3e
  00388e8c  f0ffbd27  addiu sp,sp,-0x10
  00388e90  40004224  addiu v0,v0,0x40
  00388e94  0000bfff  sd ra,0x0(sp)
  00388e98  0100a530  andi a1,a1,0x1
  00388e9c  0500a010  beq a1,zero,0x00388eb4
  00388ea0  000082ac  _sw v0,0x0(a0)
  00388ea4  3d00033c  lui v1,0x3d
  00388ea8  e087628c  lw v0,-0x7820(v1)
  00388eac  09f84000  jalr v0
  00388eb0  00000000  _nop
  00388eb4  0000bfdf  ld ra,0x0(sp)
  00388eb8  0800e003  jr ra
  00388ebc  1000bd27  _addiu sp,sp,0x10

# ==== FUN_00388ed0 @ 00388ed0 ====
  00388ed0  ff00a530  andi a1,a1,0xff
  00388ed4  0800828c  lw v0,0x8(a0)
  00388ed8  c0180500  sll v1,a1,0x3
  00388edc  21186200  addu v1,v1,v0
  00388ee0  000062dc  ld v0,0x0(v1)
  00388ee4  1610a200  dsrlv v0,v0,a1
  00388ee8  ff004230  andi v0,v0,0xff
  00388eec  01004238  xori v0,v0,0x1
  00388ef0  0800e003  jr ra
  00388ef4  01004230  _andi v0,v0,0x1

# ==== FUN_00388ef8 @ 00388ef8 ====
  00388ef8  d0ffbd27  addiu sp,sp,-0x30
  00388efc  2000b07f  sq s0,0x20(sp)
  00388f00  1000b17f  sq s1,0x10(sp)
  00388f04  2d80a000  move s0,a1
  00388f08  2d888000  move s1,a0
  00388f0c  0000bfff  sd ra,0x0(sp)
  00388f10  2e8d0b0c  jal 0x002e34b8
  00388f14  2d280000  _move a1,zero
  00388f18  01001032  andi s0,s0,0x1
  00388f1c  04000012  beq s0,zero,0x00388f30
  00388f20  3d00033c  _lui v1,0x3d
  00388f24  e087628c  lw v0,-0x7820(v1)
  00388f28  09f84000  jalr v0
  00388f2c  2d202002  _move a0,s1
  00388f30  2000b07b  lq s0,0x20(sp)
  00388f34  1000b17b  lq s1,0x10(sp)
  00388f38  0000bfdf  ld ra,0x0(sp)
  00388f3c  0800e003  jr ra
  00388f40  3000bd27  _addiu sp,sp,0x30

# ==== FUN_00388f48 @ 00388f48 ====
  00388f48  d0ffbd27  addiu sp,sp,-0x30
  00388f4c  2000b07f  sq s0,0x20(sp)
  00388f50  1000b17f  sq s1,0x10(sp)
  00388f54  2d808000  move s0,a0
  00388f58  0000bfff  sd ra,0x0(sp)
  00388f5c  2d88a000  move s1,a1
  00388f60  0000038e  lw v1,0x0(s0)
  00388f64  a0006484  lh a0,0xa0(v1)
  00388f68  a400628c  lw v0,0xa4(v1)
  00388f6c  09f84000  jalr v0
  00388f70  21200402  _addu a0,s0,a0
  00388f74  07004054  bnel v0,zero,0x00388f94
  00388f78  6400068e  _lw a2,0x64(s0)
  00388f7c  15000010  b 0x00388fd4
  00388f80  2d100000  _move v0,zero
  00388f84  d2230e0c  jal 0x00388f48
  00388f88  00000000  _nop
  00388f8c  12000010  b 0x00388fd8
  00388f90  2000b07b  _lq s0,0x20(sp)
  00388f94  ffffc624  addiu a2,a2,-0x1
  00388f98  0d00c004  bltz a2,0x00388fd0
  00388f9c  00110600  _sll v0,a2,0x4
  00388fa0  6000038e  lw v1,0x60(s0)
  00388fa4  21104300  addu v0,v0,v1
  00388fa8  0800458c  lw a1,0x8(v0)
  00388fac  0600b154  bnel a1,s1,0x00388fc8
  00388fb0  ffffc624  _addiu a2,a2,-0x1
  00388fb4  0c00448c  lw a0,0xc(v0)
  00388fb8  f2ff8014  bne a0,zero,0x00388f84
  00388fbc  01000224  _li v0,0x1
  00388fc0  05000010  b 0x00388fd8
  00388fc4  2000b07b  _lq s0,0x20(sp)
  00388fc8  f7ffc104  bgez a2,0x00388fa8
  00388fcc  f0ff4224  _addiu v0,v0,-0x10
  00388fd0  01000224  li v0,0x1
  00388fd4  2000b07b  lq s0,0x20(sp)
  00388fd8  1000b17b  lq s1,0x10(sp)
  00388fdc  0000bfdf  ld ra,0x0(sp)
  00388fe0  0800e003  jr ra
  00388fe4  3000bd27  _addiu sp,sp,0x30

# ==== FUN_00388fe8 @ 00388fe8 ====
  00388fe8  d0ffbd27  addiu sp,sp,-0x30
  00388fec  2000b07f  sq s0,0x20(sp)
  00388ff0  1000b17f  sq s1,0x10(sp)
  00388ff4  2d80a000  move s0,a1
  00388ff8  2d888000  move s1,a0
  00388ffc  0000bfff  sd ra,0x0(sp)
  00389000  a4d20b0c  jal 0x002f4a90
  00389004  2d280000  _move a1,zero
  00389008  01001032  andi s0,s0,0x1
  0038900c  04000012  beq s0,zero,0x00389020
  00389010  3d00033c  _lui v1,0x3d
  00389014  e087628c  lw v0,-0x7820(v1)
  00389018  09f84000  jalr v0
  0038901c  2d202002  _move a0,s1
  00389020  2000b07b  lq s0,0x20(sp)
  00389024  1000b17b  lq s1,0x10(sp)
  00389028  0000bfdf  ld ra,0x0(sp)
  0038902c  0800e003  jr ra
  00389030  3000bd27  _addiu sp,sp,0x30

# ==== FUN_00389060 @ 00389060 ====
  00389060  7000838c  lw v1,0x70(a0)
  00389064  10006010  beq v1,zero,0x003890a8
  00389068  2d300000  _move a2,zero
  0038906c  7800828c  lw v0,0x78(a0)
  00389070  2d406000  move t0,v1
  00389074  0800478c  lw a3,0x8(v0)
  00389078  0000e38c  lw v1,0x0(a3)
  0038907c  07006050  beql v1,zero,0x0038909c
  00389080  0100c624  _addiu a2,a2,0x1
  00389084  0000638c  lw v1,0x0(v1)
  00389088  0000a28c  lw v0,0x0(a1)
  0038908c  03006254  bnel v1,v0,0x0038909c
  00389090  0100c624  _addiu a2,a2,0x1
  00389094  0800e003  jr ra
  00389098  2d10c000  _move v0,a2
  0038909c  2b10c800  sltu v0,a2,t0
  003890a0  f5ff4014  bne v0,zero,0x00389078
  003890a4  0400e724  _addiu a3,a3,0x4
  003890a8  7400838c  lw v1,0x74(a0)
  003890ac  11006010  beq v1,zero,0x003890f4
  003890b0  2d300000  _move a2,zero
  003890b4  7c00828c  lw v0,0x7c(a0)
  003890b8  2d406000  move t0,v1
  003890bc  0800478c  lw a3,0x8(v0)
  003890c0  0000e38c  lw v1,0x0(a3)
  003890c4  08006050  beql v1,zero,0x003890e8
  003890c8  0100c624  _addiu a2,a2,0x1
  003890cc  0000638c  lw v1,0x0(v1)
  003890d0  0000a28c  lw v0,0x0(a1)
  003890d4  04006254  bnel v1,v0,0x003890e8
  003890d8  0100c624  _addiu a2,a2,0x1
  003890dc  7000828c  lw v0,0x70(a0)
  003890e0  0800e003  jr ra
  003890e4  2110c200  _addu v0,a2,v0
  003890e8  2b10c800  sltu v0,a2,t0
  003890ec  f4ff4014  bne v0,zero,0x003890c0
  003890f0  0400e724  _addiu a3,a3,0x4
  003890f4  0800e003  jr ra
  003890f8  ffff0224  _li v0,-0x1

# ==== Kaim_CObject_00389100 @ 00389100 ====
  00389100  e0ffbd27  addiu sp,sp,-0x20
  00389104  4100033c  lui v1,0x41
  00389108  1000b07f  sq s0,0x10(sp)
  0038910c  c0eb628c  lw v0,-0x1440(v1)
  00389110  c0eb7024  addiu s0,v1,-0x1440
  00389114  05004014  bne v0,zero,0x0038912c
  00389118  0000bfff  _sd ra,0x0(sp)
  0038911c  4000053c  lui a1,0x40
  00389120  2d200002  move a0,s0
  00389124  62c00d0c  jal 0x00370188
  00389128  0041a524  _addiu a1,a1,0x4100
  0038912c  2d100002  move v0,s0
  00389130  0000bfdf  ld ra,0x0(sp)
  00389134  1000b07b  lq s0,0x10(sp)
  00389138  0800e003  jr ra
  0038913c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389140 @ 00389140 ====
  00389140  000081c4  lwc1 f1,0x0(a0)
  00389144  040082c4  lwc1 f2,0x4(a0)
  00389148  42080146  mul.S f1,f1,f1
  0038914c  080080c4  lwc1 f0,0x8(a0)
  00389150  82100246  mul.S f2,f2,f2
  00389154  02000046  mul.S f0,f0,f0
  00389158  40080246  add.S f1,f1,f2
  0038915c  0800e003  jr ra
  00389160  00080046  _add.S f0,f1,f0

# ==== FUN_00389178 @ 00389178 ====
  00389178  3e00023c  lui v0,0x3e
  0038917c  f0ffbd27  addiu sp,sp,-0x10
  00389180  40004224  addiu v0,v0,0x40
  00389184  0000bfff  sd ra,0x0(sp)
  00389188  0100a530  andi a1,a1,0x1
  0038918c  0500a010  beq a1,zero,0x003891a4
  00389190  000082ac  _sw v0,0x0(a0)
  00389194  3d00033c  lui v1,0x3d
  00389198  e087628c  lw v0,-0x7820(v1)
  0038919c  09f84000  jalr v0
  003891a0  00000000  _nop
  003891a4  0000bfdf  ld ra,0x0(sp)
  003891a8  0800e003  jr ra
  003891ac  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CGraphPoint_003891b0 @ 003891b0 ====
  003891b0  e0ffbd27  addiu sp,sp,-0x20
  003891b4  4a00033c  lui v1,0x4a
  003891b8  1000b07f  sq s0,0x10(sp)
  003891bc  f8a8628c  lw v0,-0x5708(v1)
  003891c0  f8a87024  addiu s0,v1,-0x5708
  003891c4  09004014  bne v0,zero,0x003891ec
  003891c8  0000bfff  _sd ra,0x0(sp)
  003891cc  ec240e0c  jal 0x003893b0
  003891d0  00000000  _nop
  003891d4  4000053c  lui a1,0x40
  003891d8  4a00063c  lui a2,0x4a
  003891dc  1041a524  addiu a1,a1,0x4110
  003891e0  28a9c624  addiu a2,a2,-0x56d8
  003891e4  5ac00d0c  jal 0x00370168
  003891e8  2d200002  _move a0,s0
  003891ec  2d100002  move v0,s0
  003891f0  0000bfdf  ld ra,0x0(sp)
  003891f4  1000b07b  lq s0,0x10(sp)
  003891f8  0800e003  jr ra
  003891fc  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CFleeAgent_00389240 @ 00389240 ====
  00389240  e0ffbd27  addiu sp,sp,-0x20
  00389244  4a00033c  lui v1,0x4a
  00389248  1000b07f  sq s0,0x10(sp)
  0038924c  08a9628c  lw v0,-0x56f8(v1)
  00389250  08a97024  addiu s0,v1,-0x56f8
  00389254  09004014  bne v0,zero,0x0038927c
  00389258  0000bfff  _sd ra,0x0(sp)
  0038925c  a22e0e0c  jal 0x0038ba88
  00389260  00000000  _nop
  00389264  4000053c  lui a1,0x40
  00389268  4a00063c  lui a2,0x4a
  0038926c  2841a524  addiu a1,a1,0x4128
  00389270  48a9c624  addiu a2,a2,-0x56b8
  00389274  5ac00d0c  jal 0x00370168
  00389278  2d200002  _move a0,s0
  0038927c  2d100002  move v0,s0
  00389280  0000bfdf  ld ra,0x0(sp)
  00389284  1000b07b  lq s0,0x10(sp)
  00389288  0800e003  jr ra
  0038928c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_003892e0 @ 003892e0 ====
  003892e0  3e00023c  lui v0,0x3e
  003892e4  f0ffbd27  addiu sp,sp,-0x10
  003892e8  40004224  addiu v0,v0,0x40
  003892ec  0000bfff  sd ra,0x0(sp)
  003892f0  0100a530  andi a1,a1,0x1
  003892f4  0500a010  beq a1,zero,0x0038930c
  003892f8  000082ac  _sw v0,0x0(a0)
  003892fc  3d00033c  lui v1,0x3d
  00389300  e087628c  lw v0,-0x7820(v1)
  00389304  09f84000  jalr v0
  00389308  00000000  _nop
  0038930c  0000bfdf  ld ra,0x0(sp)
  00389310  0800e003  jr ra
  00389314  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_RecursiveFlightTraversal_00389318 @ 00389318 ====
  00389318  e0ffbd27  addiu sp,sp,-0x20
  0038931c  4a00033c  lui v1,0x4a
  00389320  1000b07f  sq s0,0x10(sp)
  00389324  18a9628c  lw v0,-0x56e8(v1)
  00389328  18a97024  addiu s0,v1,-0x56e8
  0038932c  09004014  bne v0,zero,0x00389354
  00389330  0000bfff  _sd ra,0x0(sp)
  00389334  00250e0c  jal 0x00389400
  00389338  00000000  _nop
  0038933c  4000053c  lui a1,0x40
  00389340  4a00063c  lui a2,0x4a
  00389344  4041a524  addiu a1,a1,0x4140
  00389348  38a9c624  addiu a2,a2,-0x56c8
  0038934c  5ac00d0c  jal 0x00370168
  00389350  2d200002  _move a0,s0
  00389354  2d100002  move v0,s0
  00389358  0000bfdf  ld ra,0x0(sp)
  0038935c  1000b07b  lq s0,0x10(sp)
  00389360  0800e003  jr ra
  00389364  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389368 @ 00389368 ====
  00389368  0800e003  jr ra
  0038936c  00000000  _nop

# ==== Kaimt_CMetaClass2ZQ24Kaim6CAgentZPFPQ24Kaim6CBrain_PQ24Kaim6CAgent_00389370 @ 00389370 ====
  00389370  e0ffbd27  addiu sp,sp,-0x20
  00389374  4100033c  lui v1,0x41
  00389378  1000b07f  sq s0,0x10(sp)
  0038937c  c8eb628c  lw v0,-0x1438(v1)
  00389380  c8eb7024  addiu s0,v1,-0x1438
  00389384  05004014  bne v0,zero,0x0038939c
  00389388  0000bfff  _sd ra,0x0(sp)
  0038938c  4000053c  lui a1,0x40
  00389390  2d200002  move a0,s0
  00389394  62c00d0c  jal 0x00370188
  00389398  6841a524  _addiu a1,a1,0x4168
  0038939c  2d100002  move v0,s0
  003893a0  0000bfdf  ld ra,0x0(sp)
  003893a4  1000b07b  lq s0,0x10(sp)
  003893a8  0800e003  jr ra
  003893ac  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CPointWrapper_003893b0 @ 003893b0 ====
  003893b0  e0ffbd27  addiu sp,sp,-0x20
  003893b4  4a00033c  lui v1,0x4a
  003893b8  1000b07f  sq s0,0x10(sp)
  003893bc  28a9628c  lw v0,-0x56d8(v1)
  003893c0  28a97024  addiu s0,v1,-0x56d8
  003893c4  09004014  bne v0,zero,0x003893ec
  003893c8  0000bfff  _sd ra,0x0(sp)
  003893cc  40240e0c  jal 0x00389100
  003893d0  00000000  _nop
  003893d4  4000053c  lui a1,0x40
  003893d8  4100063c  lui a2,0x41
  003893dc  b041a524  addiu a1,a1,0x41b0
  003893e0  c0ebc624  addiu a2,a2,-0x1440
  003893e4  5ac00d0c  jal 0x00370168
  003893e8  2d200002  _move a0,s0
  003893ec  2d100002  move v0,s0
  003893f0  0000bfdf  ld ra,0x0(sp)
  003893f4  1000b07b  lq s0,0x10(sp)
  003893f8  0800e003  jr ra
  003893fc  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CVertexTraversal_00389400 @ 00389400 ====
  00389400  e0ffbd27  addiu sp,sp,-0x20
  00389404  4a00033c  lui v1,0x4a
  00389408  1000b07f  sq s0,0x10(sp)
  0038940c  38a9628c  lw v0,-0x56c8(v1)
  00389410  38a97024  addiu s0,v1,-0x56c8
  00389414  09004014  bne v0,zero,0x0038943c
  00389418  0000bfff  _sd ra,0x0(sp)
  0038941c  40240e0c  jal 0x00389100
  00389420  00000000  _nop
  00389424  4000053c  lui a1,0x40
  00389428  4100063c  lui a2,0x41
  0038942c  c841a524  addiu a1,a1,0x41c8
  00389430  c0ebc624  addiu a2,a2,-0x1440
  00389434  5ac00d0c  jal 0x00370168
  00389438  2d200002  _move a0,s0
  0038943c  2d100002  move v0,s0
  00389440  0000bfdf  ld ra,0x0(sp)
  00389444  1000b07b  lq s0,0x10(sp)
  00389448  0800e003  jr ra
  0038944c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389450 @ 00389450 ====
  00389450  f0ffbd27  addiu sp,sp,-0x10
  00389454  3e00023c  lui v0,0x3e
  00389458  0000bfff  sd ra,0x0(sp)
  0038945c  e02a4224  addiu v0,v0,0x2ae0
  00389460  0100a530  andi a1,a1,0x1
  00389464  0300a010  beq a1,zero,0x00389474
  00389468  100182ac  _sw v0,0x110(a0)
  0038946c  521f040c  jal 0x00107d48
  00389470  00000000  _nop
  00389474  0000bfdf  ld ra,0x0(sp)
  00389478  0800e003  jr ra
  0038947c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CFollowerAgent_00389480 @ 00389480 ====
  00389480  e0ffbd27  addiu sp,sp,-0x20
  00389484  4a00033c  lui v1,0x4a
  00389488  1000b07f  sq s0,0x10(sp)
  0038948c  58a9628c  lw v0,-0x56a8(v1)
  00389490  58a97024  addiu s0,v1,-0x56a8
  00389494  09004014  bne v0,zero,0x003894bc
  00389498  0000bfff  _sd ra,0x0(sp)
  0038949c  a22e0e0c  jal 0x0038ba88
  003894a0  00000000  _nop
  003894a4  4000053c  lui a1,0x40
  003894a8  4a00063c  lui a2,0x4a
  003894ac  6042a524  addiu a1,a1,0x4260
  003894b0  48a9c624  addiu a2,a2,-0x56b8
  003894b4  5ac00d0c  jal 0x00370168
  003894b8  2d200002  _move a0,s0
  003894bc  2d100002  move v0,s0
  003894c0  0000bfdf  ld ra,0x0(sp)
  003894c4  1000b07b  lq s0,0x10(sp)
  003894c8  0800e003  jr ra
  003894cc  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CGotoAgent_00389500 @ 00389500 ====
  00389500  e0ffbd27  addiu sp,sp,-0x20
  00389504  4a00033c  lui v1,0x4a
  00389508  1000b07f  sq s0,0x10(sp)
  0038950c  68a9628c  lw v0,-0x5698(v1)
  00389510  68a97024  addiu s0,v1,-0x5698
  00389514  09004014  bne v0,zero,0x0038953c
  00389518  0000bfff  _sd ra,0x0(sp)
  0038951c  a22e0e0c  jal 0x0038ba88
  00389520  00000000  _nop
  00389524  4000053c  lui a1,0x40
  00389528  4a00063c  lui a2,0x4a
  0038952c  e042a524  addiu a1,a1,0x42e0
  00389530  48a9c624  addiu a2,a2,-0x56b8
  00389534  5ac00d0c  jal 0x00370168
  00389538  2d200002  _move a0,s0
  0038953c  2d100002  move v0,s0
  00389540  0000bfdf  ld ra,0x0(sp)
  00389544  1000b07b  lq s0,0x10(sp)
  00389548  0800e003  jr ra
  0038954c  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CHideAgent_00389578 @ 00389578 ====
  00389578  e0ffbd27  addiu sp,sp,-0x20
  0038957c  4a00033c  lui v1,0x4a
  00389580  1000b07f  sq s0,0x10(sp)
  00389584  78a9628c  lw v0,-0x5688(v1)
  00389588  78a97024  addiu s0,v1,-0x5688
  0038958c  09004014  bne v0,zero,0x003895b4
  00389590  0000bfff  _sd ra,0x0(sp)
  00389594  a22e0e0c  jal 0x0038ba88
  00389598  00000000  _nop
  0038959c  4000053c  lui a1,0x40
  003895a0  4a00063c  lui a2,0x4a
  003895a4  3844a524  addiu a1,a1,0x4438
  003895a8  48a9c624  addiu a2,a2,-0x56b8
  003895ac  5ac00d0c  jal 0x00370168
  003895b0  2d200002  _move a0,s0
  003895b4  2d100002  move v0,s0
  003895b8  0000bfdf  ld ra,0x0(sp)
  003895bc  1000b07b  lq s0,0x10(sp)
  003895c0  0800e003  jr ra
  003895c4  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CPathWayAgent_00389618 @ 00389618 ====
  00389618  e0ffbd27  addiu sp,sp,-0x20
  0038961c  4a00033c  lui v1,0x4a
  00389620  1000b07f  sq s0,0x10(sp)
  00389624  88a9628c  lw v0,-0x5678(v1)
  00389628  88a97024  addiu s0,v1,-0x5678
  0038962c  09004014  bne v0,zero,0x00389654
  00389630  0000bfff  _sd ra,0x0(sp)
  00389634  a22e0e0c  jal 0x0038ba88
  00389638  00000000  _nop
  0038963c  4000053c  lui a1,0x40
  00389640  4a00063c  lui a2,0x4a
  00389644  4045a524  addiu a1,a1,0x4540
  00389648  48a9c624  addiu a2,a2,-0x56b8
  0038964c  5ac00d0c  jal 0x00370168
  00389650  2d200002  _move a0,s0
  00389654  2d100002  move v0,s0
  00389658  0000bfdf  ld ra,0x0(sp)
  0038965c  1000b07b  lq s0,0x10(sp)
  00389660  0800e003  jr ra
  00389664  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CObject_003896a8 @ 003896a8 ====
  003896a8  c0ffbd27  addiu sp,sp,-0x40
  003896ac  4a00023c  lui v0,0x4a
  003896b0  2000b17f  sq s1,0x20(sp)
  003896b4  1000b27f  sq s2,0x10(sp)
  003896b8  98a95124  addiu s1,v0,-0x5668
  003896bc  98a9438c  lw v1,-0x5668(v0)
  003896c0  2d904000  move s2,v0
  003896c4  3000b07f  sq s0,0x30(sp)
  003896c8  0e006014  bne v1,zero,0x00389704
  003896cc  0000bfff  _sd ra,0x0(sp)
  003896d0  4100033c  lui v1,0x41
  003896d4  c0eb628c  lw v0,-0x1440(v1)
  003896d8  05004014  bne v0,zero,0x003896f0
  003896dc  c0eb7024  _addiu s0,v1,-0x1440
  003896e0  4000053c  lui a1,0x40
  003896e4  2d200002  move a0,s0
  003896e8  62c00d0c  jal 0x00370188
  003896ec  4046a524  _addiu a1,a1,0x4640
  003896f0  4000053c  lui a1,0x40
  003896f4  2d202002  move a0,s1
  003896f8  5046a524  addiu a1,a1,0x4650
  003896fc  5ac00d0c  jal 0x00370168
  00389700  2d300002  _move a2,s0
  00389704  98a94226  addiu v0,s2,-0x5668
  00389708  3000b07b  lq s0,0x30(sp)
  0038970c  2000b17b  lq s1,0x20(sp)
  00389710  1000b27b  lq s2,0x10(sp)
  00389714  0000bfdf  ld ra,0x0(sp)
  00389718  0800e003  jr ra
  0038971c  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CShooterAgent_00389720 @ 00389720 ====
  00389720  e0ffbd27  addiu sp,sp,-0x20
  00389724  4a00033c  lui v1,0x4a
  00389728  1000b07f  sq s0,0x10(sp)
  0038972c  a8a9628c  lw v0,-0x5658(v1)
  00389730  a8a97024  addiu s0,v1,-0x5658
  00389734  09004014  bne v0,zero,0x0038975c
  00389738  0000bfff  _sd ra,0x0(sp)
  0038973c  a22e0e0c  jal 0x0038ba88
  00389740  00000000  _nop
  00389744  4000053c  lui a1,0x40
  00389748  4a00063c  lui a2,0x4a
  0038974c  8046a524  addiu a1,a1,0x4680
  00389750  48a9c624  addiu a2,a2,-0x56b8
  00389754  5ac00d0c  jal 0x00370168
  00389758  2d200002  _move a0,s0
  0038975c  2d100002  move v0,s0
  00389760  0000bfdf  ld ra,0x0(sp)
  00389764  1000b07b  lq s0,0x10(sp)
  00389768  0800e003  jr ra
  0038976c  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CWanderAgent_003897c8 @ 003897c8 ====
  003897c8  e0ffbd27  addiu sp,sp,-0x20
  003897cc  4a00033c  lui v1,0x4a
  003897d0  1000b07f  sq s0,0x10(sp)
  003897d4  b8a9628c  lw v0,-0x5648(v1)
  003897d8  b8a97024  addiu s0,v1,-0x5648
  003897dc  09004014  bne v0,zero,0x00389804
  003897e0  0000bfff  _sd ra,0x0(sp)
  003897e4  a22e0e0c  jal 0x0038ba88
  003897e8  00000000  _nop
  003897ec  4000053c  lui a1,0x40
  003897f0  4a00063c  lui a2,0x4a
  003897f4  3047a524  addiu a1,a1,0x4730
  003897f8  48a9c624  addiu a2,a2,-0x56b8
  003897fc  5ac00d0c  jal 0x00370168
  00389800  2d200002  _move a0,s0
  00389804  2d100002  move v0,s0
  00389808  0000bfdf  ld ra,0x0(sp)
  0038980c  1000b07b  lq s0,0x10(sp)
  00389810  0800e003  jr ra
  00389814  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CActionAcceleration_00389840 @ 00389840 ====
  00389840  e0ffbd27  addiu sp,sp,-0x20
  00389844  4a00033c  lui v1,0x4a
  00389848  1000b07f  sq s0,0x10(sp)
  0038984c  c8a9628c  lw v0,-0x5638(v1)
  00389850  c8a97024  addiu s0,v1,-0x5638
  00389854  09004014  bne v0,zero,0x0038987c
  00389858  0000bfff  _sd ra,0x0(sp)
  0038985c  42260e0c  jal 0x00389908
  00389860  00000000  _nop
  00389864  4000053c  lui a1,0x40
  00389868  4a00063c  lui a2,0x4a
  0038986c  d047a524  addiu a1,a1,0x47d0
  00389870  d8a9c624  addiu a2,a2,-0x5628
  00389874  5ac00d0c  jal 0x00370168
  00389878  2d200002  _move a0,s0
  0038987c  2d100002  move v0,s0
  00389880  0000bfdf  ld ra,0x0(sp)
  00389884  1000b07b  lq s0,0x10(sp)
  00389888  0800e003  jr ra
  0038988c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_003898a8 @ 003898a8 ====
  003898a8  3e00023c  lui v0,0x3e
  003898ac  f0ffbd27  addiu sp,sp,-0x10
  003898b0  40004224  addiu v0,v0,0x40
  003898b4  0000bfff  sd ra,0x0(sp)
  003898b8  0100a530  andi a1,a1,0x1
  003898bc  0500a010  beq a1,zero,0x003898d4
  003898c0  000082ac  _sw v0,0x0(a0)
  003898c4  3d00033c  lui v1,0x3d
  003898c8  e087628c  lw v0,-0x7820(v1)
  003898cc  09f84000  jalr v0
  003898d0  00000000  _nop
  003898d4  0000bfdf  ld ra,0x0(sp)
  003898d8  0800e003  jr ra
  003898dc  1000bd27  _addiu sp,sp,0x10

# ==== FUN_00389908 @ 00389908 ====
  00389908  c0ffbd27  addiu sp,sp,-0x40
  0038990c  4a00023c  lui v0,0x4a
  00389910  2000b17f  sq s1,0x20(sp)
  00389914  1000b27f  sq s2,0x10(sp)
  00389918  d8a95124  addiu s1,v0,-0x5628
  0038991c  d8a9438c  lw v1,-0x5628(v0)
  00389920  2d904000  move s2,v0
  00389924  3000b07f  sq s0,0x30(sp)
  00389928  0e006014  bne v1,zero,0x00389964
  0038992c  0000bfff  _sd ra,0x0(sp)
  00389930  4100033c  lui v1,0x41
  00389934  c0eb628c  lw v0,-0x1440(v1)
  00389938  05004014  bne v0,zero,0x00389950
  0038993c  c0eb7024  _addiu s0,v1,-0x1440
  00389940  4000053c  lui a1,0x40
  00389944  2d200002  move a0,s0
  00389948  62c00d0c  jal 0x00370188
  0038994c  f047a524  _addiu a1,a1,0x47f0
  00389950  4000053c  lui a1,0x40
  00389954  2d202002  move a0,s1
  00389958  0048a524  addiu a1,a1,0x4800
  0038995c  5ac00d0c  jal 0x00370168
  00389960  2d300002  _move a2,s0
  00389964  d8a94226  addiu v0,s2,-0x5628
  00389968  3000b07b  lq s0,0x30(sp)
  0038996c  2000b17b  lq s1,0x20(sp)
  00389970  1000b27b  lq s2,0x10(sp)
  00389974  0000bfdf  ld ra,0x0(sp)
  00389978  0800e003  jr ra
  0038997c  4000bd27  _addiu sp,sp,0x40

# ==== Kaimt_CMetaClass2ZQ24Kaim16CActionAttributeZPFv_PQ24Kaim16CActionAttribute_00389980 @ 00389980 ====
  00389980  e0ffbd27  addiu sp,sp,-0x20
  00389984  4100033c  lui v1,0x41
  00389988  1000b07f  sq s0,0x10(sp)
  0038998c  d0eb628c  lw v0,-0x1430(v1)
  00389990  d0eb7024  addiu s0,v1,-0x1430
  00389994  05004014  bne v0,zero,0x003899ac
  00389998  0000bfff  _sd ra,0x0(sp)
  0038999c  4000053c  lui a1,0x40
  003899a0  2d200002  move a0,s0
  003899a4  62c00d0c  jal 0x00370188
  003899a8  2048a524  _addiu a1,a1,0x4820
  003899ac  2d100002  move v0,s0
  003899b0  0000bfdf  ld ra,0x0(sp)
  003899b4  1000b07b  lq s0,0x10(sp)
  003899b8  0800e003  jr ra
  003899bc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_003899c0 @ 003899c0 ====
  003899c0  f0ffbd27  addiu sp,sp,-0x10
  003899c4  3e00023c  lui v0,0x3e
  003899c8  0000bfff  sd ra,0x0(sp)
  003899cc  383d4224  addiu v0,v0,0x3d38
  003899d0  0100a530  andi a1,a1,0x1
  003899d4  0300a010  beq a1,zero,0x003899e4
  003899d8  100182ac  _sw v0,0x110(a0)
  003899dc  521f040c  jal 0x00107d48
  003899e0  00000000  _nop
  003899e4  0000bfdf  ld ra,0x0(sp)
  003899e8  0800e003  jr ra
  003899ec  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionCrouch_003899f0 @ 003899f0 ====
  003899f0  e0ffbd27  addiu sp,sp,-0x20
  003899f4  4a00033c  lui v1,0x4a
  003899f8  1000b07f  sq s0,0x10(sp)
  003899fc  e8a9628c  lw v0,-0x5618(v1)
  00389a00  e8a97024  addiu s0,v1,-0x5618
  00389a04  09004014  bne v0,zero,0x00389a2c
  00389a08  0000bfff  _sd ra,0x0(sp)
  00389a0c  42260e0c  jal 0x00389908
  00389a10  00000000  _nop
  00389a14  4000053c  lui a1,0x40
  00389a18  4a00063c  lui a2,0x4a
  00389a1c  9048a524  addiu a1,a1,0x4890
  00389a20  d8a9c624  addiu a2,a2,-0x5628
  00389a24  5ac00d0c  jal 0x00370168
  00389a28  2d200002  _move a0,s0
  00389a2c  2d100002  move v0,s0
  00389a30  0000bfdf  ld ra,0x0(sp)
  00389a34  1000b07b  lq s0,0x10(sp)
  00389a38  0800e003  jr ra
  00389a3c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389a58 @ 00389a58 ====
  00389a58  3e00023c  lui v0,0x3e
  00389a5c  f0ffbd27  addiu sp,sp,-0x10
  00389a60  40004224  addiu v0,v0,0x40
  00389a64  0000bfff  sd ra,0x0(sp)
  00389a68  0100a530  andi a1,a1,0x1
  00389a6c  0500a010  beq a1,zero,0x00389a84
  00389a70  000082ac  _sw v0,0x0(a0)
  00389a74  3d00033c  lui v1,0x3d
  00389a78  e087628c  lw v0,-0x7820(v1)
  00389a7c  09f84000  jalr v0
  00389a80  00000000  _nop
  00389a84  0000bfdf  ld ra,0x0(sp)
  00389a88  0800e003  jr ra
  00389a8c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionJump_00389ab8 @ 00389ab8 ====
  00389ab8  e0ffbd27  addiu sp,sp,-0x20
  00389abc  4a00033c  lui v1,0x4a
  00389ac0  1000b07f  sq s0,0x10(sp)
  00389ac4  f8a9628c  lw v0,-0x5608(v1)
  00389ac8  f8a97024  addiu s0,v1,-0x5608
  00389acc  09004014  bne v0,zero,0x00389af4
  00389ad0  0000bfff  _sd ra,0x0(sp)
  00389ad4  42260e0c  jal 0x00389908
  00389ad8  00000000  _nop
  00389adc  4000053c  lui a1,0x40
  00389ae0  4a00063c  lui a2,0x4a
  00389ae4  4849a524  addiu a1,a1,0x4948
  00389ae8  d8a9c624  addiu a2,a2,-0x5628
  00389aec  5ac00d0c  jal 0x00370168
  00389af0  2d200002  _move a0,s0
  00389af4  2d100002  move v0,s0
  00389af8  0000bfdf  ld ra,0x0(sp)
  00389afc  1000b07b  lq s0,0x10(sp)
  00389b00  0800e003  jr ra
  00389b04  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389b20 @ 00389b20 ====
  00389b20  3e00023c  lui v0,0x3e
  00389b24  f0ffbd27  addiu sp,sp,-0x10
  00389b28  40004224  addiu v0,v0,0x40
  00389b2c  0000bfff  sd ra,0x0(sp)
  00389b30  0100a530  andi a1,a1,0x1
  00389b34  0500a010  beq a1,zero,0x00389b4c
  00389b38  000082ac  _sw v0,0x0(a0)
  00389b3c  3d00033c  lui v1,0x3d
  00389b40  e087628c  lw v0,-0x7820(v1)
  00389b44  09f84000  jalr v0
  00389b48  00000000  _nop
  00389b4c  0000bfdf  ld ra,0x0(sp)
  00389b50  0800e003  jr ra
  00389b54  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionRotate_00389b80 @ 00389b80 ====
  00389b80  e0ffbd27  addiu sp,sp,-0x20
  00389b84  4a00033c  lui v1,0x4a
  00389b88  1000b07f  sq s0,0x10(sp)
  00389b8c  08aa628c  lw v0,-0x55f8(v1)
  00389b90  08aa7024  addiu s0,v1,-0x55f8
  00389b94  09004014  bne v0,zero,0x00389bbc
  00389b98  0000bfff  _sd ra,0x0(sp)
  00389b9c  42260e0c  jal 0x00389908
  00389ba0  00000000  _nop
  00389ba4  4000053c  lui a1,0x40
  00389ba8  4a00063c  lui a2,0x4a
  00389bac  004aa524  addiu a1,a1,0x4a00
  00389bb0  d8a9c624  addiu a2,a2,-0x5628
  00389bb4  5ac00d0c  jal 0x00370168
  00389bb8  2d200002  _move a0,s0
  00389bbc  2d100002  move v0,s0
  00389bc0  0000bfdf  ld ra,0x0(sp)
  00389bc4  1000b07b  lq s0,0x10(sp)
  00389bc8  0800e003  jr ra
  00389bcc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389be8 @ 00389be8 ====
  00389be8  3e00023c  lui v0,0x3e
  00389bec  f0ffbd27  addiu sp,sp,-0x10
  00389bf0  40004224  addiu v0,v0,0x40
  00389bf4  0000bfff  sd ra,0x0(sp)
  00389bf8  0100a530  andi a1,a1,0x1
  00389bfc  0500a010  beq a1,zero,0x00389c14
  00389c00  000082ac  _sw v0,0x0(a0)
  00389c04  3d00033c  lui v1,0x3d
  00389c08  e087628c  lw v0,-0x7820(v1)
  00389c0c  09f84000  jalr v0
  00389c10  00000000  _nop
  00389c14  0000bfdf  ld ra,0x0(sp)
  00389c18  0800e003  jr ra
  00389c1c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionShoot_00389c48 @ 00389c48 ====
  00389c48  e0ffbd27  addiu sp,sp,-0x20
  00389c4c  4a00033c  lui v1,0x4a
  00389c50  1000b07f  sq s0,0x10(sp)
  00389c54  18aa628c  lw v0,-0x55e8(v1)
  00389c58  18aa7024  addiu s0,v1,-0x55e8
  00389c5c  09004014  bne v0,zero,0x00389c84
  00389c60  0000bfff  _sd ra,0x0(sp)
  00389c64  42260e0c  jal 0x00389908
  00389c68  00000000  _nop
  00389c6c  4000053c  lui a1,0x40
  00389c70  4a00063c  lui a2,0x4a
  00389c74  b84aa524  addiu a1,a1,0x4ab8
  00389c78  d8a9c624  addiu a2,a2,-0x5628
  00389c7c  5ac00d0c  jal 0x00370168
  00389c80  2d200002  _move a0,s0
  00389c84  2d100002  move v0,s0
  00389c88  0000bfdf  ld ra,0x0(sp)
  00389c8c  1000b07b  lq s0,0x10(sp)
  00389c90  0800e003  jr ra
  00389c94  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389cb0 @ 00389cb0 ====
  00389cb0  3e00023c  lui v0,0x3e
  00389cb4  f0ffbd27  addiu sp,sp,-0x10
  00389cb8  40004224  addiu v0,v0,0x40
  00389cbc  0000bfff  sd ra,0x0(sp)
  00389cc0  0100a530  andi a1,a1,0x1
  00389cc4  0500a010  beq a1,zero,0x00389cdc
  00389cc8  000082ac  _sw v0,0x0(a0)
  00389ccc  3d00033c  lui v1,0x3d
  00389cd0  e087628c  lw v0,-0x7820(v1)
  00389cd4  09f84000  jalr v0
  00389cd8  00000000  _nop
  00389cdc  0000bfdf  ld ra,0x0(sp)
  00389ce0  0800e003  jr ra
  00389ce4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionSpeed_00389d40 @ 00389d40 ====
  00389d40  e0ffbd27  addiu sp,sp,-0x20
  00389d44  4a00033c  lui v1,0x4a
  00389d48  1000b07f  sq s0,0x10(sp)
  00389d4c  28aa628c  lw v0,-0x55d8(v1)
  00389d50  28aa7024  addiu s0,v1,-0x55d8
  00389d54  09004014  bne v0,zero,0x00389d7c
  00389d58  0000bfff  _sd ra,0x0(sp)
  00389d5c  42260e0c  jal 0x00389908
  00389d60  00000000  _nop
  00389d64  4000053c  lui a1,0x40
  00389d68  4a00063c  lui a2,0x4a
  00389d6c  704ba524  addiu a1,a1,0x4b70
  00389d70  d8a9c624  addiu a2,a2,-0x5628
  00389d74  5ac00d0c  jal 0x00370168
  00389d78  2d200002  _move a0,s0
  00389d7c  2d100002  move v0,s0
  00389d80  0000bfdf  ld ra,0x0(sp)
  00389d84  1000b07b  lq s0,0x10(sp)
  00389d88  0800e003  jr ra
  00389d8c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389da8 @ 00389da8 ====
  00389da8  3e00023c  lui v0,0x3e
  00389dac  f0ffbd27  addiu sp,sp,-0x10
  00389db0  40004224  addiu v0,v0,0x40
  00389db4  0000bfff  sd ra,0x0(sp)
  00389db8  0100a530  andi a1,a1,0x1
  00389dbc  0500a010  beq a1,zero,0x00389dd4
  00389dc0  000082ac  _sw v0,0x0(a0)
  00389dc4  3d00033c  lui v1,0x3d
  00389dc8  e087628c  lw v0,-0x7820(v1)
  00389dcc  09f84000  jalr v0
  00389dd0  00000000  _nop
  00389dd4  0000bfdf  ld ra,0x0(sp)
  00389dd8  0800e003  jr ra
  00389ddc  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionSteering_00389e08 @ 00389e08 ====
  00389e08  e0ffbd27  addiu sp,sp,-0x20
  00389e0c  4a00033c  lui v1,0x4a
  00389e10  1000b07f  sq s0,0x10(sp)
  00389e14  38aa628c  lw v0,-0x55c8(v1)
  00389e18  38aa7024  addiu s0,v1,-0x55c8
  00389e1c  09004014  bne v0,zero,0x00389e44
  00389e20  0000bfff  _sd ra,0x0(sp)
  00389e24  42260e0c  jal 0x00389908
  00389e28  00000000  _nop
  00389e2c  4000053c  lui a1,0x40
  00389e30  4a00063c  lui a2,0x4a
  00389e34  284ca524  addiu a1,a1,0x4c28
  00389e38  d8a9c624  addiu a2,a2,-0x5628
  00389e3c  5ac00d0c  jal 0x00370168
  00389e40  2d200002  _move a0,s0
  00389e44  2d100002  move v0,s0
  00389e48  0000bfdf  ld ra,0x0(sp)
  00389e4c  1000b07b  lq s0,0x10(sp)
  00389e50  0800e003  jr ra
  00389e54  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389e70 @ 00389e70 ====
  00389e70  3e00023c  lui v0,0x3e
  00389e74  f0ffbd27  addiu sp,sp,-0x10
  00389e78  40004224  addiu v0,v0,0x40
  00389e7c  0000bfff  sd ra,0x0(sp)
  00389e80  0100a530  andi a1,a1,0x1
  00389e84  0500a010  beq a1,zero,0x00389e9c
  00389e88  000082ac  _sw v0,0x0(a0)
  00389e8c  3d00033c  lui v1,0x3d
  00389e90  e087628c  lw v0,-0x7820(v1)
  00389e94  09f84000  jalr v0
  00389e98  00000000  _nop
  00389e9c  0000bfdf  ld ra,0x0(sp)
  00389ea0  0800e003  jr ra
  00389ea4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityCanFly_00389ed0 @ 00389ed0 ====
  00389ed0  e0ffbd27  addiu sp,sp,-0x20
  00389ed4  4a00033c  lui v1,0x4a
  00389ed8  1000b07f  sq s0,0x10(sp)
  00389edc  48aa628c  lw v0,-0x55b8(v1)
  00389ee0  48aa7024  addiu s0,v1,-0x55b8
  00389ee4  09004014  bne v0,zero,0x00389f0c
  00389ee8  0000bfff  _sd ra,0x0(sp)
  00389eec  e4270e0c  jal 0x00389f90
  00389ef0  00000000  _nop
  00389ef4  4000053c  lui a1,0x40
  00389ef8  4a00063c  lui a2,0x4a
  00389efc  f84ca524  addiu a1,a1,0x4cf8
  00389f00  58aac624  addiu a2,a2,-0x55a8
  00389f04  5ac00d0c  jal 0x00370168
  00389f08  2d200002  _move a0,s0
  00389f0c  2d100002  move v0,s0
  00389f10  0000bfdf  ld ra,0x0(sp)
  00389f14  1000b07b  lq s0,0x10(sp)
  00389f18  0800e003  jr ra
  00389f1c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_00389f38 @ 00389f38 ====
  00389f38  3e00023c  lui v0,0x3e
  00389f3c  f0ffbd27  addiu sp,sp,-0x10
  00389f40  40004224  addiu v0,v0,0x40
  00389f44  0000bfff  sd ra,0x0(sp)
  00389f48  0100a530  andi a1,a1,0x1
  00389f4c  0500a010  beq a1,zero,0x00389f64
  00389f50  000082ac  _sw v0,0x0(a0)
  00389f54  3d00033c  lui v1,0x3d
  00389f58  e087628c  lw v0,-0x7820(v1)
  00389f5c  09f84000  jalr v0
  00389f60  00000000  _nop
  00389f64  0000bfdf  ld ra,0x0(sp)
  00389f68  0800e003  jr ra
  00389f6c  1000bd27  _addiu sp,sp,0x10

# ==== FUN_00389f90 @ 00389f90 ====
  00389f90  c0ffbd27  addiu sp,sp,-0x40
  00389f94  4a00023c  lui v0,0x4a
  00389f98  2000b17f  sq s1,0x20(sp)
  00389f9c  1000b27f  sq s2,0x10(sp)
  00389fa0  58aa5124  addiu s1,v0,-0x55a8
  00389fa4  58aa438c  lw v1,-0x55a8(v0)
  00389fa8  2d904000  move s2,v0
  00389fac  3000b07f  sq s0,0x30(sp)
  00389fb0  0e006014  bne v1,zero,0x00389fec
  00389fb4  0000bfff  _sd ra,0x0(sp)
  00389fb8  4100033c  lui v1,0x41
  00389fbc  c0eb628c  lw v0,-0x1440(v1)
  00389fc0  05004014  bne v0,zero,0x00389fd8
  00389fc4  c0eb7024  _addiu s0,v1,-0x1440
  00389fc8  4000053c  lui a1,0x40
  00389fcc  2d200002  move a0,s0
  00389fd0  62c00d0c  jal 0x00370188
  00389fd4  104da524  _addiu a1,a1,0x4d10
  00389fd8  4000053c  lui a1,0x40
  00389fdc  2d202002  move a0,s1
  00389fe0  204da524  addiu a1,a1,0x4d20
  00389fe4  5ac00d0c  jal 0x00370168
  00389fe8  2d300002  _move a2,s0
  00389fec  58aa4226  addiu v0,s2,-0x55a8
  00389ff0  3000b07b  lq s0,0x30(sp)
  00389ff4  2000b17b  lq s1,0x20(sp)
  00389ff8  1000b27b  lq s2,0x10(sp)
  00389ffc  0000bfdf  ld ra,0x0(sp)
  0038a000  0800e003  jr ra
  0038a004  4000bd27  _addiu sp,sp,0x40

# ==== Kaimt_CMetaClass2ZQ24Kaim16CEntityAttributeZPFv_PQ24Kaim16CEntityAttribute_0038a008 @ 0038a008 ====
  0038a008  e0ffbd27  addiu sp,sp,-0x20
  0038a00c  4100033c  lui v1,0x41
  0038a010  1000b07f  sq s0,0x10(sp)
  0038a014  d8eb628c  lw v0,-0x1428(v1)
  0038a018  d8eb7024  addiu s0,v1,-0x1428
  0038a01c  05004014  bne v0,zero,0x0038a034
  0038a020  0000bfff  _sd ra,0x0(sp)
  0038a024  4000053c  lui a1,0x40
  0038a028  2d200002  move a0,s0
  0038a02c  62c00d0c  jal 0x00370188
  0038a030  404da524  _addiu a1,a1,0x4d40
  0038a034  2d100002  move v0,s0
  0038a038  0000bfdf  ld ra,0x0(sp)
  0038a03c  1000b07b  lq s0,0x10(sp)
  0038a040  0800e003  jr ra
  0038a044  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a048 @ 0038a048 ====
  0038a048  f0ffbd27  addiu sp,sp,-0x10
  0038a04c  3e00023c  lui v0,0x3e
  0038a050  0000bfff  sd ra,0x0(sp)
  0038a054  28474224  addiu v0,v0,0x4728
  0038a058  0100a530  andi a1,a1,0x1
  0038a05c  0300a010  beq a1,zero,0x0038a06c
  0038a060  100182ac  _sw v0,0x110(a0)
  0038a064  521f040c  jal 0x00107d48
  0038a068  00000000  _nop
  0038a06c  0000bfdf  ld ra,0x0(sp)
  0038a070  0800e003  jr ra
  0038a074  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityEyePosition_0038a078 @ 0038a078 ====
  0038a078  e0ffbd27  addiu sp,sp,-0x20
  0038a07c  4a00033c  lui v1,0x4a
  0038a080  1000b07f  sq s0,0x10(sp)
  0038a084  68aa628c  lw v0,-0x5598(v1)
  0038a088  68aa7024  addiu s0,v1,-0x5598
  0038a08c  09004014  bne v0,zero,0x0038a0b4
  0038a090  0000bfff  _sd ra,0x0(sp)
  0038a094  e4270e0c  jal 0x00389f90
  0038a098  00000000  _nop
  0038a09c  4000053c  lui a1,0x40
  0038a0a0  4a00063c  lui a2,0x4a
  0038a0a4  b84da524  addiu a1,a1,0x4db8
  0038a0a8  58aac624  addiu a2,a2,-0x55a8
  0038a0ac  5ac00d0c  jal 0x00370168
  0038a0b0  2d200002  _move a0,s0
  0038a0b4  2d100002  move v0,s0
  0038a0b8  0000bfdf  ld ra,0x0(sp)
  0038a0bc  1000b07b  lq s0,0x10(sp)
  0038a0c0  0800e003  jr ra
  0038a0c4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a0e0 @ 0038a0e0 ====
  0038a0e0  3e00023c  lui v0,0x3e
  0038a0e4  f0ffbd27  addiu sp,sp,-0x10
  0038a0e8  40004224  addiu v0,v0,0x40
  0038a0ec  0000bfff  sd ra,0x0(sp)
  0038a0f0  0100a530  andi a1,a1,0x1
  0038a0f4  0500a010  beq a1,zero,0x0038a10c
  0038a0f8  000082ac  _sw v0,0x0(a0)
  0038a0fc  3d00033c  lui v1,0x3d
  0038a100  e087628c  lw v0,-0x7820(v1)
  0038a104  09f84000  jalr v0
  0038a108  00000000  _nop
  0038a10c  0000bfdf  ld ra,0x0(sp)
  0038a110  0800e003  jr ra
  0038a114  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityGunPosition_0038a170 @ 0038a170 ====
  0038a170  e0ffbd27  addiu sp,sp,-0x20
  0038a174  4a00033c  lui v1,0x4a
  0038a178  1000b07f  sq s0,0x10(sp)
  0038a17c  78aa628c  lw v0,-0x5588(v1)
  0038a180  78aa7024  addiu s0,v1,-0x5588
  0038a184  09004014  bne v0,zero,0x0038a1ac
  0038a188  0000bfff  _sd ra,0x0(sp)
  0038a18c  e4270e0c  jal 0x00389f90
  0038a190  00000000  _nop
  0038a194  4000053c  lui a1,0x40
  0038a198  4a00063c  lui a2,0x4a
  0038a19c  804ea524  addiu a1,a1,0x4e80
  0038a1a0  58aac624  addiu a2,a2,-0x55a8
  0038a1a4  5ac00d0c  jal 0x00370168
  0038a1a8  2d200002  _move a0,s0
  0038a1ac  2d100002  move v0,s0
  0038a1b0  0000bfdf  ld ra,0x0(sp)
  0038a1b4  1000b07b  lq s0,0x10(sp)
  0038a1b8  0800e003  jr ra
  0038a1bc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a1d8 @ 0038a1d8 ====
  0038a1d8  3e00023c  lui v0,0x3e
  0038a1dc  f0ffbd27  addiu sp,sp,-0x10
  0038a1e0  40004224  addiu v0,v0,0x40
  0038a1e4  0000bfff  sd ra,0x0(sp)
  0038a1e8  0100a530  andi a1,a1,0x1
  0038a1ec  0500a010  beq a1,zero,0x0038a204
  0038a1f0  000082ac  _sw v0,0x0(a0)
  0038a1f4  3d00033c  lui v1,0x3d
  0038a1f8  e087628c  lw v0,-0x7820(v1)
  0038a1fc  09f84000  jalr v0
  0038a200  00000000  _nop
  0038a204  0000bfdf  ld ra,0x0(sp)
  0038a208  0800e003  jr ra
  0038a20c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityHeadDirection_0038a268 @ 0038a268 ====
  0038a268  e0ffbd27  addiu sp,sp,-0x20
  0038a26c  4a00033c  lui v1,0x4a
  0038a270  1000b07f  sq s0,0x10(sp)
  0038a274  88aa628c  lw v0,-0x5578(v1)
  0038a278  88aa7024  addiu s0,v1,-0x5578
  0038a27c  09004014  bne v0,zero,0x0038a2a4
  0038a280  0000bfff  _sd ra,0x0(sp)
  0038a284  e4270e0c  jal 0x00389f90
  0038a288  00000000  _nop
  0038a28c  4000053c  lui a1,0x40
  0038a290  4a00063c  lui a2,0x4a
  0038a294  484fa524  addiu a1,a1,0x4f48
  0038a298  58aac624  addiu a2,a2,-0x55a8
  0038a29c  5ac00d0c  jal 0x00370168
  0038a2a0  2d200002  _move a0,s0
  0038a2a4  2d100002  move v0,s0
  0038a2a8  0000bfdf  ld ra,0x0(sp)
  0038a2ac  1000b07b  lq s0,0x10(sp)
  0038a2b0  0800e003  jr ra
  0038a2b4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a2d0 @ 0038a2d0 ====
  0038a2d0  3e00023c  lui v0,0x3e
  0038a2d4  f0ffbd27  addiu sp,sp,-0x10
  0038a2d8  40004224  addiu v0,v0,0x40
  0038a2dc  0000bfff  sd ra,0x0(sp)
  0038a2e0  0100a530  andi a1,a1,0x1
  0038a2e4  0500a010  beq a1,zero,0x0038a2fc
  0038a2e8  000082ac  _sw v0,0x0(a0)
  0038a2ec  3d00033c  lui v1,0x3d
  0038a2f0  e087628c  lw v0,-0x7820(v1)
  0038a2f4  09f84000  jalr v0
  0038a2f8  00000000  _nop
  0038a2fc  0000bfdf  ld ra,0x0(sp)
  0038a300  0800e003  jr ra
  0038a304  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityHearingAcuteness_0038a360 @ 0038a360 ====
  0038a360  e0ffbd27  addiu sp,sp,-0x20
  0038a364  4a00033c  lui v1,0x4a
  0038a368  1000b07f  sq s0,0x10(sp)
  0038a36c  98aa628c  lw v0,-0x5568(v1)
  0038a370  98aa7024  addiu s0,v1,-0x5568
  0038a374  09004014  bne v0,zero,0x0038a39c
  0038a378  0000bfff  _sd ra,0x0(sp)
  0038a37c  e4270e0c  jal 0x00389f90
  0038a380  00000000  _nop
  0038a384  4000053c  lui a1,0x40
  0038a388  4a00063c  lui a2,0x4a
  0038a38c  1050a524  addiu a1,a1,0x5010
  0038a390  58aac624  addiu a2,a2,-0x55a8
  0038a394  5ac00d0c  jal 0x00370168
  0038a398  2d200002  _move a0,s0
  0038a39c  2d100002  move v0,s0
  0038a3a0  0000bfdf  ld ra,0x0(sp)
  0038a3a4  1000b07b  lq s0,0x10(sp)
  0038a3a8  0800e003  jr ra
  0038a3ac  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a3c8 @ 0038a3c8 ====
  0038a3c8  3e00023c  lui v0,0x3e
  0038a3cc  f0ffbd27  addiu sp,sp,-0x10
  0038a3d0  40004224  addiu v0,v0,0x40
  0038a3d4  0000bfff  sd ra,0x0(sp)
  0038a3d8  0100a530  andi a1,a1,0x1
  0038a3dc  0500a010  beq a1,zero,0x0038a3f4
  0038a3e0  000082ac  _sw v0,0x0(a0)
  0038a3e4  3d00033c  lui v1,0x3d
  0038a3e8  e087628c  lw v0,-0x7820(v1)
  0038a3ec  09f84000  jalr v0
  0038a3f0  00000000  _nop
  0038a3f4  0000bfdf  ld ra,0x0(sp)
  0038a3f8  0800e003  jr ra
  0038a3fc  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityHeight_0038a440 @ 0038a440 ====
  0038a440  e0ffbd27  addiu sp,sp,-0x20
  0038a444  4a00033c  lui v1,0x4a
  0038a448  1000b07f  sq s0,0x10(sp)
  0038a44c  a8aa628c  lw v0,-0x5558(v1)
  0038a450  a8aa7024  addiu s0,v1,-0x5558
  0038a454  09004014  bne v0,zero,0x0038a47c
  0038a458  0000bfff  _sd ra,0x0(sp)
  0038a45c  e4270e0c  jal 0x00389f90
  0038a460  00000000  _nop
  0038a464  4000053c  lui a1,0x40
  0038a468  4a00063c  lui a2,0x4a
  0038a46c  d850a524  addiu a1,a1,0x50d8
  0038a470  58aac624  addiu a2,a2,-0x55a8
  0038a474  5ac00d0c  jal 0x00370168
  0038a478  2d200002  _move a0,s0
  0038a47c  2d100002  move v0,s0
  0038a480  0000bfdf  ld ra,0x0(sp)
  0038a484  1000b07b  lq s0,0x10(sp)
  0038a488  0800e003  jr ra
  0038a48c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a4d0 @ 0038a4d0 ====
  0038a4d0  3e00023c  lui v0,0x3e
  0038a4d4  f0ffbd27  addiu sp,sp,-0x10
  0038a4d8  40004224  addiu v0,v0,0x40
  0038a4dc  0000bfff  sd ra,0x0(sp)
  0038a4e0  0100a530  andi a1,a1,0x1
  0038a4e4  0500a010  beq a1,zero,0x0038a4fc
  0038a4e8  000082ac  _sw v0,0x0(a0)
  0038a4ec  3d00033c  lui v1,0x3d
  0038a4f0  e087628c  lw v0,-0x7820(v1)
  0038a4f4  09f84000  jalr v0
  0038a4f8  00000000  _nop
  0038a4fc  0000bfdf  ld ra,0x0(sp)
  0038a500  0800e003  jr ra
  0038a504  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityKneePosition_0038a528 @ 0038a528 ====
  0038a528  e0ffbd27  addiu sp,sp,-0x20
  0038a52c  4a00033c  lui v1,0x4a
  0038a530  1000b07f  sq s0,0x10(sp)
  0038a534  b8aa628c  lw v0,-0x5548(v1)
  0038a538  b8aa7024  addiu s0,v1,-0x5548
  0038a53c  09004014  bne v0,zero,0x0038a564
  0038a540  0000bfff  _sd ra,0x0(sp)
  0038a544  e4270e0c  jal 0x00389f90
  0038a548  00000000  _nop
  0038a54c  4000053c  lui a1,0x40
  0038a550  4a00063c  lui a2,0x4a
  0038a554  9851a524  addiu a1,a1,0x5198
  0038a558  58aac624  addiu a2,a2,-0x55a8
  0038a55c  5ac00d0c  jal 0x00370168
  0038a560  2d200002  _move a0,s0
  0038a564  2d100002  move v0,s0
  0038a568  0000bfdf  ld ra,0x0(sp)
  0038a56c  1000b07b  lq s0,0x10(sp)
  0038a570  0800e003  jr ra
  0038a574  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a590 @ 0038a590 ====
  0038a590  3e00023c  lui v0,0x3e
  0038a594  f0ffbd27  addiu sp,sp,-0x10
  0038a598  40004224  addiu v0,v0,0x40
  0038a59c  0000bfff  sd ra,0x0(sp)
  0038a5a0  0100a530  andi a1,a1,0x1
  0038a5a4  0500a010  beq a1,zero,0x0038a5bc
  0038a5a8  000082ac  _sw v0,0x0(a0)
  0038a5ac  3d00033c  lui v1,0x3d
  0038a5b0  e087628c  lw v0,-0x7820(v1)
  0038a5b4  09f84000  jalr v0
  0038a5b8  00000000  _nop
  0038a5bc  0000bfdf  ld ra,0x0(sp)
  0038a5c0  0800e003  jr ra
  0038a5c4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityLength_0038a620 @ 0038a620 ====
  0038a620  e0ffbd27  addiu sp,sp,-0x20
  0038a624  4a00033c  lui v1,0x4a
  0038a628  1000b07f  sq s0,0x10(sp)
  0038a62c  c8aa628c  lw v0,-0x5538(v1)
  0038a630  c8aa7024  addiu s0,v1,-0x5538
  0038a634  09004014  bne v0,zero,0x0038a65c
  0038a638  0000bfff  _sd ra,0x0(sp)
  0038a63c  e4270e0c  jal 0x00389f90
  0038a640  00000000  _nop
  0038a644  4000053c  lui a1,0x40
  0038a648  4a00063c  lui a2,0x4a
  0038a64c  5852a524  addiu a1,a1,0x5258
  0038a650  58aac624  addiu a2,a2,-0x55a8
  0038a654  5ac00d0c  jal 0x00370168
  0038a658  2d200002  _move a0,s0
  0038a65c  2d100002  move v0,s0
  0038a660  0000bfdf  ld ra,0x0(sp)
  0038a664  1000b07b  lq s0,0x10(sp)
  0038a668  0800e003  jr ra
  0038a66c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a6b0 @ 0038a6b0 ====
  0038a6b0  3e00023c  lui v0,0x3e
  0038a6b4  f0ffbd27  addiu sp,sp,-0x10
  0038a6b8  40004224  addiu v0,v0,0x40
  0038a6bc  0000bfff  sd ra,0x0(sp)
  0038a6c0  0100a530  andi a1,a1,0x1
  0038a6c4  0500a010  beq a1,zero,0x0038a6dc
  0038a6c8  000082ac  _sw v0,0x0(a0)
  0038a6cc  3d00033c  lui v1,0x3d
  0038a6d0  e087628c  lw v0,-0x7820(v1)
  0038a6d4  09f84000  jalr v0
  0038a6d8  00000000  _nop
  0038a6dc  0000bfdf  ld ra,0x0(sp)
  0038a6e0  0800e003  jr ra
  0038a6e4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityMaxSpeed_0038a708 @ 0038a708 ====
  0038a708  e0ffbd27  addiu sp,sp,-0x20
  0038a70c  4a00033c  lui v1,0x4a
  0038a710  1000b07f  sq s0,0x10(sp)
  0038a714  d8aa628c  lw v0,-0x5528(v1)
  0038a718  d8aa7024  addiu s0,v1,-0x5528
  0038a71c  09004014  bne v0,zero,0x0038a744
  0038a720  0000bfff  _sd ra,0x0(sp)
  0038a724  e4270e0c  jal 0x00389f90
  0038a728  00000000  _nop
  0038a72c  4000053c  lui a1,0x40
  0038a730  4a00063c  lui a2,0x4a
  0038a734  1053a524  addiu a1,a1,0x5310
  0038a738  58aac624  addiu a2,a2,-0x55a8
  0038a73c  5ac00d0c  jal 0x00370168
  0038a740  2d200002  _move a0,s0
  0038a744  2d100002  move v0,s0
  0038a748  0000bfdf  ld ra,0x0(sp)
  0038a74c  1000b07b  lq s0,0x10(sp)
  0038a750  0800e003  jr ra
  0038a754  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a790 @ 0038a790 ====
  0038a790  3e00023c  lui v0,0x3e
  0038a794  f0ffbd27  addiu sp,sp,-0x10
  0038a798  40004224  addiu v0,v0,0x40
  0038a79c  0000bfff  sd ra,0x0(sp)
  0038a7a0  0100a530  andi a1,a1,0x1
  0038a7a4  0500a010  beq a1,zero,0x0038a7bc
  0038a7a8  000082ac  _sw v0,0x0(a0)
  0038a7ac  3d00033c  lui v1,0x3d
  0038a7b0  e087628c  lw v0,-0x7820(v1)
  0038a7b4  09f84000  jalr v0
  0038a7b8  00000000  _nop
  0038a7bc  0000bfdf  ld ra,0x0(sp)
  0038a7c0  0800e003  jr ra
  0038a7c4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityTeamSide_0038a7e8 @ 0038a7e8 ====
  0038a7e8  e0ffbd27  addiu sp,sp,-0x20
  0038a7ec  4a00033c  lui v1,0x4a
  0038a7f0  1000b07f  sq s0,0x10(sp)
  0038a7f4  e8aa628c  lw v0,-0x5518(v1)
  0038a7f8  e8aa7024  addiu s0,v1,-0x5518
  0038a7fc  09004014  bne v0,zero,0x0038a824
  0038a800  0000bfff  _sd ra,0x0(sp)
  0038a804  e4270e0c  jal 0x00389f90
  0038a808  00000000  _nop
  0038a80c  4000053c  lui a1,0x40
  0038a810  4a00063c  lui a2,0x4a
  0038a814  d053a524  addiu a1,a1,0x53d0
  0038a818  58aac624  addiu a2,a2,-0x55a8
  0038a81c  5ac00d0c  jal 0x00370168
  0038a820  2d200002  _move a0,s0
  0038a824  2d100002  move v0,s0
  0038a828  0000bfdf  ld ra,0x0(sp)
  0038a82c  1000b07b  lq s0,0x10(sp)
  0038a830  0800e003  jr ra
  0038a834  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a858 @ 0038a858 ====
  0038a858  3e00023c  lui v0,0x3e
  0038a85c  f0ffbd27  addiu sp,sp,-0x10
  0038a860  40004224  addiu v0,v0,0x40
  0038a864  0000bfff  sd ra,0x0(sp)
  0038a868  0100a530  andi a1,a1,0x1
  0038a86c  0500a010  beq a1,zero,0x0038a884
  0038a870  000082ac  _sw v0,0x0(a0)
  0038a874  3d00033c  lui v1,0x3d
  0038a878  e087628c  lw v0,-0x7820(v1)
  0038a87c  09f84000  jalr v0
  0038a880  00000000  _nop
  0038a884  0000bfdf  ld ra,0x0(sp)
  0038a888  0800e003  jr ra
  0038a88c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityTorsoOrientation_0038a8b0 @ 0038a8b0 ====
  0038a8b0  e0ffbd27  addiu sp,sp,-0x20
  0038a8b4  4a00033c  lui v1,0x4a
  0038a8b8  1000b07f  sq s0,0x10(sp)
  0038a8bc  f8aa628c  lw v0,-0x5508(v1)
  0038a8c0  f8aa7024  addiu s0,v1,-0x5508
  0038a8c4  09004014  bne v0,zero,0x0038a8ec
  0038a8c8  0000bfff  _sd ra,0x0(sp)
  0038a8cc  e4270e0c  jal 0x00389f90
  0038a8d0  00000000  _nop
  0038a8d4  4000053c  lui a1,0x40
  0038a8d8  4a00063c  lui a2,0x4a
  0038a8dc  9854a524  addiu a1,a1,0x5498
  0038a8e0  58aac624  addiu a2,a2,-0x55a8
  0038a8e4  5ac00d0c  jal 0x00370168
  0038a8e8  2d200002  _move a0,s0
  0038a8ec  2d100002  move v0,s0
  0038a8f0  0000bfdf  ld ra,0x0(sp)
  0038a8f4  1000b07b  lq s0,0x10(sp)
  0038a8f8  0800e003  jr ra
  0038a8fc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038a918 @ 0038a918 ====
  0038a918  3e00023c  lui v0,0x3e
  0038a91c  f0ffbd27  addiu sp,sp,-0x10
  0038a920  40004224  addiu v0,v0,0x40
  0038a924  0000bfff  sd ra,0x0(sp)
  0038a928  0100a530  andi a1,a1,0x1
  0038a92c  0500a010  beq a1,zero,0x0038a944
  0038a930  000082ac  _sw v0,0x0(a0)
  0038a934  3d00033c  lui v1,0x3d
  0038a938  e087628c  lw v0,-0x7820(v1)
  0038a93c  09f84000  jalr v0
  0038a940  00000000  _nop
  0038a944  0000bfdf  ld ra,0x0(sp)
  0038a948  0800e003  jr ra
  0038a94c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityVisualAcuteness_0038a988 @ 0038a988 ====
  0038a988  e0ffbd27  addiu sp,sp,-0x20
  0038a98c  4a00033c  lui v1,0x4a
  0038a990  1000b07f  sq s0,0x10(sp)
  0038a994  08ab628c  lw v0,-0x54f8(v1)
  0038a998  08ab7024  addiu s0,v1,-0x54f8
  0038a99c  09004014  bne v0,zero,0x0038a9c4
  0038a9a0  0000bfff  _sd ra,0x0(sp)
  0038a9a4  e4270e0c  jal 0x00389f90
  0038a9a8  00000000  _nop
  0038a9ac  4000053c  lui a1,0x40
  0038a9b0  4a00063c  lui a2,0x4a
  0038a9b4  6855a524  addiu a1,a1,0x5568
  0038a9b8  58aac624  addiu a2,a2,-0x55a8
  0038a9bc  5ac00d0c  jal 0x00370168
  0038a9c0  2d200002  _move a0,s0
  0038a9c4  2d100002  move v0,s0
  0038a9c8  0000bfdf  ld ra,0x0(sp)
  0038a9cc  1000b07b  lq s0,0x10(sp)
  0038a9d0  0800e003  jr ra
  0038a9d4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038aa20 @ 0038aa20 ====
  0038aa20  3e00023c  lui v0,0x3e
  0038aa24  f0ffbd27  addiu sp,sp,-0x10
  0038aa28  40004224  addiu v0,v0,0x40
  0038aa2c  0000bfff  sd ra,0x0(sp)
  0038aa30  0100a530  andi a1,a1,0x1
  0038aa34  0500a010  beq a1,zero,0x0038aa4c
  0038aa38  000082ac  _sw v0,0x0(a0)
  0038aa3c  3d00033c  lui v1,0x3d
  0038aa40  e087628c  lw v0,-0x7820(v1)
  0038aa44  09f84000  jalr v0
  0038aa48  00000000  _nop
  0038aa4c  0000bfdf  ld ra,0x0(sp)
  0038aa50  0800e003  jr ra
  0038aa54  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityWidth_0038aaa0 @ 0038aaa0 ====
  0038aaa0  e0ffbd27  addiu sp,sp,-0x20
  0038aaa4  4a00033c  lui v1,0x4a
  0038aaa8  1000b07f  sq s0,0x10(sp)
  0038aaac  18ab628c  lw v0,-0x54e8(v1)
  0038aab0  18ab7024  addiu s0,v1,-0x54e8
  0038aab4  09004014  bne v0,zero,0x0038aadc
  0038aab8  0000bfff  _sd ra,0x0(sp)
  0038aabc  e4270e0c  jal 0x00389f90
  0038aac0  00000000  _nop
  0038aac4  4000053c  lui a1,0x40
  0038aac8  4a00063c  lui a2,0x4a
  0038aacc  2856a524  addiu a1,a1,0x5628
  0038aad0  58aac624  addiu a2,a2,-0x55a8
  0038aad4  5ac00d0c  jal 0x00370168
  0038aad8  2d200002  _move a0,s0
  0038aadc  2d100002  move v0,s0
  0038aae0  0000bfdf  ld ra,0x0(sp)
  0038aae4  1000b07b  lq s0,0x10(sp)
  0038aae8  0800e003  jr ra
  0038aaec  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038ab30 @ 0038ab30 ====
  0038ab30  3e00023c  lui v0,0x3e
  0038ab34  f0ffbd27  addiu sp,sp,-0x10
  0038ab38  40004224  addiu v0,v0,0x40
  0038ab3c  0000bfff  sd ra,0x0(sp)
  0038ab40  0100a530  andi a1,a1,0x1
  0038ab44  0500a010  beq a1,zero,0x0038ab5c
  0038ab48  000082ac  _sw v0,0x0(a0)
  0038ab4c  3d00033c  lui v1,0x3d
  0038ab50  e087628c  lw v0,-0x7820(v1)
  0038ab54  09f84000  jalr v0
  0038ab58  00000000  _nop
  0038ab5c  0000bfdf  ld ra,0x0(sp)
  0038ab60  0800e003  jr ra
  0038ab64  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionActivate_0038ab88 @ 0038ab88 ====
  0038ab88  e0ffbd27  addiu sp,sp,-0x20
  0038ab8c  4a00033c  lui v1,0x4a
  0038ab90  1000b07f  sq s0,0x10(sp)
  0038ab94  28ab628c  lw v0,-0x54d8(v1)
  0038ab98  28ab7024  addiu s0,v1,-0x54d8
  0038ab9c  09004014  bne v0,zero,0x0038abc4
  0038aba0  0000bfff  _sd ra,0x0(sp)
  0038aba4  42260e0c  jal 0x00389908
  0038aba8  00000000  _nop
  0038abac  4000053c  lui a1,0x40
  0038abb0  4a00063c  lui a2,0x4a
  0038abb4  e056a524  addiu a1,a1,0x56e0
  0038abb8  d8a9c624  addiu a2,a2,-0x5628
  0038abbc  5ac00d0c  jal 0x00370168
  0038abc0  2d200002  _move a0,s0
  0038abc4  2d100002  move v0,s0
  0038abc8  0000bfdf  ld ra,0x0(sp)
  0038abcc  1000b07b  lq s0,0x10(sp)
  0038abd0  0800e003  jr ra
  0038abd4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038abf0 @ 0038abf0 ====
  0038abf0  3e00023c  lui v0,0x3e
  0038abf4  f0ffbd27  addiu sp,sp,-0x10
  0038abf8  40004224  addiu v0,v0,0x40
  0038abfc  0000bfff  sd ra,0x0(sp)
  0038ac00  0100a530  andi a1,a1,0x1
  0038ac04  0500a010  beq a1,zero,0x0038ac1c
  0038ac08  000082ac  _sw v0,0x0(a0)
  0038ac0c  3d00033c  lui v1,0x3d
  0038ac10  e087628c  lw v0,-0x7820(v1)
  0038ac14  09f84000  jalr v0
  0038ac18  00000000  _nop
  0038ac1c  0000bfdf  ld ra,0x0(sp)
  0038ac20  0800e003  jr ra
  0038ac24  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionHeadRotate_0038ac50 @ 0038ac50 ====
  0038ac50  e0ffbd27  addiu sp,sp,-0x20
  0038ac54  4a00033c  lui v1,0x4a
  0038ac58  1000b07f  sq s0,0x10(sp)
  0038ac5c  38ab628c  lw v0,-0x54c8(v1)
  0038ac60  38ab7024  addiu s0,v1,-0x54c8
  0038ac64  09004014  bne v0,zero,0x0038ac8c
  0038ac68  0000bfff  _sd ra,0x0(sp)
  0038ac6c  42260e0c  jal 0x00389908
  0038ac70  00000000  _nop
  0038ac74  4000053c  lui a1,0x40
  0038ac78  4a00063c  lui a2,0x4a
  0038ac7c  a857a524  addiu a1,a1,0x57a8
  0038ac80  d8a9c624  addiu a2,a2,-0x5628
  0038ac84  5ac00d0c  jal 0x00370168
  0038ac88  2d200002  _move a0,s0
  0038ac8c  2d100002  move v0,s0
  0038ac90  0000bfdf  ld ra,0x0(sp)
  0038ac94  1000b07b  lq s0,0x10(sp)
  0038ac98  0800e003  jr ra
  0038ac9c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038acb8 @ 0038acb8 ====
  0038acb8  3e00023c  lui v0,0x3e
  0038acbc  f0ffbd27  addiu sp,sp,-0x10
  0038acc0  40004224  addiu v0,v0,0x40
  0038acc4  0000bfff  sd ra,0x0(sp)
  0038acc8  0100a530  andi a1,a1,0x1
  0038accc  0500a010  beq a1,zero,0x0038ace4
  0038acd0  000082ac  _sw v0,0x0(a0)
  0038acd4  3d00033c  lui v1,0x3d
  0038acd8  e087628c  lw v0,-0x7820(v1)
  0038acdc  09f84000  jalr v0
  0038ace0  00000000  _nop
  0038ace4  0000bfdf  ld ra,0x0(sp)
  0038ace8  0800e003  jr ra
  0038acec  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionTorsoRotate_0038ad30 @ 0038ad30 ====
  0038ad30  e0ffbd27  addiu sp,sp,-0x20
  0038ad34  4a00033c  lui v1,0x4a
  0038ad38  1000b07f  sq s0,0x10(sp)
  0038ad3c  48ab628c  lw v0,-0x54b8(v1)
  0038ad40  48ab7024  addiu s0,v1,-0x54b8
  0038ad44  09004014  bne v0,zero,0x0038ad6c
  0038ad48  0000bfff  _sd ra,0x0(sp)
  0038ad4c  42260e0c  jal 0x00389908
  0038ad50  00000000  _nop
  0038ad54  4000053c  lui a1,0x40
  0038ad58  4a00063c  lui a2,0x4a
  0038ad5c  7058a524  addiu a1,a1,0x5870
  0038ad60  d8a9c624  addiu a2,a2,-0x5628
  0038ad64  5ac00d0c  jal 0x00370168
  0038ad68  2d200002  _move a0,s0
  0038ad6c  2d100002  move v0,s0
  0038ad70  0000bfdf  ld ra,0x0(sp)
  0038ad74  1000b07b  lq s0,0x10(sp)
  0038ad78  0800e003  jr ra
  0038ad7c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038ad98 @ 0038ad98 ====
  0038ad98  3e00023c  lui v0,0x3e
  0038ad9c  f0ffbd27  addiu sp,sp,-0x10
  0038ada0  40004224  addiu v0,v0,0x40
  0038ada4  0000bfff  sd ra,0x0(sp)
  0038ada8  0100a530  andi a1,a1,0x1
  0038adac  0500a010  beq a1,zero,0x0038adc4
  0038adb0  000082ac  _sw v0,0x0(a0)
  0038adb4  3d00033c  lui v1,0x3d
  0038adb8  e087628c  lw v0,-0x7820(v1)
  0038adbc  09f84000  jalr v0
  0038adc0  00000000  _nop
  0038adc4  0000bfdf  ld ra,0x0(sp)
  0038adc8  0800e003  jr ra
  0038adcc  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionVerticalSpeed_0038ae10 @ 0038ae10 ====
  0038ae10  e0ffbd27  addiu sp,sp,-0x20
  0038ae14  4a00033c  lui v1,0x4a
  0038ae18  1000b07f  sq s0,0x10(sp)
  0038ae1c  58ab628c  lw v0,-0x54a8(v1)
  0038ae20  58ab7024  addiu s0,v1,-0x54a8
  0038ae24  09004014  bne v0,zero,0x0038ae4c
  0038ae28  0000bfff  _sd ra,0x0(sp)
  0038ae2c  42260e0c  jal 0x00389908
  0038ae30  00000000  _nop
  0038ae34  4000053c  lui a1,0x40
  0038ae38  4a00063c  lui a2,0x4a
  0038ae3c  3859a524  addiu a1,a1,0x5938
  0038ae40  d8a9c624  addiu a2,a2,-0x5628
  0038ae44  5ac00d0c  jal 0x00370168
  0038ae48  2d200002  _move a0,s0
  0038ae4c  2d100002  move v0,s0
  0038ae50  0000bfdf  ld ra,0x0(sp)
  0038ae54  1000b07b  lq s0,0x10(sp)
  0038ae58  0800e003  jr ra
  0038ae5c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038ae78 @ 0038ae78 ====
  0038ae78  3e00023c  lui v0,0x3e
  0038ae7c  f0ffbd27  addiu sp,sp,-0x10
  0038ae80  40004224  addiu v0,v0,0x40
  0038ae84  0000bfff  sd ra,0x0(sp)
  0038ae88  0100a530  andi a1,a1,0x1
  0038ae8c  0500a010  beq a1,zero,0x0038aea4
  0038ae90  000082ac  _sw v0,0x0(a0)
  0038ae94  3d00033c  lui v1,0x3d
  0038ae98  e087628c  lw v0,-0x7820(v1)
  0038ae9c  09f84000  jalr v0
  0038aea0  00000000  _nop
  0038aea4  0000bfdf  ld ra,0x0(sp)
  0038aea8  0800e003  jr ra
  0038aeac  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038aee0 @ 0038aee0 ====
  0038aee0  c0ffbd27  addiu sp,sp,-0x40
  0038aee4  4a00023c  lui v0,0x4a
  0038aee8  2000b17f  sq s1,0x20(sp)
  0038aeec  1000b27f  sq s2,0x10(sp)
  0038aef0  68ab5124  addiu s1,v0,-0x5498
  0038aef4  68ab438c  lw v1,-0x5498(v0)
  0038aef8  2d904000  move s2,v0
  0038aefc  3000b07f  sq s0,0x30(sp)
  0038af00  0e006014  bne v1,zero,0x0038af3c
  0038af04  0000bfff  _sd ra,0x0(sp)
  0038af08  4100033c  lui v1,0x41
  0038af0c  c0eb628c  lw v0,-0x1440(v1)
  0038af10  05004014  bne v0,zero,0x0038af28
  0038af14  c0eb7024  _addiu s0,v1,-0x1440
  0038af18  4000053c  lui a1,0x40
  0038af1c  2d200002  move a0,s0
  0038af20  62c00d0c  jal 0x00370188
  0038af24  185aa524  _addiu a1,a1,0x5a18
  0038af28  4000053c  lui a1,0x40
  0038af2c  2d202002  move a0,s1
  0038af30  285aa524  addiu a1,a1,0x5a28
  0038af34  5ac00d0c  jal 0x00370168
  0038af38  2d300002  _move a2,s0
  0038af3c  68ab4226  addiu v0,s2,-0x5498
  0038af40  3000b07b  lq s0,0x30(sp)
  0038af44  2000b17b  lq s1,0x20(sp)
  0038af48  1000b27b  lq s2,0x10(sp)
  0038af4c  0000bfdf  ld ra,0x0(sp)
  0038af50  0800e003  jr ra
  0038af54  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CPathWayManager_0038af58 @ 0038af58 ====
  0038af58  e0ffbd27  addiu sp,sp,-0x20
  0038af5c  4a00033c  lui v1,0x4a
  0038af60  1000b07f  sq s0,0x10(sp)
  0038af64  78ab628c  lw v0,-0x5488(v1)
  0038af68  78ab7024  addiu s0,v1,-0x5488
  0038af6c  09004014  bne v0,zero,0x0038af94
  0038af70  0000bfff  _sd ra,0x0(sp)
  0038af74  ee2b0e0c  jal 0x0038afb8
  0038af78  00000000  _nop
  0038af7c  4000053c  lui a1,0x40
  0038af80  4a00063c  lui a2,0x4a
  0038af84  505aa524  addiu a1,a1,0x5a50
  0038af88  88abc624  addiu a2,a2,-0x5478
  0038af8c  5ac00d0c  jal 0x00370168
  0038af90  2d200002  _move a0,s0
  0038af94  2d100002  move v0,s0
  0038af98  0000bfdf  ld ra,0x0(sp)
  0038af9c  1000b07b  lq s0,0x10(sp)
  0038afa0  0800e003  jr ra
  0038afa4  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CWorldService_0038afb8 @ 0038afb8 ====
  0038afb8  e0ffbd27  addiu sp,sp,-0x20
  0038afbc  4a00033c  lui v1,0x4a
  0038afc0  1000b07f  sq s0,0x10(sp)
  0038afc4  88ab628c  lw v0,-0x5478(v1)
  0038afc8  88ab7024  addiu s0,v1,-0x5478
  0038afcc  09004014  bne v0,zero,0x0038aff4
  0038afd0  0000bfff  _sd ra,0x0(sp)
  0038afd4  b8390e0c  jal 0x0038e6e0
  0038afd8  00000000  _nop
  0038afdc  4000053c  lui a1,0x40
  0038afe0  4a00063c  lui a2,0x4a
  0038afe4  705aa524  addiu a1,a1,0x5a70
  0038afe8  98abc624  addiu a2,a2,-0x5468
  0038afec  5ac00d0c  jal 0x00370168
  0038aff0  2d200002  _move a0,s0
  0038aff4  2d100002  move v0,s0
  0038aff8  0000bfdf  ld ra,0x0(sp)
  0038affc  1000b07b  lq s0,0x10(sp)
  0038b000  0800e003  jr ra
  0038b004  2000bd27  _addiu sp,sp,0x20

# ==== Kaimt_CMetaClass2ZQ24Kaim13CWorldServiceZPFv_PQ24Kaim13CWorldService_0038b008 @ 0038b008 ====
  0038b008  e0ffbd27  addiu sp,sp,-0x20
  0038b00c  4100033c  lui v1,0x41
  0038b010  1000b07f  sq s0,0x10(sp)
  0038b014  e0eb628c  lw v0,-0x1420(v1)
  0038b018  e0eb7024  addiu s0,v1,-0x1420
  0038b01c  05004014  bne v0,zero,0x0038b034
  0038b020  0000bfff  _sd ra,0x0(sp)
  0038b024  4000053c  lui a1,0x40
  0038b028  2d200002  move a0,s0
  0038b02c  62c00d0c  jal 0x00370188
  0038b030  885aa524  _addiu a1,a1,0x5a88
  0038b034  2d100002  move v0,s0
  0038b038  0000bfdf  ld ra,0x0(sp)
  0038b03c  1000b07b  lq s0,0x10(sp)
  0038b040  0800e003  jr ra
  0038b044  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b048 @ 0038b048 ====
  0038b048  f0ffbd27  addiu sp,sp,-0x10
  0038b04c  3e00023c  lui v0,0x3e
  0038b050  0000bfff  sd ra,0x0(sp)
  0038b054  405e4224  addiu v0,v0,0x5e40
  0038b058  0100a530  andi a1,a1,0x1
  0038b05c  0300a010  beq a1,zero,0x0038b06c
  0038b060  100182ac  _sw v0,0x110(a0)
  0038b064  521f040c  jal 0x00107d48
  0038b068  00000000  _nop
  0038b06c  0000bfdf  ld ra,0x0(sp)
  0038b070  0800e003  jr ra
  0038b074  1000bd27  _addiu sp,sp,0x10

# ==== FUN_0038b078 @ 0038b078 ====
  0038b078  3e00033c  lui v1,0x3e
  0038b07c  30646290  lbu v0,0x6430(v1)
  0038b080  01004054  bnel v0,zero,0x0038b088
  0038b084  000480ac  _sw zero,0x400(a0)
  0038b088  306460a0  sb zero,0x6430(v1)
  0038b08c  0800e003  jr ra
  0038b090  2d108000  _move v0,a0

# ==== FUN_0038b098 @ 0038b098 ====
  0038b098  d0ffbd27  addiu sp,sp,-0x30
  0038b09c  1000b17f  sq s1,0x10(sp)
  0038b0a0  4500113c  lui s1,0x45
  0038b0a4  2000b07f  sq s0,0x20(sp)
  0038b0a8  d00f228e  lw v0,0xfd0(s1)
  0038b0ac  3e00103c  lui s0,0x3e
  0038b0b0  08004014  bne v0,zero,0x0038b0d4
  0038b0b4  0000bfff  _sd ra,0x0(sp)
  0038b0b8  1e2c0e0c  jal 0x0038b078
  0038b0bc  28600426  _addiu a0,s0,0x6028
  0038b0c0  01000224  li v0,0x1
  0038b0c4  2e00043c  lui a0,0x2e
  0038b0c8  d00f22ae  sw v0,0xfd0(s1)
  0038b0cc  a4790d0c  jal 0x0035e690
  0038b0d0  f0c98424  _addiu a0,a0,-0x3610
  0038b0d4  28600226  addiu v0,s0,0x6028
  0038b0d8  1000b17b  lq s1,0x10(sp)
  0038b0dc  2000b07b  lq s0,0x20(sp)
  0038b0e0  0000bfdf  ld ra,0x0(sp)
  0038b0e4  0800e003  jr ra
  0038b0e8  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CPointMapper_0038b0f0 @ 0038b0f0 ====
  0038b0f0  e0ffbd27  addiu sp,sp,-0x20
  0038b0f4  4a00033c  lui v1,0x4a
  0038b0f8  1000b07f  sq s0,0x10(sp)
  0038b0fc  a8ab628c  lw v0,-0x5458(v1)
  0038b100  a8ab7024  addiu s0,v1,-0x5458
  0038b104  09004014  bne v0,zero,0x0038b12c
  0038b108  0000bfff  _sd ra,0x0(sp)
  0038b10c  ee2b0e0c  jal 0x0038afb8
  0038b110  00000000  _nop
  0038b114  4000053c  lui a1,0x40
  0038b118  4a00063c  lui a2,0x4a
  0038b11c  805ba524  addiu a1,a1,0x5b80
  0038b120  88abc624  addiu a2,a2,-0x5478
  0038b124  5ac00d0c  jal 0x00370168
  0038b128  2d200002  _move a0,s0
  0038b12c  2d100002  move v0,s0
  0038b130  0000bfdf  ld ra,0x0(sp)
  0038b134  1000b07b  lq s0,0x10(sp)
  0038b138  0800e003  jr ra
  0038b13c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b150 @ 0038b150 ====
  0038b150  a0ffbd27  addiu sp,sp,-0x60
  0038b154  1000b47f  sq s4,0x10(sp)
  0038b158  5000b07f  sq s0,0x50(sp)
  0038b15c  2da08000  move s4,a0
  0038b160  4000b17f  sq s1,0x40(sp)
  0038b164  3000b27f  sq s2,0x30(sp)
  0038b168  2000b37f  sq s3,0x20(sp)
  0038b16c  05008016  bne s4,zero,0x0038b184
  0038b170  0000bfff  _sd ra,0x0(sp)
  0038b174  16000010  b 0x0038b1d0
  0038b178  2d100000  _move v0,zero
  0038b17c  14000010  b 0x0038b1d0
  0038b180  0000228e  _lw v0,0x0(s1)
  0038b184  262c0e0c  jal 0x0038b098
  0038b188  2d900000  _move s2,zero
  0038b18c  2d984000  move s3,v0
  0038b190  0004628e  lw v0,0x400(s3)
  0038b194  0d004018  blez v0,0x0038b1cc
  0038b198  2d806002  _move s0,s3
  0038b19c  2d886002  move s1,s3
  0038b1a0  0000048e  lw a0,0x0(s0)
  0038b1a4  2d288002  move a1,s4
  0038b1a8  9d720d0c  jal 0x0035ca74
  0038b1ac  08008424  _addiu a0,a0,0x8
  0038b1b0  f2ff4010  beq v0,zero,0x0038b17c
  0038b1b4  01005226  _addiu s2,s2,0x1
  0038b1b8  0004628e  lw v0,0x400(s3)
  0038b1bc  04001026  addiu s0,s0,0x4
  0038b1c0  2a104202  slt v0,s2,v0
  0038b1c4  f6ff4014  bne v0,zero,0x0038b1a0
  0038b1c8  04003126  _addiu s1,s1,0x4
  0038b1cc  2d100000  move v0,zero
  0038b1d0  5000b07b  lq s0,0x50(sp)
  0038b1d4  4000b17b  lq s1,0x40(sp)
  0038b1d8  3000b27b  lq s2,0x30(sp)
  0038b1dc  2000b37b  lq s3,0x20(sp)
  0038b1e0  1000b47b  lq s4,0x10(sp)
  0038b1e4  0000bfdf  ld ra,0x0(sp)
  0038b1e8  0800e003  jr ra
  0038b1ec  6000bd27  _addiu sp,sp,0x60

# ==== Kaim_CObject_0038b1f0 @ 0038b1f0 ====
  0038b1f0  c0ffbd27  addiu sp,sp,-0x40
  0038b1f4  4a00023c  lui v0,0x4a
  0038b1f8  2000b17f  sq s1,0x20(sp)
  0038b1fc  1000b27f  sq s2,0x10(sp)
  0038b200  b8ab5124  addiu s1,v0,-0x5448
  0038b204  b8ab438c  lw v1,-0x5448(v0)
  0038b208  2d904000  move s2,v0
  0038b20c  3000b07f  sq s0,0x30(sp)
  0038b210  0e006014  bne v1,zero,0x0038b24c
  0038b214  0000bfff  _sd ra,0x0(sp)
  0038b218  4100033c  lui v1,0x41
  0038b21c  c0eb628c  lw v0,-0x1440(v1)
  0038b220  05004014  bne v0,zero,0x0038b238
  0038b224  c0eb7024  _addiu s0,v1,-0x1440
  0038b228  4000053c  lui a1,0x40
  0038b22c  2d200002  move a0,s0
  0038b230  62c00d0c  jal 0x00370188
  0038b234  605ca524  _addiu a1,a1,0x5c60
  0038b238  4000053c  lui a1,0x40
  0038b23c  2d202002  move a0,s1
  0038b240  705ca524  addiu a1,a1,0x5c70
  0038b244  5ac00d0c  jal 0x00370168
  0038b248  2d300002  _move a2,s0
  0038b24c  b8ab4226  addiu v0,s2,-0x5448
  0038b250  3000b07b  lq s0,0x30(sp)
  0038b254  2000b17b  lq s1,0x20(sp)
  0038b258  1000b27b  lq s2,0x10(sp)
  0038b25c  0000bfdf  ld ra,0x0(sp)
  0038b260  0800e003  jr ra
  0038b264  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CScriptManager_0038b268 @ 0038b268 ====
  0038b268  e0ffbd27  addiu sp,sp,-0x20
  0038b26c  4a00033c  lui v1,0x4a
  0038b270  1000b07f  sq s0,0x10(sp)
  0038b274  c8ab628c  lw v0,-0x5438(v1)
  0038b278  c8ab7024  addiu s0,v1,-0x5438
  0038b27c  09004014  bne v0,zero,0x0038b2a4
  0038b280  0000bfff  _sd ra,0x0(sp)
  0038b284  ee2b0e0c  jal 0x0038afb8
  0038b288  00000000  _nop
  0038b28c  4000053c  lui a1,0x40
  0038b290  4a00063c  lui a2,0x4a
  0038b294  985ca524  addiu a1,a1,0x5c98
  0038b298  88abc624  addiu a2,a2,-0x5478
  0038b29c  5ac00d0c  jal 0x00370168
  0038b2a0  2d200002  _move a0,s0
  0038b2a4  2d100002  move v0,s0
  0038b2a8  0000bfdf  ld ra,0x0(sp)
  0038b2ac  1000b07b  lq s0,0x10(sp)
  0038b2b0  0800e003  jr ra
  0038b2b4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b2c8 @ 0038b2c8 ====
  0038b2c8  c0ffbd27  addiu sp,sp,-0x40
  0038b2cc  4a00023c  lui v0,0x4a
  0038b2d0  2000b17f  sq s1,0x20(sp)
  0038b2d4  1000b27f  sq s2,0x10(sp)
  0038b2d8  d8ab5124  addiu s1,v0,-0x5428
  0038b2dc  d8ab438c  lw v1,-0x5428(v0)
  0038b2e0  2d904000  move s2,v0
  0038b2e4  3000b07f  sq s0,0x30(sp)
  0038b2e8  0e006014  bne v1,zero,0x0038b324
  0038b2ec  0000bfff  _sd ra,0x0(sp)
  0038b2f0  4100033c  lui v1,0x41
  0038b2f4  c0eb628c  lw v0,-0x1440(v1)
  0038b2f8  05004014  bne v0,zero,0x0038b310
  0038b2fc  c0eb7024  _addiu s0,v1,-0x1440
  0038b300  4000053c  lui a1,0x40
  0038b304  2d200002  move a0,s0
  0038b308  62c00d0c  jal 0x00370188
  0038b30c  485ea524  _addiu a1,a1,0x5e48
  0038b310  4000053c  lui a1,0x40
  0038b314  2d202002  move a0,s1
  0038b318  585ea524  addiu a1,a1,0x5e58
  0038b31c  5ac00d0c  jal 0x00370168
  0038b320  2d300002  _move a2,s0
  0038b324  d8ab4226  addiu v0,s2,-0x5428
  0038b328  3000b07b  lq s0,0x30(sp)
  0038b32c  2000b17b  lq s1,0x20(sp)
  0038b330  1000b27b  lq s2,0x10(sp)
  0038b334  0000bfdf  ld ra,0x0(sp)
  0038b338  0800e003  jr ra
  0038b33c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038b340 @ 0038b340 ====
  0038b340  3e00023c  lui v0,0x3e
  0038b344  f0ffbd27  addiu sp,sp,-0x10
  0038b348  40004224  addiu v0,v0,0x40
  0038b34c  0000bfff  sd ra,0x0(sp)
  0038b350  0100a530  andi a1,a1,0x1
  0038b354  0500a010  beq a1,zero,0x0038b36c
  0038b358  000082ac  _sw v0,0x0(a0)
  0038b35c  3d00033c  lui v1,0x3d
  0038b360  e087628c  lw v0,-0x7820(v1)
  0038b364  09f84000  jalr v0
  0038b368  00000000  _nop
  0038b36c  0000bfdf  ld ra,0x0(sp)
  0038b370  0800e003  jr ra
  0038b374  1000bd27  _addiu sp,sp,0x10

# ==== FUN_0038b378 @ 0038b378 ====
  0038b378  c0ffbd27  addiu sp,sp,-0x40
  0038b37c  4a00023c  lui v0,0x4a
  0038b380  2000b17f  sq s1,0x20(sp)
  0038b384  1000b27f  sq s2,0x10(sp)
  0038b388  e8ab5124  addiu s1,v0,-0x5418
  0038b38c  e8ab438c  lw v1,-0x5418(v0)
  0038b390  2d904000  move s2,v0
  0038b394  3000b07f  sq s0,0x30(sp)
  0038b398  0e006014  bne v1,zero,0x0038b3d4
  0038b39c  0000bfff  _sd ra,0x0(sp)
  0038b3a0  4100033c  lui v1,0x41
  0038b3a4  c0eb628c  lw v0,-0x1440(v1)
  0038b3a8  05004014  bne v0,zero,0x0038b3c0
  0038b3ac  c0eb7024  _addiu s0,v1,-0x1440
  0038b3b0  4000053c  lui a1,0x40
  0038b3b4  2d200002  move a0,s0
  0038b3b8  62c00d0c  jal 0x00370188
  0038b3bc  485ea524  _addiu a1,a1,0x5e48
  0038b3c0  4000053c  lui a1,0x40
  0038b3c4  2d202002  move a0,s1
  0038b3c8  705ea524  addiu a1,a1,0x5e70
  0038b3cc  5ac00d0c  jal 0x00370168
  0038b3d0  2d300002  _move a2,s0
  0038b3d4  e8ab4226  addiu v0,s2,-0x5418
  0038b3d8  3000b07b  lq s0,0x30(sp)
  0038b3dc  2000b17b  lq s1,0x20(sp)
  0038b3e0  1000b27b  lq s2,0x10(sp)
  0038b3e4  0000bfdf  ld ra,0x0(sp)
  0038b3e8  0800e003  jr ra
  0038b3ec  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CScript_0038b3f8 @ 0038b3f8 ====
  0038b3f8  e0ffbd27  addiu sp,sp,-0x20
  0038b3fc  4a00033c  lui v1,0x4a
  0038b400  1000b07f  sq s0,0x10(sp)
  0038b404  f8ab628c  lw v0,-0x5408(v1)
  0038b408  f8ab7024  addiu s0,v1,-0x5408
  0038b40c  09004014  bne v0,zero,0x0038b434
  0038b410  0000bfff  _sd ra,0x0(sp)
  0038b414  40240e0c  jal 0x00389100
  0038b418  00000000  _nop
  0038b41c  4000053c  lui a1,0x40
  0038b420  4100063c  lui a2,0x41
  0038b424  c05ea524  addiu a1,a1,0x5ec0
  0038b428  c0ebc624  addiu a2,a2,-0x1440
  0038b42c  5ac00d0c  jal 0x00370168
  0038b430  2d200002  _move a0,s0
  0038b434  2d100002  move v0,s0
  0038b438  0000bfdf  ld ra,0x0(sp)
  0038b43c  1000b07b  lq s0,0x10(sp)
  0038b440  0800e003  jr ra
  0038b444  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b448 @ 0038b448 ====
  0038b448  3e00033c  lui v1,0x3e
  0038b44c  f06c6290  lbu v0,0x6cf0(v1)
  0038b450  01004054  bnel v0,zero,0x0038b458
  0038b454  000480ac  _sw zero,0x400(a0)
  0038b458  f06c60a0  sb zero,0x6cf0(v1)
  0038b45c  0800e003  jr ra
  0038b460  2d108000  _move v0,a0

# ==== FUN_0038b468 @ 0038b468 ====
  0038b468  d0ffbd27  addiu sp,sp,-0x30
  0038b46c  1000b17f  sq s1,0x10(sp)
  0038b470  4500113c  lui s1,0x45
  0038b474  2000b07f  sq s0,0x20(sp)
  0038b478  0c12228e  lw v0,0x120c(s1)
  0038b47c  3e00103c  lui s0,0x3e
  0038b480  08004014  bne v0,zero,0x0038b4a4
  0038b484  0000bfff  _sd ra,0x0(sp)
  0038b488  122d0e0c  jal 0x0038b448
  0038b48c  e8680426  _addiu a0,s0,0x68e8
  0038b490  01000224  li v0,0x1
  0038b494  2e00043c  lui a0,0x2e
  0038b498  0c1222ae  sw v0,0x120c(s1)
  0038b49c  a4790d0c  jal 0x0035e690
  0038b4a0  f0fe8424  _addiu a0,a0,-0x110
  0038b4a4  e8680226  addiu v0,s0,0x68e8
  0038b4a8  1000b17b  lq s1,0x10(sp)
  0038b4ac  2000b07b  lq s0,0x20(sp)
  0038b4b0  0000bfdf  ld ra,0x0(sp)
  0038b4b4  0800e003  jr ra
  0038b4b8  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038b4c0 @ 0038b4c0 ====
  0038b4c0  c0ffbd27  addiu sp,sp,-0x40
  0038b4c4  4a00023c  lui v0,0x4a
  0038b4c8  2000b17f  sq s1,0x20(sp)
  0038b4cc  1000b27f  sq s2,0x10(sp)
  0038b4d0  10b05124  addiu s1,v0,-0x4ff0
  0038b4d4  10b0438c  lw v1,-0x4ff0(v0)
  0038b4d8  2d904000  move s2,v0
  0038b4dc  3000b07f  sq s0,0x30(sp)
  0038b4e0  0e006014  bne v1,zero,0x0038b51c
  0038b4e4  0000bfff  _sd ra,0x0(sp)
  0038b4e8  4100033c  lui v1,0x41
  0038b4ec  c0eb628c  lw v0,-0x1440(v1)
  0038b4f0  05004014  bne v0,zero,0x0038b508
  0038b4f4  c0eb7024  _addiu s0,v1,-0x1440
  0038b4f8  4000053c  lui a1,0x40
  0038b4fc  2d200002  move a0,s0
  0038b500  62c00d0c  jal 0x00370188
  0038b504  f05ea524  _addiu a1,a1,0x5ef0
  0038b508  4000053c  lui a1,0x40
  0038b50c  2d202002  move a0,s1
  0038b510  005fa524  addiu a1,a1,0x5f00
  0038b514  5ac00d0c  jal 0x00370168
  0038b518  2d300002  _move a2,s0
  0038b51c  10b04226  addiu v0,s2,-0x4ff0
  0038b520  3000b07b  lq s0,0x30(sp)
  0038b524  2000b17b  lq s1,0x20(sp)
  0038b528  1000b27b  lq s2,0x10(sp)
  0038b52c  0000bfdf  ld ra,0x0(sp)
  0038b530  0800e003  jr ra
  0038b534  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038b538 @ 0038b538 ====
  0038b538  d0ffbd27  addiu sp,sp,-0x30
  0038b53c  1000b17f  sq s1,0x10(sp)
  0038b540  4500113c  lui s1,0x45
  0038b544  2000b07f  sq s0,0x20(sp)
  0038b548  0812228e  lw v0,0x1208(s1)
  0038b54c  4a00103c  lui s0,0x4a
  0038b550  08004014  bne v0,zero,0x0038b574
  0038b554  0000bfff  _sd ra,0x0(sp)
  0038b558  a42d0e0c  jal 0x0038b690
  0038b55c  08ac0426  _addiu a0,s0,-0x53f8
  0038b560  01000224  li v0,0x1
  0038b564  2e00043c  lui a0,0x2e
  0038b568  081222ae  sw v0,0x1208(s1)
  0038b56c  a4790d0c  jal 0x0035e690
  0038b570  00ff8424  _addiu a0,a0,-0x100
  0038b574  08ac0226  addiu v0,s0,-0x53f8
  0038b578  1000b17b  lq s1,0x10(sp)
  0038b57c  2000b07b  lq s0,0x20(sp)
  0038b580  0000bfdf  ld ra,0x0(sp)
  0038b584  0800e003  jr ra
  0038b588  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038b590 @ 0038b590 ====
  0038b590  f0ffbd27  addiu sp,sp,-0x10
  0038b594  3e00023c  lui v0,0x3e
  0038b598  0000bfff  sd ra,0x0(sp)
  0038b59c  28014224  addiu v0,v0,0x128
  0038b5a0  0100a530  andi a1,a1,0x1
  0038b5a4  0300a010  beq a1,zero,0x0038b5b4
  0038b5a8  100182ac  _sw v0,0x110(a0)
  0038b5ac  521f040c  jal 0x00107d48
  0038b5b0  00000000  _nop
  0038b5b4  0000bfdf  ld ra,0x0(sp)
  0038b5b8  0800e003  jr ra
  0038b5bc  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionClass_0038b5c0 @ 0038b5c0 ====
  0038b5c0  e0ffbd27  addiu sp,sp,-0x20
  0038b5c4  4a00033c  lui v1,0x4a
  0038b5c8  1000b07f  sq s0,0x10(sp)
  0038b5cc  20b0628c  lw v0,-0x4fe0(v1)
  0038b5d0  20b07024  addiu s0,v1,-0x4fe0
  0038b5d4  09004014  bne v0,zero,0x0038b5fc
  0038b5d8  0000bfff  _sd ra,0x0(sp)
  0038b5dc  742e0e0c  jal 0x0038b9d0
  0038b5e0  00000000  _nop
  0038b5e4  4000053c  lui a1,0x40
  0038b5e8  4100063c  lui a2,0x41
  0038b5ec  105fa524  addiu a1,a1,0x5f10
  0038b5f0  e8ebc624  addiu a2,a2,-0x1418
  0038b5f4  5ac00d0c  jal 0x00370168
  0038b5f8  2d200002  _move a0,s0
  0038b5fc  2d100002  move v0,s0
  0038b600  0000bfdf  ld ra,0x0(sp)
  0038b604  1000b07b  lq s0,0x10(sp)
  0038b608  0800e003  jr ra
  0038b60c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b610 @ 0038b610 ====
  0038b610  f0ffbd27  addiu sp,sp,-0x10
  0038b614  3e00023c  lui v0,0x3e
  0038b618  0000bfff  sd ra,0x0(sp)
  0038b61c  383d4224  addiu v0,v0,0x3d38
  0038b620  0100a530  andi a1,a1,0x1
  0038b624  0300a010  beq a1,zero,0x0038b634
  0038b628  100182ac  _sw v0,0x110(a0)
  0038b62c  521f040c  jal 0x00107d48
  0038b630  00000000  _nop
  0038b634  0000bfdf  ld ra,0x0(sp)
  0038b638  0800e003  jr ra
  0038b63c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CActionAttributeClass_0038b640 @ 0038b640 ====
  0038b640  e0ffbd27  addiu sp,sp,-0x20
  0038b644  4a00033c  lui v1,0x4a
  0038b648  1000b07f  sq s0,0x10(sp)
  0038b64c  30b0628c  lw v0,-0x4fd0(v1)
  0038b650  30b07024  addiu s0,v1,-0x4fd0
  0038b654  09004014  bne v0,zero,0x0038b67c
  0038b658  0000bfff  _sd ra,0x0(sp)
  0038b65c  60260e0c  jal 0x00389980
  0038b660  00000000  _nop
  0038b664  4000053c  lui a1,0x40
  0038b668  4100063c  lui a2,0x41
  0038b66c  285fa524  addiu a1,a1,0x5f28
  0038b670  d0ebc624  addiu a2,a2,-0x1430
  0038b674  5ac00d0c  jal 0x00370168
  0038b678  2d200002  _move a0,s0
  0038b67c  2d100002  move v0,s0
  0038b680  0000bfdf  ld ra,0x0(sp)
  0038b684  1000b07b  lq s0,0x10(sp)
  0038b688  0800e003  jr ra
  0038b68c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038b690 @ 0038b690 ====
  0038b690  3c00033c  lui v1,0x3c
  0038b694  84776290  lbu v0,0x7784(v1)
  0038b698  01004054  bnel v0,zero,0x0038b6a0
  0038b69c  000480ac  _sw zero,0x400(a0)
  0038b6a0  847760a0  sb zero,0x7784(v1)
  0038b6a4  0800e003  jr ra
  0038b6a8  2d108000  _move v0,a0

# ==== FUN_0038b6b0 @ 0038b6b0 ====
  0038b6b0  50ffbd27  addiu sp,sp,-0xb0
  0038b6b4  ff000831  andi t0,t0,0xff
  0038b6b8  5000b57f  sq s5,0x50(sp)
  0038b6bc  ff002931  andi t1,t1,0xff
  0038b6c0  4000b67f  sq s6,0x40(sp)
  0038b6c4  2da88000  move s5,a0
  0038b6c8  3e00023c  lui v0,0x3e
  0038b6cc  a000b07f  sq s0,0xa0(sp)
  0038b6d0  6000b47f  sq s4,0x60(sp)
  0038b6d4  28014224  addiu v0,v0,0x128
  0038b6d8  3000b77f  sq s7,0x30(sp)
  0038b6dc  0800b626  addiu s6,s5,0x8
  0038b6e0  2000be7f  sq s8,0x20(sp)
  0038b6e4  2db8c000  move s7,a2
  0038b6e8  9000b17f  sq s1,0x90(sp)
  0038b6ec  2df0e000  move s8,a3
  0038b6f0  8000b27f  sq s2,0x80(sp)
  0038b6f4  2d20c002  move a0,s6
  0038b6f8  7000b37f  sq s3,0x70(sp)
  0038b6fc  2da00000  move s4,zero
  0038b700  1000bfff  sd ra,0x10(sp)
  0038b704  0000a8af  sw t0,0x0(sp)
  0038b708  0400a9af  sw t1,0x4(sp)
  0038b70c  f0720d0c  jal 0x0035cbc0
  0038b710  1001a2ae  _sw v0,0x110(s5)
  0038b714  1a2d0e0c  jal 0x0038b468
  0038b718  00000000  _nop
  0038b71c  2d804000  move s0,v0
  0038b720  0004028e  lw v0,0x400(s0)
  0038b724  11004058  blezl v0,0x0038b76c
  0038b728  0004038e  _lw v1,0x400(s0)
  0038b72c  2d900002  move s2,s0
  0038b730  2d980002  move s3,s0
  0038b734  00000000  nop
  0038b738  0000448e  lw a0,0x0(s2)
  0038b73c  2d886002  move s1,s3
  0038b740  2d28c002  move a1,s6
  0038b744  9d720d0c  jal 0x0035ca74
  0038b748  08008424  _addiu a0,a0,0x8
  0038b74c  0c004010  beq v0,zero,0x0038b780
  0038b750  01009426  _addiu s4,s4,0x1
  0038b754  0004028e  lw v0,0x400(s0)
  0038b758  04003326  addiu s3,s1,0x4
  0038b75c  2a108202  slt v0,s4,v0
  0038b760  f5ff4014  bne v0,zero,0x0038b738
  0038b764  04005226  _addiu s2,s2,0x4
  0038b768  0004038e  lw v1,0x400(s0)
  0038b76c  00010224  li v0,0x100
  0038b770  06006214  bne v1,v0,0x0038b78c
  0038b774  80180300  _sll v1,v1,0x2
  0038b778  0a000010  b 0x0038b7a4
  0038b77c  2d200000  _move a0,zero
  0038b780  000075ae  sw s5,0x0(s3)
  0038b784  07000010  b 0x0038b7a4
  0038b788  01000424  _li a0,0x1
  0038b78c  01000424  li a0,0x1
  0038b790  21180302  addu v1,s0,v1
  0038b794  000075ac  sw s5,0x0(v1)
  0038b798  0004028e  lw v0,0x400(s0)
  0038b79c  01004224  addiu v0,v0,0x1
  0038b7a0  000402ae  sw v0,0x400(s0)
  0038b7a4  ff008230  andi v0,a0,0xff
  0038b7a8  03004014  bne v0,zero,0x0038b7b8
  0038b7ac  ffff0224  _li v0,-0x1
  0038b7b0  06000010  b 0x0038b7cc
  0038b7b4  0000a2ae  _sw v0,0x0(s5)
  0038b7b8  1a2d0e0c  jal 0x0038b468
  0038b7bc  00000000  _nop
  0038b7c0  0004438c  lw v1,0x400(v0)
  0038b7c4  ffff6324  addiu v1,v1,-0x1
  0038b7c8  0000a3ae  sw v1,0x0(s5)
  0038b7cc  0400b7ae  sw s7,0x4(s5)
  0038b7d0  01000224  li v0,0x1
  0038b7d4  0801beae  sw s8,0x108(s5)
  0038b7d8  0000a38f  lw v1,0x0(sp)
  0038b7dc  04006254  bnel v1,v0,0x0038b7f0
  0038b7e0  0c01a0ae  _sw zero,0x10c(s5)
  0038b7e4  2e840b0c  jal 0x002e10b8
  0038b7e8  00000000  _nop
  0038b7ec  0c01a2ae  sw v0,0x10c(s5)
  0038b7f0  0400a28f  lw v0,0x4(sp)
  0038b7f4  05004010  beq v0,zero,0x0038b80c
  0038b7f8  3c00043c  _lui a0,0x3c
  0038b7fc  0c01a38e  lw v1,0x10c(s5)
  0038b800  207a828c  lw v0,0x7a20(a0)
  0038b804  25104300  or v0,v0,v1
  0038b808  207a82ac  sw v0,0x7a20(a0)
  0038b80c  2d10a002  move v0,s5
  0038b810  a000b07b  lq s0,0xa0(sp)
  0038b814  9000b17b  lq s1,0x90(sp)
  0038b818  8000b27b  lq s2,0x80(sp)
  0038b81c  7000b37b  lq s3,0x70(sp)
  0038b820  6000b47b  lq s4,0x60(sp)
  0038b824  5000b57b  lq s5,0x50(sp)
  0038b828  4000b67b  lq s6,0x40(sp)
  0038b82c  3000b77b  lq s7,0x30(sp)
  0038b830  2000be7b  lq s8,0x20(sp)
  0038b834  1000bfdf  ld ra,0x10(sp)
  0038b838  0800e003  jr ra
  0038b83c  b000bd27  _addiu sp,sp,0xb0

# ==== FUN_0038b840 @ 0038b840 ====
  0038b840  50ffbd27  addiu sp,sp,-0xb0
  0038b844  ff000831  andi t0,t0,0xff
  0038b848  5000b57f  sq s5,0x50(sp)
  0038b84c  ff002931  andi t1,t1,0xff
  0038b850  4000b67f  sq s6,0x40(sp)
  0038b854  2da88000  move s5,a0
  0038b858  3e00023c  lui v0,0x3e
  0038b85c  a000b07f  sq s0,0xa0(sp)
  0038b860  6000b47f  sq s4,0x60(sp)
  0038b864  383d4224  addiu v0,v0,0x3d38
  0038b868  3000b77f  sq s7,0x30(sp)
  0038b86c  0800b626  addiu s6,s5,0x8
  0038b870  2000be7f  sq s8,0x20(sp)
  0038b874  2db8c000  move s7,a2
  0038b878  9000b17f  sq s1,0x90(sp)
  0038b87c  2df0e000  move s8,a3
  0038b880  8000b27f  sq s2,0x80(sp)
  0038b884  2d20c002  move a0,s6
  0038b888  7000b37f  sq s3,0x70(sp)
  0038b88c  2da00000  move s4,zero
  0038b890  1000bfff  sd ra,0x10(sp)
  0038b894  0000a8af  sw t0,0x0(sp)
  0038b898  0400a9af  sw t1,0x4(sp)
  0038b89c  f0720d0c  jal 0x0035cbc0
  0038b8a0  1001a2ae  _sw v0,0x110(s5)
  0038b8a4  4e2d0e0c  jal 0x0038b538
  0038b8a8  00000000  _nop
  0038b8ac  2d804000  move s0,v0
  0038b8b0  0004028e  lw v0,0x400(s0)
  0038b8b4  11004058  blezl v0,0x0038b8fc
  0038b8b8  0004038e  _lw v1,0x400(s0)
  0038b8bc  2d900002  move s2,s0
  0038b8c0  2d980002  move s3,s0
  0038b8c4  00000000  nop
  0038b8c8  0000448e  lw a0,0x0(s2)
  0038b8cc  2d886002  move s1,s3
  0038b8d0  2d28c002  move a1,s6
  0038b8d4  9d720d0c  jal 0x0035ca74
  0038b8d8  08008424  _addiu a0,a0,0x8
  0038b8dc  0c004010  beq v0,zero,0x0038b910
  0038b8e0  01009426  _addiu s4,s4,0x1
  0038b8e4  0004028e  lw v0,0x400(s0)
  0038b8e8  04003326  addiu s3,s1,0x4
  0038b8ec  2a108202  slt v0,s4,v0
  0038b8f0  f5ff4014  bne v0,zero,0x0038b8c8
  0038b8f4  04005226  _addiu s2,s2,0x4
  0038b8f8  0004038e  lw v1,0x400(s0)
  0038b8fc  00010224  li v0,0x100
  0038b900  06006214  bne v1,v0,0x0038b91c
  0038b904  80180300  _sll v1,v1,0x2
  0038b908  0a000010  b 0x0038b934
  0038b90c  2d200000  _move a0,zero
  0038b910  000075ae  sw s5,0x0(s3)
  0038b914  07000010  b 0x0038b934
  0038b918  01000424  _li a0,0x1
  0038b91c  01000424  li a0,0x1
  0038b920  21180302  addu v1,s0,v1
  0038b924  000075ac  sw s5,0x0(v1)
  0038b928  0004028e  lw v0,0x400(s0)
  0038b92c  01004224  addiu v0,v0,0x1
  0038b930  000402ae  sw v0,0x400(s0)
  0038b934  ff008230  andi v0,a0,0xff
  0038b938  03004014  bne v0,zero,0x0038b948
  0038b93c  ffff0224  _li v0,-0x1
  0038b940  06000010  b 0x0038b95c
  0038b944  0000a2ae  _sw v0,0x0(s5)
  0038b948  4e2d0e0c  jal 0x0038b538
  0038b94c  00000000  _nop
  0038b950  0004438c  lw v1,0x400(v0)
  0038b954  ffff6324  addiu v1,v1,-0x1
  0038b958  0000a3ae  sw v1,0x0(s5)
  0038b95c  0400b7ae  sw s7,0x4(s5)
  0038b960  01000224  li v0,0x1
  0038b964  0801beae  sw s8,0x108(s5)
  0038b968  0000a38f  lw v1,0x0(sp)
  0038b96c  04006254  bnel v1,v0,0x0038b980
  0038b970  0c01a0ae  _sw zero,0x10c(s5)
  0038b974  2e840b0c  jal 0x002e10b8
  0038b978  00000000  _nop
  0038b97c  0c01a2ae  sw v0,0x10c(s5)
  0038b980  0400a28f  lw v0,0x4(sp)
  0038b984  05004010  beq v0,zero,0x0038b99c
  0038b988  3c00043c  _lui a0,0x3c
  0038b98c  0c01a38e  lw v1,0x10c(s5)
  0038b990  207a828c  lw v0,0x7a20(a0)
  0038b994  25104300  or v0,v0,v1
  0038b998  207a82ac  sw v0,0x7a20(a0)
  0038b99c  2d10a002  move v0,s5
  0038b9a0  a000b07b  lq s0,0xa0(sp)
  0038b9a4  9000b17b  lq s1,0x90(sp)
  0038b9a8  8000b27b  lq s2,0x80(sp)
  0038b9ac  7000b37b  lq s3,0x70(sp)
  0038b9b0  6000b47b  lq s4,0x60(sp)
  0038b9b4  5000b57b  lq s5,0x50(sp)
  0038b9b8  4000b67b  lq s6,0x40(sp)
  0038b9bc  3000b77b  lq s7,0x30(sp)
  0038b9c0  2000be7b  lq s8,0x20(sp)
  0038b9c4  1000bfdf  ld ra,0x10(sp)
  0038b9c8  0800e003  jr ra
  0038b9cc  b000bd27  _addiu sp,sp,0xb0

# ==== Kaimt_CMetaClass2ZQ24Kaim7CActionZPFv_PQ24Kaim7CAction_0038b9d0 @ 0038b9d0 ====
  0038b9d0  e0ffbd27  addiu sp,sp,-0x20
  0038b9d4  4100033c  lui v1,0x41
  0038b9d8  1000b07f  sq s0,0x10(sp)
  0038b9dc  e8eb628c  lw v0,-0x1418(v1)
  0038b9e0  e8eb7024  addiu s0,v1,-0x1418
  0038b9e4  05004014  bne v0,zero,0x0038b9fc
  0038b9e8  0000bfff  _sd ra,0x0(sp)
  0038b9ec  4000053c  lui a1,0x40
  0038b9f0  2d200002  move a0,s0
  0038b9f4  62c00d0c  jal 0x00370188
  0038b9f8  485fa524  _addiu a1,a1,0x5f48
  0038b9fc  2d100002  move v0,s0
  0038ba00  0000bfdf  ld ra,0x0(sp)
  0038ba04  1000b07b  lq s0,0x10(sp)
  0038ba08  0800e003  jr ra
  0038ba0c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038ba10 @ 0038ba10 ====
  0038ba10  3e00033c  lui v1,0x3e
  0038ba14  50756290  lbu v0,0x7550(v1)
  0038ba18  01004054  bnel v0,zero,0x0038ba20
  0038ba1c  000480ac  _sw zero,0x400(a0)
  0038ba20  507560a0  sb zero,0x7550(v1)
  0038ba24  0800e003  jr ra
  0038ba28  2d108000  _move v0,a0

# ==== FUN_0038ba30 @ 0038ba30 ====
  0038ba30  d0ffbd27  addiu sp,sp,-0x30
  0038ba34  1000b17f  sq s1,0x10(sp)
  0038ba38  4500113c  lui s1,0x45
  0038ba3c  2000b07f  sq s0,0x20(sp)
  0038ba40  1012228e  lw v0,0x1210(s1)
  0038ba44  3e00103c  lui s0,0x3e
  0038ba48  08004014  bne v0,zero,0x0038ba6c
  0038ba4c  0000bfff  _sd ra,0x0(sp)
  0038ba50  842e0e0c  jal 0x0038ba10
  0038ba54  48710426  _addiu a0,s0,0x7148
  0038ba58  01000224  li v0,0x1
  0038ba5c  2e00043c  lui a0,0x2e
  0038ba60  101222ae  sw v0,0x1210(s1)
  0038ba64  a4790d0c  jal 0x0035e690
  0038ba68  30018424  _addiu a0,a0,0x130
  0038ba6c  48710226  addiu v0,s0,0x7148
  0038ba70  1000b17b  lq s1,0x10(sp)
  0038ba74  2000b07b  lq s0,0x20(sp)
  0038ba78  0000bfdf  ld ra,0x0(sp)
  0038ba7c  0800e003  jr ra
  0038ba80  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CAgent_0038ba88 @ 0038ba88 ====
  0038ba88  e0ffbd27  addiu sp,sp,-0x20
  0038ba8c  4a00033c  lui v1,0x4a
  0038ba90  1000b07f  sq s0,0x10(sp)
  0038ba94  48a9628c  lw v0,-0x56b8(v1)
  0038ba98  48a97024  addiu s0,v1,-0x56b8
  0038ba9c  09004014  bne v0,zero,0x0038bac4
  0038baa0  0000bfff  _sd ra,0x0(sp)
  0038baa4  40240e0c  jal 0x00389100
  0038baa8  00000000  _nop
  0038baac  4000053c  lui a1,0x40
  0038bab0  4100063c  lui a2,0x41
  0038bab4  f05fa524  addiu a1,a1,0x5ff0
  0038bab8  c0ebc624  addiu a2,a2,-0x1440
  0038babc  5ac00d0c  jal 0x00370168
  0038bac0  2d200002  _move a0,s0
  0038bac4  2d100002  move v0,s0
  0038bac8  0000bfdf  ld ra,0x0(sp)
  0038bacc  1000b07b  lq s0,0x10(sp)
  0038bad0  0800e003  jr ra
  0038bad4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038bad8 @ 0038bad8 ====
  0038bad8  e0ffbd27  addiu sp,sp,-0x20
  0038badc  1000b07f  sq s0,0x10(sp)
  0038bae0  2d80a000  move s0,a1
  0038bae4  0b000012  beq s0,zero,0x0038bb14
  0038bae8  0000bfff  _sd ra,0x0(sp)
  0038baec  488e0b0c  jal 0x002e3920
  0038baf0  2d200002  _move a0,s0
  0038baf4  08004050  beql v0,zero,0x0038bb18
  0038baf8  2d100000  _move v0,zero
  0038bafc  488e0b0c  jal 0x002e3920
  0038bb00  2d200002  _move a0,s0
  0038bb04  00004480  lb a0,0x0(v0)
  0038bb08  5f000324  li v1,0x5f
  0038bb0c  02008310  beq a0,v1,0x0038bb18
  0038bb10  01000224  _li v0,0x1
  0038bb14  2d100000  move v0,zero
  0038bb18  1000b07b  lq s0,0x10(sp)
  0038bb1c  0000bfdf  ld ra,0x0(sp)
  0038bb20  0800e003  jr ra
  0038bb24  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038bb30 @ 0038bb30 ====
  0038bb30  f0ffbd27  addiu sp,sp,-0x10
  0038bb34  3e00023c  lui v0,0x3e
  0038bb38  0000bfff  sd ra,0x0(sp)
  0038bb3c  e02a4224  addiu v0,v0,0x2ae0
  0038bb40  0100a530  andi a1,a1,0x1
  0038bb44  0300a010  beq a1,zero,0x0038bb54
  0038bb48  100182ac  _sw v0,0x110(a0)
  0038bb4c  521f040c  jal 0x00107d48
  0038bb50  00000000  _nop
  0038bb54  0000bfdf  ld ra,0x0(sp)
  0038bb58  0800e003  jr ra
  0038bb5c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CAgentClass_0038bb60 @ 0038bb60 ====
  0038bb60  e0ffbd27  addiu sp,sp,-0x20
  0038bb64  4a00033c  lui v1,0x4a
  0038bb68  1000b07f  sq s0,0x10(sp)
  0038bb6c  40b0628c  lw v0,-0x4fc0(v1)
  0038bb70  40b07024  addiu s0,v1,-0x4fc0
  0038bb74  09004014  bne v0,zero,0x0038bb9c
  0038bb78  0000bfff  _sd ra,0x0(sp)
  0038bb7c  dc240e0c  jal 0x00389370
  0038bb80  00000000  _nop
  0038bb84  4000053c  lui a1,0x40
  0038bb88  4100063c  lui a2,0x41
  0038bb8c  1060a524  addiu a1,a1,0x6010
  0038bb90  c8ebc624  addiu a2,a2,-0x1438
  0038bb94  5ac00d0c  jal 0x00370168
  0038bb98  2d200002  _move a0,s0
  0038bb9c  2d100002  move v0,s0
  0038bba0  0000bfdf  ld ra,0x0(sp)
  0038bba4  1000b07b  lq s0,0x10(sp)
  0038bba8  0800e003  jr ra
  0038bbac  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038bbb0 @ 0038bbb0 ====
  0038bbb0  50ffbd27  addiu sp,sp,-0xb0
  0038bbb4  ff000831  andi t0,t0,0xff
  0038bbb8  5000b57f  sq s5,0x50(sp)
  0038bbbc  ff002931  andi t1,t1,0xff
  0038bbc0  4000b67f  sq s6,0x40(sp)
  0038bbc4  2da88000  move s5,a0
  0038bbc8  3e00023c  lui v0,0x3e
  0038bbcc  a000b07f  sq s0,0xa0(sp)
  0038bbd0  6000b47f  sq s4,0x60(sp)
  0038bbd4  e02a4224  addiu v0,v0,0x2ae0
  0038bbd8  3000b77f  sq s7,0x30(sp)
  0038bbdc  0800b626  addiu s6,s5,0x8
  0038bbe0  2000be7f  sq s8,0x20(sp)
  0038bbe4  2db8c000  move s7,a2
  0038bbe8  9000b17f  sq s1,0x90(sp)
  0038bbec  2df0e000  move s8,a3
  0038bbf0  8000b27f  sq s2,0x80(sp)
  0038bbf4  2d20c002  move a0,s6
  0038bbf8  7000b37f  sq s3,0x70(sp)
  0038bbfc  2da00000  move s4,zero
  0038bc00  1000bfff  sd ra,0x10(sp)
  0038bc04  0000a8af  sw t0,0x0(sp)
  0038bc08  0400a9af  sw t1,0x4(sp)
  0038bc0c  f0720d0c  jal 0x0035cbc0
  0038bc10  1001a2ae  _sw v0,0x110(s5)
  0038bc14  8c2e0e0c  jal 0x0038ba30
  0038bc18  00000000  _nop
  0038bc1c  2d804000  move s0,v0
  0038bc20  0004028e  lw v0,0x400(s0)
  0038bc24  11004058  blezl v0,0x0038bc6c
  0038bc28  0004038e  _lw v1,0x400(s0)
  0038bc2c  2d900002  move s2,s0
  0038bc30  2d980002  move s3,s0
  0038bc34  00000000  nop
  0038bc38  0000448e  lw a0,0x0(s2)
  0038bc3c  2d886002  move s1,s3
  0038bc40  2d28c002  move a1,s6
  0038bc44  9d720d0c  jal 0x0035ca74
  0038bc48  08008424  _addiu a0,a0,0x8
  0038bc4c  0c004010  beq v0,zero,0x0038bc80
  0038bc50  01009426  _addiu s4,s4,0x1
  0038bc54  0004028e  lw v0,0x400(s0)
  0038bc58  04003326  addiu s3,s1,0x4
  0038bc5c  2a108202  slt v0,s4,v0
  0038bc60  f5ff4014  bne v0,zero,0x0038bc38
  0038bc64  04005226  _addiu s2,s2,0x4
  0038bc68  0004038e  lw v1,0x400(s0)
  0038bc6c  00010224  li v0,0x100
  0038bc70  06006214  bne v1,v0,0x0038bc8c
  0038bc74  80180300  _sll v1,v1,0x2
  0038bc78  0a000010  b 0x0038bca4
  0038bc7c  2d200000  _move a0,zero
  0038bc80  000075ae  sw s5,0x0(s3)
  0038bc84  07000010  b 0x0038bca4
  0038bc88  01000424  _li a0,0x1
  0038bc8c  01000424  li a0,0x1
  0038bc90  21180302  addu v1,s0,v1
  0038bc94  000075ac  sw s5,0x0(v1)
  0038bc98  0004028e  lw v0,0x400(s0)
  0038bc9c  01004224  addiu v0,v0,0x1
  0038bca0  000402ae  sw v0,0x400(s0)
  0038bca4  ff008230  andi v0,a0,0xff
  0038bca8  03004014  bne v0,zero,0x0038bcb8
  0038bcac  ffff0224  _li v0,-0x1
  0038bcb0  06000010  b 0x0038bccc
  0038bcb4  0000a2ae  _sw v0,0x0(s5)
  0038bcb8  8c2e0e0c  jal 0x0038ba30
  0038bcbc  00000000  _nop
  0038bcc0  0004438c  lw v1,0x400(v0)
  0038bcc4  ffff6324  addiu v1,v1,-0x1
  0038bcc8  0000a3ae  sw v1,0x0(s5)
  0038bccc  0400b7ae  sw s7,0x4(s5)
  0038bcd0  01000224  li v0,0x1
  0038bcd4  0801beae  sw s8,0x108(s5)
  0038bcd8  0000a38f  lw v1,0x0(sp)
  0038bcdc  04006254  bnel v1,v0,0x0038bcf0
  0038bce0  0c01a0ae  _sw zero,0x10c(s5)
  0038bce4  2e840b0c  jal 0x002e10b8
  0038bce8  00000000  _nop
  0038bcec  0c01a2ae  sw v0,0x10c(s5)
  0038bcf0  0400a28f  lw v0,0x4(sp)
  0038bcf4  05004010  beq v0,zero,0x0038bd0c
  0038bcf8  3c00043c  _lui a0,0x3c
  0038bcfc  0c01a38e  lw v1,0x10c(s5)
  0038bd00  207a828c  lw v0,0x7a20(a0)
  0038bd04  25104300  or v0,v0,v1
  0038bd08  207a82ac  sw v0,0x7a20(a0)
  0038bd0c  2d10a002  move v0,s5
  0038bd10  a000b07b  lq s0,0xa0(sp)
  0038bd14  9000b17b  lq s1,0x90(sp)
  0038bd18  8000b27b  lq s2,0x80(sp)
  0038bd1c  7000b37b  lq s3,0x70(sp)
  0038bd20  6000b47b  lq s4,0x60(sp)
  0038bd24  5000b57b  lq s5,0x50(sp)
  0038bd28  4000b67b  lq s6,0x40(sp)
  0038bd2c  3000b77b  lq s7,0x30(sp)
  0038bd30  2000be7b  lq s8,0x20(sp)
  0038bd34  1000bfdf  ld ra,0x10(sp)
  0038bd38  0800e003  jr ra
  0038bd3c  b000bd27  _addiu sp,sp,0xb0

# ==== FUN_0038bd40 @ 0038bd40 ====
  0038bd40  3e00033c  lui v1,0x3e
  0038bd44  087c6290  lbu v0,0x7c08(v1)
  0038bd48  01004054  bnel v0,zero,0x0038bd50
  0038bd4c  000480ac  _sw zero,0x400(a0)
  0038bd50  087c60a0  sb zero,0x7c08(v1)
  0038bd54  0800e003  jr ra
  0038bd58  2d108000  _move v0,a0

# ==== FUN_0038bd60 @ 0038bd60 ====
  0038bd60  d0ffbd27  addiu sp,sp,-0x30
  0038bd64  1000b17f  sq s1,0x10(sp)
  0038bd68  4500113c  lui s1,0x45
  0038bd6c  2000b07f  sq s0,0x20(sp)
  0038bd70  1412228e  lw v0,0x1214(s1)
  0038bd74  3e00103c  lui s0,0x3e
  0038bd78  08004014  bne v0,zero,0x0038bd9c
  0038bd7c  0000bfff  _sd ra,0x0(sp)
  0038bd80  502f0e0c  jal 0x0038bd40
  0038bd84  00780426  _addiu a0,s0,0x7800
  0038bd88  01000224  li v0,0x1
  0038bd8c  2e00043c  lui a0,0x2e
  0038bd90  141222ae  sw v0,0x1214(s1)
  0038bd94  a4790d0c  jal 0x0035e690
  0038bd98  08158424  _addiu a0,a0,0x1508
  0038bd9c  00780226  addiu v0,s0,0x7800
  0038bda0  1000b17b  lq s1,0x10(sp)
  0038bda4  2000b07b  lq s0,0x20(sp)
  0038bda8  0000bfdf  ld ra,0x0(sp)
  0038bdac  0800e003  jr ra
  0038bdb0  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038bdb8 @ 0038bdb8 ====
  0038bdb8  3f00033c  lui v1,0x3f
  0038bdbc  18806290  lbu v0,-0x7fe8(v1)
  0038bdc0  01004054  bnel v0,zero,0x0038bdc8
  0038bdc4  000480ac  _sw zero,0x400(a0)
  0038bdc8  188060a0  sb zero,-0x7fe8(v1)
  0038bdcc  0800e003  jr ra
  0038bdd0  2d108000  _move v0,a0

# ==== FUN_0038bdd8 @ 0038bdd8 ====
  0038bdd8  d0ffbd27  addiu sp,sp,-0x30
  0038bddc  1000b17f  sq s1,0x10(sp)
  0038bde0  4500113c  lui s1,0x45
  0038bde4  2000b07f  sq s0,0x20(sp)
  0038bde8  1812228e  lw v0,0x1218(s1)
  0038bdec  3e00103c  lui s0,0x3e
  0038bdf0  08004014  bne v0,zero,0x0038be14
  0038bdf4  0000bfff  _sd ra,0x0(sp)
  0038bdf8  6e2f0e0c  jal 0x0038bdb8
  0038bdfc  107c0426  _addiu a0,s0,0x7c10
  0038be00  01000224  li v0,0x1
  0038be04  2e00043c  lui a0,0x2e
  0038be08  181222ae  sw v0,0x1218(s1)
  0038be0c  a4790d0c  jal 0x0035e690
  0038be10  18158424  _addiu a0,a0,0x1518
  0038be14  107c0226  addiu v0,s0,0x7c10
  0038be18  1000b17b  lq s1,0x10(sp)
  0038be1c  2000b07b  lq s0,0x20(sp)
  0038be20  0000bfdf  ld ra,0x0(sp)
  0038be24  0800e003  jr ra
  0038be28  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038be30 @ 0038be30 ====
  0038be30  3f00033c  lui v1,0x3f
  0038be34  28846290  lbu v0,-0x7bd8(v1)
  0038be38  01004054  bnel v0,zero,0x0038be40
  0038be3c  000480ac  _sw zero,0x400(a0)
  0038be40  288460a0  sb zero,-0x7bd8(v1)
  0038be44  0800e003  jr ra
  0038be48  2d108000  _move v0,a0

# ==== FUN_0038be50 @ 0038be50 ====
  0038be50  d0ffbd27  addiu sp,sp,-0x30
  0038be54  1000b17f  sq s1,0x10(sp)
  0038be58  4500113c  lui s1,0x45
  0038be5c  2000b07f  sq s0,0x20(sp)
  0038be60  1c12228e  lw v0,0x121c(s1)
  0038be64  3f00103c  lui s0,0x3f
  0038be68  08004014  bne v0,zero,0x0038be8c
  0038be6c  0000bfff  _sd ra,0x0(sp)
  0038be70  8c2f0e0c  jal 0x0038be30
  0038be74  20800426  _addiu a0,s0,-0x7fe0
  0038be78  01000224  li v0,0x1
  0038be7c  2e00043c  lui a0,0x2e
  0038be80  1c1222ae  sw v0,0x121c(s1)
  0038be84  a4790d0c  jal 0x0035e690
  0038be88  38158424  _addiu a0,a0,0x1538
  0038be8c  20800226  addiu v0,s0,-0x7fe0
  0038be90  1000b17b  lq s1,0x10(sp)
  0038be94  2000b07b  lq s0,0x20(sp)
  0038be98  0000bfdf  ld ra,0x0(sp)
  0038be9c  0800e003  jr ra
  0038bea0  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038bea8 @ 0038bea8 ====
  0038bea8  d0ffbd27  addiu sp,sp,-0x30
  0038beac  2000b07f  sq s0,0x20(sp)
  0038beb0  1000b17f  sq s1,0x10(sp)
  0038beb4  2d80a000  move s0,a1
  0038beb8  2d888000  move s1,a0
  0038bebc  0000bfff  sd ra,0x0(sp)
  0038bec0  2e8d0b0c  jal 0x002e34b8
  0038bec4  2d280000  _move a1,zero
  0038bec8  01001032  andi s0,s0,0x1
  0038becc  04000012  beq s0,zero,0x0038bee0
  0038bed0  3d00033c  _lui v1,0x3d
  0038bed4  e087628c  lw v0,-0x7820(v1)
  0038bed8  09f84000  jalr v0
  0038bedc  2d202002  _move a0,s1
  0038bee0  2000b07b  lq s0,0x20(sp)
  0038bee4  1000b17b  lq s1,0x10(sp)
  0038bee8  0000bfdf  ld ra,0x0(sp)
  0038beec  0800e003  jr ra
  0038bef0  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CEntityDefinition_0038bef8 @ 0038bef8 ====
  0038bef8  e0ffbd27  addiu sp,sp,-0x20
  0038befc  4a00033c  lui v1,0x4a
  0038bf00  1000b07f  sq s0,0x10(sp)
  0038bf04  50b0628c  lw v0,-0x4fb0(v1)
  0038bf08  50b07024  addiu s0,v1,-0x4fb0
  0038bf0c  09004014  bne v0,zero,0x0038bf34
  0038bf10  0000bfff  _sd ra,0x0(sp)
  0038bf14  26320e0c  jal 0x0038c898
  0038bf18  00000000  _nop
  0038bf1c  4000053c  lui a1,0x40
  0038bf20  4a00063c  lui a2,0x4a
  0038bf24  4061a524  addiu a1,a1,0x6140
  0038bf28  80b0c624  addiu a2,a2,-0x4f80
  0038bf2c  5ac00d0c  jal 0x00370168
  0038bf30  2d200002  _move a0,s0
  0038bf34  2d100002  move v0,s0
  0038bf38  0000bfdf  ld ra,0x0(sp)
  0038bf3c  1000b07b  lq s0,0x10(sp)
  0038bf40  0800e003  jr ra
  0038bf44  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038bf48 @ 0038bf48 ====
  0038bf48  d0ffbd27  addiu sp,sp,-0x30
  0038bf4c  2000b07f  sq s0,0x20(sp)
  0038bf50  1000b17f  sq s1,0x10(sp)
  0038bf54  2d80a000  move s0,a1
  0038bf58  2d888000  move s1,a0
  0038bf5c  0000bfff  sd ra,0x0(sp)
  0038bf60  2e8d0b0c  jal 0x002e34b8
  0038bf64  2d280000  _move a1,zero
  0038bf68  01001032  andi s0,s0,0x1
  0038bf6c  04000012  beq s0,zero,0x0038bf80
  0038bf70  3d00033c  _lui v1,0x3d
  0038bf74  e087628c  lw v0,-0x7820(v1)
  0038bf78  09f84000  jalr v0
  0038bf7c  2d202002  _move a0,s1
  0038bf80  2000b07b  lq s0,0x20(sp)
  0038bf84  1000b17b  lq s1,0x10(sp)
  0038bf88  0000bfdf  ld ra,0x0(sp)
  0038bf8c  0800e003  jr ra
  0038bf90  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CTeamDefinition_0038bf98 @ 0038bf98 ====
  0038bf98  e0ffbd27  addiu sp,sp,-0x20
  0038bf9c  4a00033c  lui v1,0x4a
  0038bfa0  1000b07f  sq s0,0x10(sp)
  0038bfa4  60b0628c  lw v0,-0x4fa0(v1)
  0038bfa8  60b07024  addiu s0,v1,-0x4fa0
  0038bfac  09004014  bne v0,zero,0x0038bfd4
  0038bfb0  0000bfff  _sd ra,0x0(sp)
  0038bfb4  26320e0c  jal 0x0038c898
  0038bfb8  00000000  _nop
  0038bfbc  4000053c  lui a1,0x40
  0038bfc0  4a00063c  lui a2,0x4a
  0038bfc4  6061a524  addiu a1,a1,0x6160
  0038bfc8  80b0c624  addiu a2,a2,-0x4f80
  0038bfcc  5ac00d0c  jal 0x00370168
  0038bfd0  2d200002  _move a0,s0
  0038bfd4  2d100002  move v0,s0
  0038bfd8  0000bfdf  ld ra,0x0(sp)
  0038bfdc  1000b07b  lq s0,0x10(sp)
  0038bfe0  0800e003  jr ra
  0038bfe4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038bfe8 @ 0038bfe8 ====
  0038bfe8  3e00023c  lui v0,0x3e
  0038bfec  f0ffbd27  addiu sp,sp,-0x10
  0038bff0  40004224  addiu v0,v0,0x40
  0038bff4  0000bfff  sd ra,0x0(sp)
  0038bff8  0100a530  andi a1,a1,0x1
  0038bffc  0500a010  beq a1,zero,0x0038c014
  0038c000  000082ac  _sw v0,0x0(a0)
  0038c004  3d00033c  lui v1,0x3d
  0038c008  e087628c  lw v0,-0x7820(v1)
  0038c00c  09f84000  jalr v0
  0038c010  00000000  _nop
  0038c014  0000bfdf  ld ra,0x0(sp)
  0038c018  0800e003  jr ra
  0038c01c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038c020 @ 0038c020 ====
  0038c020  c0ffbd27  addiu sp,sp,-0x40
  0038c024  4a00023c  lui v0,0x4a
  0038c028  2000b17f  sq s1,0x20(sp)
  0038c02c  1000b27f  sq s2,0x10(sp)
  0038c030  70b05124  addiu s1,v0,-0x4f90
  0038c034  70b0438c  lw v1,-0x4f90(v0)
  0038c038  2d904000  move s2,v0
  0038c03c  3000b07f  sq s0,0x30(sp)
  0038c040  0e006014  bne v1,zero,0x0038c07c
  0038c044  0000bfff  _sd ra,0x0(sp)
  0038c048  4100033c  lui v1,0x41
  0038c04c  c0eb628c  lw v0,-0x1440(v1)
  0038c050  05004014  bne v0,zero,0x0038c068
  0038c054  c0eb7024  _addiu s0,v1,-0x1440
  0038c058  4000053c  lui a1,0x40
  0038c05c  2d200002  move a0,s0
  0038c060  62c00d0c  jal 0x00370188
  0038c064  0061a524  _addiu a1,a1,0x6100
  0038c068  4000053c  lui a1,0x40
  0038c06c  2d202002  move a0,s1
  0038c070  8061a524  addiu a1,a1,0x6180
  0038c074  5ac00d0c  jal 0x00370168
  0038c078  2d300002  _move a2,s0
  0038c07c  70b04226  addiu v0,s2,-0x4f90
  0038c080  3000b07b  lq s0,0x30(sp)
  0038c084  2000b17b  lq s1,0x20(sp)
  0038c088  1000b27b  lq s2,0x10(sp)
  0038c08c  0000bfdf  ld ra,0x0(sp)
  0038c090  0800e003  jr ra
  0038c094  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038c098 @ 0038c098 ====
  0038c098  a0ffbd27  addiu sp,sp,-0x60
  0038c09c  1000b47f  sq s4,0x10(sp)
  0038c0a0  5000b07f  sq s0,0x50(sp)
  0038c0a4  2da08000  move s4,a0
  0038c0a8  4000b17f  sq s1,0x40(sp)
  0038c0ac  3000b27f  sq s2,0x30(sp)
  0038c0b0  2000b37f  sq s3,0x20(sp)
  0038c0b4  05008016  bne s4,zero,0x0038c0cc
  0038c0b8  0000bfff  _sd ra,0x0(sp)
  0038c0bc  16000010  b 0x0038c118
  0038c0c0  2d100000  _move v0,zero
  0038c0c4  14000010  b 0x0038c118
  0038c0c8  0000228e  _lw v0,0x0(s1)
  0038c0cc  582f0e0c  jal 0x0038bd60
  0038c0d0  2d900000  _move s2,zero
  0038c0d4  2d984000  move s3,v0
  0038c0d8  0004628e  lw v0,0x400(s3)
  0038c0dc  0d004018  blez v0,0x0038c114
  0038c0e0  2d806002  _move s0,s3
  0038c0e4  2d886002  move s1,s3
  0038c0e8  0000048e  lw a0,0x0(s0)
  0038c0ec  2d288002  move a1,s4
  0038c0f0  9d720d0c  jal 0x0035ca74
  0038c0f4  08008424  _addiu a0,a0,0x8
  0038c0f8  f2ff4010  beq v0,zero,0x0038c0c4
  0038c0fc  01005226  _addiu s2,s2,0x1
  0038c100  0004628e  lw v0,0x400(s3)
  0038c104  04001026  addiu s0,s0,0x4
  0038c108  2a104202  slt v0,s2,v0
  0038c10c  f6ff4014  bne v0,zero,0x0038c0e8
  0038c110  04003126  _addiu s1,s1,0x4
  0038c114  2d100000  move v0,zero
  0038c118  5000b07b  lq s0,0x50(sp)
  0038c11c  4000b17b  lq s1,0x40(sp)
  0038c120  3000b27b  lq s2,0x30(sp)
  0038c124  2000b37b  lq s3,0x20(sp)
  0038c128  1000b47b  lq s4,0x10(sp)
  0038c12c  0000bfdf  ld ra,0x0(sp)
  0038c130  0800e003  jr ra
  0038c134  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c138 @ 0038c138 ====
  0038c138  a0ffbd27  addiu sp,sp,-0x60
  0038c13c  1000b47f  sq s4,0x10(sp)
  0038c140  5000b07f  sq s0,0x50(sp)
  0038c144  2da08000  move s4,a0
  0038c148  4000b17f  sq s1,0x40(sp)
  0038c14c  3000b27f  sq s2,0x30(sp)
  0038c150  2000b37f  sq s3,0x20(sp)
  0038c154  05008016  bne s4,zero,0x0038c16c
  0038c158  0000bfff  _sd ra,0x0(sp)
  0038c15c  16000010  b 0x0038c1b8
  0038c160  2d100000  _move v0,zero
  0038c164  14000010  b 0x0038c1b8
  0038c168  0000228e  _lw v0,0x0(s1)
  0038c16c  762f0e0c  jal 0x0038bdd8
  0038c170  2d900000  _move s2,zero
  0038c174  2d984000  move s3,v0
  0038c178  0004628e  lw v0,0x400(s3)
  0038c17c  0d004018  blez v0,0x0038c1b4
  0038c180  2d806002  _move s0,s3
  0038c184  2d886002  move s1,s3
  0038c188  0000048e  lw a0,0x0(s0)
  0038c18c  2d288002  move a1,s4
  0038c190  9d720d0c  jal 0x0035ca74
  0038c194  08008424  _addiu a0,a0,0x8
  0038c198  f2ff4010  beq v0,zero,0x0038c164
  0038c19c  01005226  _addiu s2,s2,0x1
  0038c1a0  0004628e  lw v0,0x400(s3)
  0038c1a4  04001026  addiu s0,s0,0x4
  0038c1a8  2a104202  slt v0,s2,v0
  0038c1ac  f6ff4014  bne v0,zero,0x0038c188
  0038c1b0  04003126  _addiu s1,s1,0x4
  0038c1b4  2d100000  move v0,zero
  0038c1b8  5000b07b  lq s0,0x50(sp)
  0038c1bc  4000b17b  lq s1,0x40(sp)
  0038c1c0  3000b27b  lq s2,0x30(sp)
  0038c1c4  2000b37b  lq s3,0x20(sp)
  0038c1c8  1000b47b  lq s4,0x10(sp)
  0038c1cc  0000bfdf  ld ra,0x0(sp)
  0038c1d0  0800e003  jr ra
  0038c1d4  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c1d8 @ 0038c1d8 ====
  0038c1d8  a0ffbd27  addiu sp,sp,-0x60
  0038c1dc  1000b47f  sq s4,0x10(sp)
  0038c1e0  5000b07f  sq s0,0x50(sp)
  0038c1e4  2da08000  move s4,a0
  0038c1e8  4000b17f  sq s1,0x40(sp)
  0038c1ec  3000b27f  sq s2,0x30(sp)
  0038c1f0  2000b37f  sq s3,0x20(sp)
  0038c1f4  05008016  bne s4,zero,0x0038c20c
  0038c1f8  0000bfff  _sd ra,0x0(sp)
  0038c1fc  16000010  b 0x0038c258
  0038c200  2d100000  _move v0,zero
  0038c204  14000010  b 0x0038c258
  0038c208  0000228e  _lw v0,0x0(s1)
  0038c20c  1a2d0e0c  jal 0x0038b468
  0038c210  2d900000  _move s2,zero
  0038c214  2d984000  move s3,v0
  0038c218  0004628e  lw v0,0x400(s3)
  0038c21c  0d004018  blez v0,0x0038c254
  0038c220  2d806002  _move s0,s3
  0038c224  2d886002  move s1,s3
  0038c228  0000048e  lw a0,0x0(s0)
  0038c22c  2d288002  move a1,s4
  0038c230  9d720d0c  jal 0x0035ca74
  0038c234  08008424  _addiu a0,a0,0x8
  0038c238  f2ff4010  beq v0,zero,0x0038c204
  0038c23c  01005226  _addiu s2,s2,0x1
  0038c240  0004628e  lw v0,0x400(s3)
  0038c244  04001026  addiu s0,s0,0x4
  0038c248  2a104202  slt v0,s2,v0
  0038c24c  f6ff4014  bne v0,zero,0x0038c228
  0038c250  04003126  _addiu s1,s1,0x4
  0038c254  2d100000  move v0,zero
  0038c258  5000b07b  lq s0,0x50(sp)
  0038c25c  4000b17b  lq s1,0x40(sp)
  0038c260  3000b27b  lq s2,0x30(sp)
  0038c264  2000b37b  lq s3,0x20(sp)
  0038c268  1000b47b  lq s4,0x10(sp)
  0038c26c  0000bfdf  ld ra,0x0(sp)
  0038c270  0800e003  jr ra
  0038c274  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c278 @ 0038c278 ====
  0038c278  a0ffbd27  addiu sp,sp,-0x60
  0038c27c  1000b47f  sq s4,0x10(sp)
  0038c280  5000b07f  sq s0,0x50(sp)
  0038c284  2da08000  move s4,a0
  0038c288  4000b17f  sq s1,0x40(sp)
  0038c28c  3000b27f  sq s2,0x30(sp)
  0038c290  2000b37f  sq s3,0x20(sp)
  0038c294  05008016  bne s4,zero,0x0038c2ac
  0038c298  0000bfff  _sd ra,0x0(sp)
  0038c29c  16000010  b 0x0038c2f8
  0038c2a0  2d100000  _move v0,zero
  0038c2a4  14000010  b 0x0038c2f8
  0038c2a8  0000228e  _lw v0,0x0(s1)
  0038c2ac  942f0e0c  jal 0x0038be50
  0038c2b0  2d900000  _move s2,zero
  0038c2b4  2d984000  move s3,v0
  0038c2b8  0004628e  lw v0,0x400(s3)
  0038c2bc  0d004018  blez v0,0x0038c2f4
  0038c2c0  2d806002  _move s0,s3
  0038c2c4  2d886002  move s1,s3
  0038c2c8  0000048e  lw a0,0x0(s0)
  0038c2cc  2d288002  move a1,s4
  0038c2d0  9d720d0c  jal 0x0035ca74
  0038c2d4  08008424  _addiu a0,a0,0x8
  0038c2d8  f2ff4010  beq v0,zero,0x0038c2a4
  0038c2dc  01005226  _addiu s2,s2,0x1
  0038c2e0  0004628e  lw v0,0x400(s3)
  0038c2e4  04001026  addiu s0,s0,0x4
  0038c2e8  2a104202  slt v0,s2,v0
  0038c2ec  f6ff4014  bne v0,zero,0x0038c2c8
  0038c2f0  04003126  _addiu s1,s1,0x4
  0038c2f4  2d100000  move v0,zero
  0038c2f8  5000b07b  lq s0,0x50(sp)
  0038c2fc  4000b17b  lq s1,0x40(sp)
  0038c300  3000b27b  lq s2,0x30(sp)
  0038c304  2000b37b  lq s3,0x20(sp)
  0038c308  1000b47b  lq s4,0x10(sp)
  0038c30c  0000bfdf  ld ra,0x0(sp)
  0038c310  0800e003  jr ra
  0038c314  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c318 @ 0038c318 ====
  0038c318  c0ffbd27  addiu sp,sp,-0x40
  0038c31c  4a00023c  lui v0,0x4a
  0038c320  2000b17f  sq s1,0x20(sp)
  0038c324  1000b27f  sq s2,0x10(sp)
  0038c328  90b05124  addiu s1,v0,-0x4f70
  0038c32c  90b0438c  lw v1,-0x4f70(v0)
  0038c330  2d904000  move s2,v0
  0038c334  3000b07f  sq s0,0x30(sp)
  0038c338  0e006014  bne v1,zero,0x0038c374
  0038c33c  0000bfff  _sd ra,0x0(sp)
  0038c340  4100033c  lui v1,0x41
  0038c344  c0eb628c  lw v0,-0x1440(v1)
  0038c348  05004014  bne v0,zero,0x0038c360
  0038c34c  c0eb7024  _addiu s0,v1,-0x1440
  0038c350  4000053c  lui a1,0x40
  0038c354  2d200002  move a0,s0
  0038c358  62c00d0c  jal 0x00370188
  0038c35c  d861a524  _addiu a1,a1,0x61d8
  0038c360  4000053c  lui a1,0x40
  0038c364  2d202002  move a0,s1
  0038c368  e861a524  addiu a1,a1,0x61e8
  0038c36c  5ac00d0c  jal 0x00370168
  0038c370  2d300002  _move a2,s0
  0038c374  90b04226  addiu v0,s2,-0x4f70
  0038c378  3000b07b  lq s0,0x30(sp)
  0038c37c  2000b17b  lq s1,0x20(sp)
  0038c380  1000b27b  lq s2,0x10(sp)
  0038c384  0000bfdf  ld ra,0x0(sp)
  0038c388  0800e003  jr ra
  0038c38c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038c390 @ 0038c390 ====
  0038c390  e0ffbd27  addiu sp,sp,-0x20
  0038c394  1000b07f  sq s0,0x10(sp)
  0038c398  2d80a000  move s0,a1
  0038c39c  0b000012  beq s0,zero,0x0038c3cc
  0038c3a0  0000bfff  _sd ra,0x0(sp)
  0038c3a4  488e0b0c  jal 0x002e3920
  0038c3a8  2d200002  _move a0,s0
  0038c3ac  08004050  beql v0,zero,0x0038c3d0
  0038c3b0  2d100000  _move v0,zero
  0038c3b4  488e0b0c  jal 0x002e3920
  0038c3b8  2d200002  _move a0,s0
  0038c3bc  00004480  lb a0,0x0(v0)
  0038c3c0  5f000324  li v1,0x5f
  0038c3c4  02008310  beq a0,v1,0x0038c3d0
  0038c3c8  01000224  _li v0,0x1
  0038c3cc  2d100000  move v0,zero
  0038c3d0  1000b07b  lq s0,0x10(sp)
  0038c3d4  0000bfdf  ld ra,0x0(sp)
  0038c3d8  0800e003  jr ra
  0038c3dc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038c3e0 @ 0038c3e0 ====
  0038c3e0  d0ffbd27  addiu sp,sp,-0x30
  0038c3e4  1000b17f  sq s1,0x10(sp)
  0038c3e8  4500113c  lui s1,0x45
  0038c3ec  2000b07f  sq s0,0x20(sp)
  0038c3f0  2012228e  lw v0,0x1220(s1)
  0038c3f4  3f00103c  lui s0,0x3f
  0038c3f8  08004014  bne v0,zero,0x0038c41c
  0038c3fc  0000bfff  _sd ra,0x0(sp)
  0038c400  7e310e0c  jal 0x0038c5f8
  0038c404  88ab0426  _addiu a0,s0,-0x5478
  0038c408  01000224  li v0,0x1
  0038c40c  2e00043c  lui a0,0x2e
  0038c410  201222ae  sw v0,0x1220(s1)
  0038c414  a4790d0c  jal 0x0035e690
  0038c418  081e8424  _addiu a0,a0,0x1e08
  0038c41c  88ab0226  addiu v0,s0,-0x5478
  0038c420  1000b17b  lq s1,0x10(sp)
  0038c424  2000b07b  lq s0,0x20(sp)
  0038c428  0000bfdf  ld ra,0x0(sp)
  0038c42c  0800e003  jr ra
  0038c430  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038c438 @ 0038c438 ====
  0038c438  a0ffbd27  addiu sp,sp,-0x60
  0038c43c  1000b47f  sq s4,0x10(sp)
  0038c440  5000b07f  sq s0,0x50(sp)
  0038c444  2da08000  move s4,a0
  0038c448  4000b17f  sq s1,0x40(sp)
  0038c44c  3000b27f  sq s2,0x30(sp)
  0038c450  2000b37f  sq s3,0x20(sp)
  0038c454  05008016  bne s4,zero,0x0038c46c
  0038c458  0000bfff  _sd ra,0x0(sp)
  0038c45c  16000010  b 0x0038c4b8
  0038c460  2d100000  _move v0,zero
  0038c464  14000010  b 0x0038c4b8
  0038c468  0000228e  _lw v0,0x0(s1)
  0038c46c  f8300e0c  jal 0x0038c3e0
  0038c470  2d900000  _move s2,zero
  0038c474  2d984000  move s3,v0
  0038c478  0004628e  lw v0,0x400(s3)
  0038c47c  0d004018  blez v0,0x0038c4b4
  0038c480  2d806002  _move s0,s3
  0038c484  2d886002  move s1,s3
  0038c488  0000048e  lw a0,0x0(s0)
  0038c48c  2d288002  move a1,s4
  0038c490  9d720d0c  jal 0x0035ca74
  0038c494  08008424  _addiu a0,a0,0x8
  0038c498  f2ff4010  beq v0,zero,0x0038c464
  0038c49c  01005226  _addiu s2,s2,0x1
  0038c4a0  0004628e  lw v0,0x400(s3)
  0038c4a4  04001026  addiu s0,s0,0x4
  0038c4a8  2a104202  slt v0,s2,v0
  0038c4ac  f6ff4014  bne v0,zero,0x0038c488
  0038c4b0  04003126  _addiu s1,s1,0x4
  0038c4b4  2d100000  move v0,zero
  0038c4b8  5000b07b  lq s0,0x50(sp)
  0038c4bc  4000b17b  lq s1,0x40(sp)
  0038c4c0  3000b27b  lq s2,0x30(sp)
  0038c4c4  2000b37b  lq s3,0x20(sp)
  0038c4c8  1000b47b  lq s4,0x10(sp)
  0038c4cc  0000bfdf  ld ra,0x0(sp)
  0038c4d0  0800e003  jr ra
  0038c4d4  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c4d8 @ 0038c4d8 ====
  0038c4d8  a0ffbd27  addiu sp,sp,-0x60
  0038c4dc  1000b47f  sq s4,0x10(sp)
  0038c4e0  5000b07f  sq s0,0x50(sp)
  0038c4e4  2da08000  move s4,a0
  0038c4e8  4000b17f  sq s1,0x40(sp)
  0038c4ec  3000b27f  sq s2,0x30(sp)
  0038c4f0  2000b37f  sq s3,0x20(sp)
  0038c4f4  05008016  bne s4,zero,0x0038c50c
  0038c4f8  0000bfff  _sd ra,0x0(sp)
  0038c4fc  16000010  b 0x0038c558
  0038c500  2d100000  _move v0,zero
  0038c504  14000010  b 0x0038c558
  0038c508  0000228e  _lw v0,0x0(s1)
  0038c50c  8c2e0e0c  jal 0x0038ba30
  0038c510  2d900000  _move s2,zero
  0038c514  2d984000  move s3,v0
  0038c518  0004628e  lw v0,0x400(s3)
  0038c51c  0d004018  blez v0,0x0038c554
  0038c520  2d806002  _move s0,s3
  0038c524  2d886002  move s1,s3
  0038c528  0000048e  lw a0,0x0(s0)
  0038c52c  2d288002  move a1,s4
  0038c530  9d720d0c  jal 0x0035ca74
  0038c534  08008424  _addiu a0,a0,0x8
  0038c538  f2ff4010  beq v0,zero,0x0038c504
  0038c53c  01005226  _addiu s2,s2,0x1
  0038c540  0004628e  lw v0,0x400(s3)
  0038c544  04001026  addiu s0,s0,0x4
  0038c548  2a104202  slt v0,s2,v0
  0038c54c  f6ff4014  bne v0,zero,0x0038c528
  0038c550  04003126  _addiu s1,s1,0x4
  0038c554  2d100000  move v0,zero
  0038c558  5000b07b  lq s0,0x50(sp)
  0038c55c  4000b17b  lq s1,0x40(sp)
  0038c560  3000b27b  lq s2,0x30(sp)
  0038c564  2000b37b  lq s3,0x20(sp)
  0038c568  1000b47b  lq s4,0x10(sp)
  0038c56c  0000bfdf  ld ra,0x0(sp)
  0038c570  0800e003  jr ra
  0038c574  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038c578 @ 0038c578 ====
  0038c578  f0ffbd27  addiu sp,sp,-0x10
  0038c57c  3e00023c  lui v0,0x3e
  0038c580  0000bfff  sd ra,0x0(sp)
  0038c584  10014224  addiu v0,v0,0x110
  0038c588  0100a530  andi a1,a1,0x1
  0038c58c  0300a010  beq a1,zero,0x0038c59c
  0038c590  100182ac  _sw v0,0x110(a0)
  0038c594  521f040c  jal 0x00107d48
  0038c598  00000000  _nop
  0038c59c  0000bfdf  ld ra,0x0(sp)
  0038c5a0  0800e003  jr ra
  0038c5a4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CBrainClass_0038c5a8 @ 0038c5a8 ====
  0038c5a8  e0ffbd27  addiu sp,sp,-0x20
  0038c5ac  4a00033c  lui v1,0x4a
  0038c5b0  1000b07f  sq s0,0x10(sp)
  0038c5b4  a0b0628c  lw v0,-0x4f60(v1)
  0038c5b8  a0b07024  addiu s0,v1,-0x4f60
  0038c5bc  09004014  bne v0,zero,0x0038c5e4
  0038c5c0  0000bfff  _sd ra,0x0(sp)
  0038c5c4  ea310e0c  jal 0x0038c7a8
  0038c5c8  00000000  _nop
  0038c5cc  4000053c  lui a1,0x40
  0038c5d0  4100063c  lui a2,0x41
  0038c5d4  f861a524  addiu a1,a1,0x61f8
  0038c5d8  f0ebc624  addiu a2,a2,-0x1410
  0038c5dc  5ac00d0c  jal 0x00370168
  0038c5e0  2d200002  _move a0,s0
  0038c5e4  2d100002  move v0,s0
  0038c5e8  0000bfdf  ld ra,0x0(sp)
  0038c5ec  1000b07b  lq s0,0x10(sp)
  0038c5f0  0800e003  jr ra
  0038c5f4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038c5f8 @ 0038c5f8 ====
  0038c5f8  3c00033c  lui v1,0x3c
  0038c5fc  a17f6290  lbu v0,0x7fa1(v1)
  0038c600  01004054  bnel v0,zero,0x0038c608
  0038c604  000480ac  _sw zero,0x400(a0)
  0038c608  a17f60a0  sb zero,0x7fa1(v1)
  0038c60c  0800e003  jr ra
  0038c610  2d108000  _move v0,a0

# ==== FUN_0038c618 @ 0038c618 ====
  0038c618  50ffbd27  addiu sp,sp,-0xb0
  0038c61c  ff000831  andi t0,t0,0xff
  0038c620  5000b57f  sq s5,0x50(sp)
  0038c624  ff002931  andi t1,t1,0xff
  0038c628  4000b67f  sq s6,0x40(sp)
  0038c62c  2da88000  move s5,a0
  0038c630  3e00023c  lui v0,0x3e
  0038c634  a000b07f  sq s0,0xa0(sp)
  0038c638  6000b47f  sq s4,0x60(sp)
  0038c63c  10014224  addiu v0,v0,0x110
  0038c640  3000b77f  sq s7,0x30(sp)
  0038c644  0800b626  addiu s6,s5,0x8
  0038c648  2000be7f  sq s8,0x20(sp)
  0038c64c  2db8c000  move s7,a2
  0038c650  9000b17f  sq s1,0x90(sp)
  0038c654  2df0e000  move s8,a3
  0038c658  8000b27f  sq s2,0x80(sp)
  0038c65c  2d20c002  move a0,s6
  0038c660  7000b37f  sq s3,0x70(sp)
  0038c664  2da00000  move s4,zero
  0038c668  1000bfff  sd ra,0x10(sp)
  0038c66c  0000a8af  sw t0,0x0(sp)
  0038c670  0400a9af  sw t1,0x4(sp)
  0038c674  f0720d0c  jal 0x0035cbc0
  0038c678  1001a2ae  _sw v0,0x110(s5)
  0038c67c  762f0e0c  jal 0x0038bdd8
  0038c680  00000000  _nop
  0038c684  2d804000  move s0,v0
  0038c688  0004028e  lw v0,0x400(s0)
  0038c68c  11004058  blezl v0,0x0038c6d4
  0038c690  0004038e  _lw v1,0x400(s0)
  0038c694  2d900002  move s2,s0
  0038c698  2d980002  move s3,s0
  0038c69c  00000000  nop
  0038c6a0  0000448e  lw a0,0x0(s2)
  0038c6a4  2d886002  move s1,s3
  0038c6a8  2d28c002  move a1,s6
  0038c6ac  9d720d0c  jal 0x0035ca74
  0038c6b0  08008424  _addiu a0,a0,0x8
  0038c6b4  0c004010  beq v0,zero,0x0038c6e8
  0038c6b8  01009426  _addiu s4,s4,0x1
  0038c6bc  0004028e  lw v0,0x400(s0)
  0038c6c0  04003326  addiu s3,s1,0x4
  0038c6c4  2a108202  slt v0,s4,v0
  0038c6c8  f5ff4014  bne v0,zero,0x0038c6a0
  0038c6cc  04005226  _addiu s2,s2,0x4
  0038c6d0  0004038e  lw v1,0x400(s0)
  0038c6d4  00010224  li v0,0x100
  0038c6d8  06006214  bne v1,v0,0x0038c6f4
  0038c6dc  80180300  _sll v1,v1,0x2
  0038c6e0  0a000010  b 0x0038c70c
  0038c6e4  2d200000  _move a0,zero
  0038c6e8  000075ae  sw s5,0x0(s3)
  0038c6ec  07000010  b 0x0038c70c
  0038c6f0  01000424  _li a0,0x1
  0038c6f4  01000424  li a0,0x1
  0038c6f8  21180302  addu v1,s0,v1
  0038c6fc  000075ac  sw s5,0x0(v1)
  0038c700  0004028e  lw v0,0x400(s0)
  0038c704  01004224  addiu v0,v0,0x1
  0038c708  000402ae  sw v0,0x400(s0)
  0038c70c  ff008230  andi v0,a0,0xff
  0038c710  03004014  bne v0,zero,0x0038c720
  0038c714  ffff0224  _li v0,-0x1
  0038c718  06000010  b 0x0038c734
  0038c71c  0000a2ae  _sw v0,0x0(s5)
  0038c720  762f0e0c  jal 0x0038bdd8
  0038c724  00000000  _nop
  0038c728  0004438c  lw v1,0x400(v0)
  0038c72c  ffff6324  addiu v1,v1,-0x1
  0038c730  0000a3ae  sw v1,0x0(s5)
  0038c734  0400b7ae  sw s7,0x4(s5)
  0038c738  01000224  li v0,0x1
  0038c73c  0801beae  sw s8,0x108(s5)
  0038c740  0000a38f  lw v1,0x0(sp)
  0038c744  04006254  bnel v1,v0,0x0038c758
  0038c748  0c01a0ae  _sw zero,0x10c(s5)
  0038c74c  2e840b0c  jal 0x002e10b8
  0038c750  00000000  _nop
  0038c754  0c01a2ae  sw v0,0x10c(s5)
  0038c758  0400a28f  lw v0,0x4(sp)
  0038c75c  05004010  beq v0,zero,0x0038c774
  0038c760  3c00043c  _lui a0,0x3c
  0038c764  0c01a38e  lw v1,0x10c(s5)
  0038c768  207a828c  lw v0,0x7a20(a0)
  0038c76c  25104300  or v0,v0,v1
  0038c770  207a82ac  sw v0,0x7a20(a0)
  0038c774  2d10a002  move v0,s5
  0038c778  a000b07b  lq s0,0xa0(sp)
  0038c77c  9000b17b  lq s1,0x90(sp)
  0038c780  8000b27b  lq s2,0x80(sp)
  0038c784  7000b37b  lq s3,0x70(sp)
  0038c788  6000b47b  lq s4,0x60(sp)
  0038c78c  5000b57b  lq s5,0x50(sp)
  0038c790  4000b67b  lq s6,0x40(sp)
  0038c794  3000b77b  lq s7,0x30(sp)
  0038c798  2000be7b  lq s8,0x20(sp)
  0038c79c  1000bfdf  ld ra,0x10(sp)
  0038c7a0  0800e003  jr ra
  0038c7a4  b000bd27  _addiu sp,sp,0xb0

# ==== Kaimt_CMetaClass2ZQ24Kaim6CBrainZPFPQ24Kaim7CEntityRQ24Kaim12CActionClass_PQ24Kaim6CBrain_0038c7a8 @ 0038c7a8 ====
  0038c7a8  e0ffbd27  addiu sp,sp,-0x20
  0038c7ac  4100033c  lui v1,0x41
  0038c7b0  1000b07f  sq s0,0x10(sp)
  0038c7b4  f0eb628c  lw v0,-0x1410(v1)
  0038c7b8  f0eb7024  addiu s0,v1,-0x1410
  0038c7bc  05004014  bne v0,zero,0x0038c7d4
  0038c7c0  0000bfff  _sd ra,0x0(sp)
  0038c7c4  4000053c  lui a1,0x40
  0038c7c8  2d200002  move a0,s0
  0038c7cc  62c00d0c  jal 0x00370188
  0038c7d0  1062a524  _addiu a1,a1,0x6210
  0038c7d4  2d100002  move v0,s0
  0038c7d8  0000bfdf  ld ra,0x0(sp)
  0038c7dc  1000b07b  lq s0,0x10(sp)
  0038c7e0  0800e003  jr ra
  0038c7e4  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038c7e8 @ 0038c7e8 ====
  0038c7e8  3e00023c  lui v0,0x3e
  0038c7ec  f0ffbd27  addiu sp,sp,-0x10
  0038c7f0  40004224  addiu v0,v0,0x40
  0038c7f4  0000bfff  sd ra,0x0(sp)
  0038c7f8  0100a530  andi a1,a1,0x1
  0038c7fc  0500a010  beq a1,zero,0x0038c814
  0038c800  000082ac  _sw v0,0x0(a0)
  0038c804  3d00033c  lui v1,0x3d
  0038c808  e087628c  lw v0,-0x7820(v1)
  0038c80c  09f84000  jalr v0
  0038c810  00000000  _nop
  0038c814  0000bfdf  ld ra,0x0(sp)
  0038c818  0800e003  jr ra
  0038c81c  1000bd27  _addiu sp,sp,0x10

# ==== FUN_0038c820 @ 0038c820 ====
  0038c820  c0ffbd27  addiu sp,sp,-0x40
  0038c824  4a00023c  lui v0,0x4a
  0038c828  2000b17f  sq s1,0x20(sp)
  0038c82c  1000b27f  sq s2,0x10(sp)
  0038c830  b0b05124  addiu s1,v0,-0x4f50
  0038c834  b0b0438c  lw v1,-0x4f50(v0)
  0038c838  2d904000  move s2,v0
  0038c83c  3000b07f  sq s0,0x30(sp)
  0038c840  0e006014  bne v1,zero,0x0038c87c
  0038c844  0000bfff  _sd ra,0x0(sp)
  0038c848  4100033c  lui v1,0x41
  0038c84c  c0eb628c  lw v0,-0x1440(v1)
  0038c850  05004014  bne v0,zero,0x0038c868
  0038c854  c0eb7024  _addiu s0,v1,-0x1440
  0038c858  4000053c  lui a1,0x40
  0038c85c  2d200002  move a0,s0
  0038c860  62c00d0c  jal 0x00370188
  0038c864  8062a524  _addiu a1,a1,0x6280
  0038c868  4000053c  lui a1,0x40
  0038c86c  2d202002  move a0,s1
  0038c870  9062a524  addiu a1,a1,0x6290
  0038c874  5ac00d0c  jal 0x00370168
  0038c878  2d300002  _move a2,s0
  0038c87c  b0b04226  addiu v0,s2,-0x4f50
  0038c880  3000b07b  lq s0,0x30(sp)
  0038c884  2000b17b  lq s1,0x20(sp)
  0038c888  1000b27b  lq s2,0x10(sp)
  0038c88c  0000bfdf  ld ra,0x0(sp)
  0038c890  0800e003  jr ra
  0038c894  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038c898 @ 0038c898 ====
  0038c898  c0ffbd27  addiu sp,sp,-0x40
  0038c89c  4a00023c  lui v0,0x4a
  0038c8a0  2000b17f  sq s1,0x20(sp)
  0038c8a4  1000b27f  sq s2,0x10(sp)
  0038c8a8  80b05124  addiu s1,v0,-0x4f80
  0038c8ac  80b0438c  lw v1,-0x4f80(v0)
  0038c8b0  2d904000  move s2,v0
  0038c8b4  3000b07f  sq s0,0x30(sp)
  0038c8b8  0e006014  bne v1,zero,0x0038c8f4
  0038c8bc  0000bfff  _sd ra,0x0(sp)
  0038c8c0  4100033c  lui v1,0x41
  0038c8c4  c0eb628c  lw v0,-0x1440(v1)
  0038c8c8  05004014  bne v0,zero,0x0038c8e0
  0038c8cc  c0eb7024  _addiu s0,v1,-0x1440
  0038c8d0  4000053c  lui a1,0x40
  0038c8d4  2d200002  move a0,s0
  0038c8d8  62c00d0c  jal 0x00370188
  0038c8dc  b862a524  _addiu a1,a1,0x62b8
  0038c8e0  4000053c  lui a1,0x40
  0038c8e4  2d202002  move a0,s1
  0038c8e8  c862a524  addiu a1,a1,0x62c8
  0038c8ec  5ac00d0c  jal 0x00370168
  0038c8f0  2d300002  _move a2,s0
  0038c8f4  80b04226  addiu v0,s2,-0x4f80
  0038c8f8  3000b07b  lq s0,0x30(sp)
  0038c8fc  2000b17b  lq s1,0x20(sp)
  0038c900  1000b27b  lq s2,0x10(sp)
  0038c904  0000bfdf  ld ra,0x0(sp)
  0038c908  0800e003  jr ra
  0038c90c  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CObject_0038c928 @ 0038c928 ====
  0038c928  c0ffbd27  addiu sp,sp,-0x40
  0038c92c  4a00023c  lui v0,0x4a
  0038c930  2000b17f  sq s1,0x20(sp)
  0038c934  1000b27f  sq s2,0x10(sp)
  0038c938  c0b05124  addiu s1,v0,-0x4f40
  0038c93c  c0b0438c  lw v1,-0x4f40(v0)
  0038c940  2d904000  move s2,v0
  0038c944  3000b07f  sq s0,0x30(sp)
  0038c948  0e006014  bne v1,zero,0x0038c984
  0038c94c  0000bfff  _sd ra,0x0(sp)
  0038c950  4100033c  lui v1,0x41
  0038c954  c0eb628c  lw v0,-0x1440(v1)
  0038c958  05004014  bne v0,zero,0x0038c970
  0038c95c  c0eb7024  _addiu s0,v1,-0x1440
  0038c960  4000053c  lui a1,0x40
  0038c964  2d200002  move a0,s0
  0038c968  62c00d0c  jal 0x00370188
  0038c96c  e862a524  _addiu a1,a1,0x62e8
  0038c970  4000053c  lui a1,0x40
  0038c974  2d202002  move a0,s1
  0038c978  f862a524  addiu a1,a1,0x62f8
  0038c97c  5ac00d0c  jal 0x00370168
  0038c980  2d300002  _move a2,s0
  0038c984  c0b04226  addiu v0,s2,-0x4f40
  0038c988  3000b07b  lq s0,0x30(sp)
  0038c98c  2000b17b  lq s1,0x20(sp)
  0038c990  1000b27b  lq s2,0x10(sp)
  0038c994  0000bfdf  ld ra,0x0(sp)
  0038c998  0800e003  jr ra
  0038c99c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038c9a0 @ 0038c9a0 ====
  0038c9a0  3e00023c  lui v0,0x3e
  0038c9a4  f0ffbd27  addiu sp,sp,-0x10
  0038c9a8  40004224  addiu v0,v0,0x40
  0038c9ac  0000bfff  sd ra,0x0(sp)
  0038c9b0  0100a530  andi a1,a1,0x1
  0038c9b4  0500a010  beq a1,zero,0x0038c9cc
  0038c9b8  000082ac  _sw v0,0x0(a0)
  0038c9bc  3d00033c  lui v1,0x3d
  0038c9c0  e087628c  lw v0,-0x7820(v1)
  0038c9c4  09f84000  jalr v0
  0038c9c8  00000000  _nop
  0038c9cc  0000bfdf  ld ra,0x0(sp)
  0038c9d0  0800e003  jr ra
  0038c9d4  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038c9d8 @ 0038c9d8 ====
  0038c9d8  c0ffbd27  addiu sp,sp,-0x40
  0038c9dc  4a00023c  lui v0,0x4a
  0038c9e0  2000b17f  sq s1,0x20(sp)
  0038c9e4  1000b27f  sq s2,0x10(sp)
  0038c9e8  d0b05124  addiu s1,v0,-0x4f30
  0038c9ec  d0b0438c  lw v1,-0x4f30(v0)
  0038c9f0  2d904000  move s2,v0
  0038c9f4  3000b07f  sq s0,0x30(sp)
  0038c9f8  0e006014  bne v1,zero,0x0038ca34
  0038c9fc  0000bfff  _sd ra,0x0(sp)
  0038ca00  4100033c  lui v1,0x41
  0038ca04  c0eb628c  lw v0,-0x1440(v1)
  0038ca08  05004014  bne v0,zero,0x0038ca20
  0038ca0c  c0eb7024  _addiu s0,v1,-0x1440
  0038ca10  4000053c  lui a1,0x40
  0038ca14  2d200002  move a0,s0
  0038ca18  62c00d0c  jal 0x00370188
  0038ca1c  e862a524  _addiu a1,a1,0x62e8
  0038ca20  4000053c  lui a1,0x40
  0038ca24  2d202002  move a0,s1
  0038ca28  5063a524  addiu a1,a1,0x6350
  0038ca2c  5ac00d0c  jal 0x00370168
  0038ca30  2d300002  _move a2,s0
  0038ca34  d0b04226  addiu v0,s2,-0x4f30
  0038ca38  3000b07b  lq s0,0x30(sp)
  0038ca3c  2000b17b  lq s1,0x20(sp)
  0038ca40  1000b27b  lq s2,0x10(sp)
  0038ca44  0000bfdf  ld ra,0x0(sp)
  0038ca48  0800e003  jr ra
  0038ca4c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038ca50 @ 0038ca50 ====
  0038ca50  b0ffbd27  addiu sp,sp,-0x50
  0038ca54  3f00023c  lui v0,0x3f
  0038ca58  3000b17f  sq s1,0x30(sp)
  0038ca5c  e88e4224  addiu v0,v0,-0x7118
  0038ca60  2000b27f  sq s2,0x20(sp)
  0038ca64  2d888000  move s1,a0
  0038ca68  1000b37f  sq s3,0x10(sp)
  0038ca6c  2d90a000  move s2,a1
  0038ca70  4000b07f  sq s0,0x40(sp)
  0038ca74  0000bfff  sd ra,0x0(sp)
  0038ca78  000022ae  sw v0,0x0(s1)
  0038ca7c  1800238e  lw v1,0x18(s1)
  0038ca80  19006010  beq v1,zero,0x0038cae8
  0038ca84  3e00133c  _lui s3,0x3e
  0038ca88  0400258e  lw a1,0x4(s1)
  0038ca8c  1600a010  beq a1,zero,0x0038cae8
  0038ca90  14000224  _li v0,0x14
  0038ca94  f0ffa38c  lw v1,-0x10(a1)
  0038ca98  18206200  mult a0,v1,v0
  0038ca9c  21808500  addu s0,a0,a1
  0038caa0  0d00b050  beql a1,s0,0x0038cad8
  0038caa4  0400248e  _lw a0,0x4(s1)
  0038caa8  ecff1026  addiu s0,s0,-0x14
  0038caac  00000000  nop
  0038cab0  2d280000  move a1,zero
  0038cab4  0000028e  lw v0,0x0(s0)
  0038cab8  08004484  lh a0,0x8(v0)
  0038cabc  0c00438c  lw v1,0xc(v0)
  0038cac0  09f86000  jalr v1
  0038cac4  21200402  _addu a0,s0,a0
  0038cac8  0400228e  lw v0,0x4(s1)
  0038cacc  f8ff5014  bne v0,s0,0x0038cab0
  0038cad0  ecff1026  _addiu s0,s0,-0x14
  0038cad4  0400248e  lw a0,0x4(s1)
  0038cad8  3d00023c  lui v0,0x3d
  0038cadc  e087438c  lw v1,-0x7820(v0)
  0038cae0  09f86000  jalr v1
  0038cae4  f0ff8424  _addiu a0,a0,-0x10
  0038cae8  40006226  addiu v0,s3,0x40
  0038caec  01004332  andi v1,s2,0x1
  0038caf0  05006010  beq v1,zero,0x0038cb08
  0038caf4  000022ae  _sw v0,0x0(s1)
  0038caf8  3d00033c  lui v1,0x3d
  0038cafc  e087628c  lw v0,-0x7820(v1)
  0038cb00  09f84000  jalr v0
  0038cb04  2d202002  _move a0,s1
  0038cb08  4000b07b  lq s0,0x40(sp)
  0038cb0c  3000b17b  lq s1,0x30(sp)
  0038cb10  2000b27b  lq s2,0x20(sp)
  0038cb14  1000b37b  lq s3,0x10(sp)
  0038cb18  0000bfdf  ld ra,0x0(sp)
  0038cb1c  0800e003  jr ra
  0038cb20  5000bd27  _addiu sp,sp,0x50

# ==== FUN_0038cb28 @ 0038cb28 ====
  0038cb28  c0ffbd27  addiu sp,sp,-0x40
  0038cb2c  4a00023c  lui v0,0x4a
  0038cb30  2000b17f  sq s1,0x20(sp)
  0038cb34  1000b27f  sq s2,0x10(sp)
  0038cb38  e8b45124  addiu s1,v0,-0x4b18
  0038cb3c  e8b4438c  lw v1,-0x4b18(v0)
  0038cb40  2d904000  move s2,v0
  0038cb44  3000b07f  sq s0,0x30(sp)
  0038cb48  0e006014  bne v1,zero,0x0038cb84
  0038cb4c  0000bfff  _sd ra,0x0(sp)
  0038cb50  4100033c  lui v1,0x41
  0038cb54  c0eb628c  lw v0,-0x1440(v1)
  0038cb58  05004014  bne v0,zero,0x0038cb70
  0038cb5c  c0eb7024  _addiu s0,v1,-0x1440
  0038cb60  4000053c  lui a1,0x40
  0038cb64  2d200002  move a0,s0
  0038cb68  62c00d0c  jal 0x00370188
  0038cb6c  9863a524  _addiu a1,a1,0x6398
  0038cb70  4000053c  lui a1,0x40
  0038cb74  2d202002  move a0,s1
  0038cb78  d863a524  addiu a1,a1,0x63d8
  0038cb7c  5ac00d0c  jal 0x00370168
  0038cb80  2d300002  _move a2,s0
  0038cb84  e8b44226  addiu v0,s2,-0x4b18
  0038cb88  3000b07b  lq s0,0x30(sp)
  0038cb8c  2000b17b  lq s1,0x20(sp)
  0038cb90  1000b27b  lq s2,0x10(sp)
  0038cb94  0000bfdf  ld ra,0x0(sp)
  0038cb98  0800e003  jr ra
  0038cb9c  4000bd27  _addiu sp,sp,0x40

# ==== Kaim_CObject_0038cba8 @ 0038cba8 ====
  0038cba8  c0ffbd27  addiu sp,sp,-0x40
  0038cbac  4a00023c  lui v0,0x4a
  0038cbb0  2000b17f  sq s1,0x20(sp)
  0038cbb4  1000b27f  sq s2,0x10(sp)
  0038cbb8  f8b45124  addiu s1,v0,-0x4b08
  0038cbbc  f8b4438c  lw v1,-0x4b08(v0)
  0038cbc0  2d904000  move s2,v0
  0038cbc4  3000b07f  sq s0,0x30(sp)
  0038cbc8  0e006014  bne v1,zero,0x0038cc04
  0038cbcc  0000bfff  _sd ra,0x0(sp)
  0038cbd0  4100033c  lui v1,0x41
  0038cbd4  c0eb628c  lw v0,-0x1440(v1)
  0038cbd8  05004014  bne v0,zero,0x0038cbf0
  0038cbdc  c0eb7024  _addiu s0,v1,-0x1440
  0038cbe0  4000053c  lui a1,0x40
  0038cbe4  2d200002  move a0,s0
  0038cbe8  62c00d0c  jal 0x00370188
  0038cbec  9863a524  _addiu a1,a1,0x6398
  0038cbf0  4000053c  lui a1,0x40
  0038cbf4  2d202002  move a0,s1
  0038cbf8  e863a524  addiu a1,a1,0x63e8
  0038cbfc  5ac00d0c  jal 0x00370168
  0038cc00  2d300002  _move a2,s0
  0038cc04  f8b44226  addiu v0,s2,-0x4b08
  0038cc08  3000b07b  lq s0,0x30(sp)
  0038cc0c  2000b17b  lq s1,0x20(sp)
  0038cc10  1000b27b  lq s2,0x10(sp)
  0038cc14  0000bfdf  ld ra,0x0(sp)
  0038cc18  0800e003  jr ra
  0038cc1c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038cc20 @ 0038cc20 ====
  0038cc20  d0ffbd27  addiu sp,sp,-0x30
  0038cc24  1000b17f  sq s1,0x10(sp)
  0038cc28  4500113c  lui s1,0x45
  0038cc2c  2000b07f  sq s0,0x20(sp)
  0038cc30  a012228e  lw v0,0x12a0(s1)
  0038cc34  4a00103c  lui s0,0x4a
  0038cc38  08004014  bne v0,zero,0x0038cc5c
  0038cc3c  0000bfff  _sd ra,0x0(sp)
  0038cc40  c0330e0c  jal 0x0038cf00
  0038cc44  e0b00426  _addiu a0,s0,-0x4f20
  0038cc48  01000224  li v0,0x1
  0038cc4c  2e00043c  lui a0,0x2e
  0038cc50  a01222ae  sw v0,0x12a0(s1)
  0038cc54  a4790d0c  jal 0x0035e690
  0038cc58  184e8424  _addiu a0,a0,0x4e18
  0038cc5c  e0b00226  addiu v0,s0,-0x4f20
  0038cc60  1000b17b  lq s1,0x10(sp)
  0038cc64  2000b07b  lq s0,0x20(sp)
  0038cc68  0000bfdf  ld ra,0x0(sp)
  0038cc6c  0800e003  jr ra
  0038cc70  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038cc78 @ 0038cc78 ====
  0038cc78  3e00023c  lui v0,0x3e
  0038cc7c  f0ffbd27  addiu sp,sp,-0x10
  0038cc80  40004224  addiu v0,v0,0x40
  0038cc84  0000bfff  sd ra,0x0(sp)
  0038cc88  0100a530  andi a1,a1,0x1
  0038cc8c  0500a010  beq a1,zero,0x0038cca4
  0038cc90  000082ac  _sw v0,0x0(a0)
  0038cc94  3d00033c  lui v1,0x3d
  0038cc98  e087628c  lw v0,-0x7820(v1)
  0038cc9c  09f84000  jalr v0
  0038cca0  00000000  _nop
  0038cca4  0000bfdf  ld ra,0x0(sp)
  0038cca8  0800e003  jr ra
  0038ccac  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038ccb0 @ 0038ccb0 ====
  0038ccb0  c0ffbd27  addiu sp,sp,-0x40
  0038ccb4  4a00023c  lui v0,0x4a
  0038ccb8  2000b17f  sq s1,0x20(sp)
  0038ccbc  1000b27f  sq s2,0x10(sp)
  0038ccc0  08b55124  addiu s1,v0,-0x4af8
  0038ccc4  08b5438c  lw v1,-0x4af8(v0)
  0038ccc8  2d904000  move s2,v0
  0038cccc  3000b07f  sq s0,0x30(sp)
  0038ccd0  0e006014  bne v1,zero,0x0038cd0c
  0038ccd4  0000bfff  _sd ra,0x0(sp)
  0038ccd8  4100033c  lui v1,0x41
  0038ccdc  c0eb628c  lw v0,-0x1440(v1)
  0038cce0  05004014  bne v0,zero,0x0038ccf8
  0038cce4  c0eb7024  _addiu s0,v1,-0x1440
  0038cce8  4000053c  lui a1,0x40
  0038ccec  2d200002  move a0,s0
  0038ccf0  62c00d0c  jal 0x00370188
  0038ccf4  9863a524  _addiu a1,a1,0x6398
  0038ccf8  4000053c  lui a1,0x40
  0038ccfc  2d202002  move a0,s1
  0038cd00  4064a524  addiu a1,a1,0x6440
  0038cd04  5ac00d0c  jal 0x00370168
  0038cd08  2d300002  _move a2,s0
  0038cd0c  08b54226  addiu v0,s2,-0x4af8
  0038cd10  3000b07b  lq s0,0x30(sp)
  0038cd14  2000b17b  lq s1,0x20(sp)
  0038cd18  1000b27b  lq s2,0x10(sp)
  0038cd1c  0000bfdf  ld ra,0x0(sp)
  0038cd20  0800e003  jr ra
  0038cd24  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038cd28 @ 0038cd28 ====
  0038cd28  b0ffbd27  addiu sp,sp,-0x50
  0038cd2c  3f00023c  lui v0,0x3f
  0038cd30  3000b17f  sq s1,0x30(sp)
  0038cd34  a8904224  addiu v0,v0,-0x6f58
  0038cd38  2000b27f  sq s2,0x20(sp)
  0038cd3c  2d888000  move s1,a0
  0038cd40  1000b37f  sq s3,0x10(sp)
  0038cd44  2d90a000  move s2,a1
  0038cd48  4000b07f  sq s0,0x40(sp)
  0038cd4c  0000bfff  sd ra,0x0(sp)
  0038cd50  000022ae  sw v0,0x0(s1)
  0038cd54  1800238e  lw v1,0x18(s1)
  0038cd58  19006010  beq v1,zero,0x0038cdc0
  0038cd5c  3e00133c  _lui s3,0x3e
  0038cd60  0400258e  lw a1,0x4(s1)
  0038cd64  1600a010  beq a1,zero,0x0038cdc0
  0038cd68  14000224  _li v0,0x14
  0038cd6c  f0ffa38c  lw v1,-0x10(a1)
  0038cd70  18206200  mult a0,v1,v0
  0038cd74  21808500  addu s0,a0,a1
  0038cd78  0d00b050  beql a1,s0,0x0038cdb0
  0038cd7c  0400248e  _lw a0,0x4(s1)
  0038cd80  ecff1026  addiu s0,s0,-0x14
  0038cd84  00000000  nop
  0038cd88  2d280000  move a1,zero
  0038cd8c  0000028e  lw v0,0x0(s0)
  0038cd90  08004484  lh a0,0x8(v0)
  0038cd94  0c00438c  lw v1,0xc(v0)
  0038cd98  09f86000  jalr v1
  0038cd9c  21200402  _addu a0,s0,a0
  0038cda0  0400228e  lw v0,0x4(s1)
  0038cda4  f8ff5014  bne v0,s0,0x0038cd88
  0038cda8  ecff1026  _addiu s0,s0,-0x14
  0038cdac  0400248e  lw a0,0x4(s1)
  0038cdb0  3d00023c  lui v0,0x3d
  0038cdb4  e087438c  lw v1,-0x7820(v0)
  0038cdb8  09f86000  jalr v1
  0038cdbc  f0ff8424  _addiu a0,a0,-0x10
  0038cdc0  40006226  addiu v0,s3,0x40
  0038cdc4  01004332  andi v1,s2,0x1
  0038cdc8  05006010  beq v1,zero,0x0038cde0
  0038cdcc  000022ae  _sw v0,0x0(s1)
  0038cdd0  3d00033c  lui v1,0x3d
  0038cdd4  e087628c  lw v0,-0x7820(v1)
  0038cdd8  09f84000  jalr v0
  0038cddc  2d202002  _move a0,s1
  0038cde0  4000b07b  lq s0,0x40(sp)
  0038cde4  3000b17b  lq s1,0x30(sp)
  0038cde8  2000b27b  lq s2,0x20(sp)
  0038cdec  1000b37b  lq s3,0x10(sp)
  0038cdf0  0000bfdf  ld ra,0x0(sp)
  0038cdf4  0800e003  jr ra
  0038cdf8  5000bd27  _addiu sp,sp,0x50

# ==== FUN_0038ce00 @ 0038ce00 ====
  0038ce00  f0ffbd27  addiu sp,sp,-0x10
  0038ce04  3e00023c  lui v0,0x3e
  0038ce08  0000bfff  sd ra,0x0(sp)
  0038ce0c  f8004224  addiu v0,v0,0xf8
  0038ce10  0100a530  andi a1,a1,0x1
  0038ce14  0300a010  beq a1,zero,0x0038ce24
  0038ce18  100182ac  _sw v0,0x110(a0)
  0038ce1c  521f040c  jal 0x00107d48
  0038ce20  00000000  _nop
  0038ce24  0000bfdf  ld ra,0x0(sp)
  0038ce28  0800e003  jr ra
  0038ce2c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityClass_0038ce30 @ 0038ce30 ====
  0038ce30  e0ffbd27  addiu sp,sp,-0x20
  0038ce34  4a00033c  lui v1,0x4a
  0038ce38  1000b07f  sq s0,0x10(sp)
  0038ce3c  18b5628c  lw v0,-0x4ae8(v1)
  0038ce40  18b57024  addiu s0,v1,-0x4ae8
  0038ce44  09004014  bne v0,zero,0x0038ce6c
  0038ce48  0000bfff  _sd ra,0x0(sp)
  0038ce4c  90340e0c  jal 0x0038d240
  0038ce50  00000000  _nop
  0038ce54  4000053c  lui a1,0x40
  0038ce58  4100063c  lui a2,0x41
  0038ce5c  6864a524  addiu a1,a1,0x6468
  0038ce60  f8ebc624  addiu a2,a2,-0x1408
  0038ce64  5ac00d0c  jal 0x00370168
  0038ce68  2d200002  _move a0,s0
  0038ce6c  2d100002  move v0,s0
  0038ce70  0000bfdf  ld ra,0x0(sp)
  0038ce74  1000b07b  lq s0,0x10(sp)
  0038ce78  0800e003  jr ra
  0038ce7c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038ce80 @ 0038ce80 ====
  0038ce80  f0ffbd27  addiu sp,sp,-0x10
  0038ce84  3e00023c  lui v0,0x3e
  0038ce88  0000bfff  sd ra,0x0(sp)
  0038ce8c  28474224  addiu v0,v0,0x4728
  0038ce90  0100a530  andi a1,a1,0x1
  0038ce94  0300a010  beq a1,zero,0x0038cea4
  0038ce98  100182ac  _sw v0,0x110(a0)
  0038ce9c  521f040c  jal 0x00107d48
  0038cea0  00000000  _nop
  0038cea4  0000bfdf  ld ra,0x0(sp)
  0038cea8  0800e003  jr ra
  0038ceac  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CEntityAttributeClass_0038ceb0 @ 0038ceb0 ====
  0038ceb0  e0ffbd27  addiu sp,sp,-0x20
  0038ceb4  4a00033c  lui v1,0x4a
  0038ceb8  1000b07f  sq s0,0x10(sp)
  0038cebc  28b5628c  lw v0,-0x4ad8(v1)
  0038cec0  28b57024  addiu s0,v1,-0x4ad8
  0038cec4  09004014  bne v0,zero,0x0038ceec
  0038cec8  0000bfff  _sd ra,0x0(sp)
  0038cecc  02280e0c  jal 0x0038a008
  0038ced0  00000000  _nop
  0038ced4  4000053c  lui a1,0x40
  0038ced8  4100063c  lui a2,0x41
  0038cedc  8064a524  addiu a1,a1,0x6480
  0038cee0  d8ebc624  addiu a2,a2,-0x1428
  0038cee4  5ac00d0c  jal 0x00370168
  0038cee8  2d200002  _move a0,s0
  0038ceec  2d100002  move v0,s0
  0038cef0  0000bfdf  ld ra,0x0(sp)
  0038cef4  1000b07b  lq s0,0x10(sp)
  0038cef8  0800e003  jr ra
  0038cefc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038cf00 @ 0038cf00 ====
  0038cf00  3d00033c  lui v1,0x3d
  0038cf04  80896290  lbu v0,-0x7680(v1)
  0038cf08  01004054  bnel v0,zero,0x0038cf10
  0038cf0c  000480ac  _sw zero,0x400(a0)
  0038cf10  808960a0  sb zero,-0x7680(v1)
  0038cf14  0800e003  jr ra
  0038cf18  2d108000  _move v0,a0

# ==== FUN_0038cf20 @ 0038cf20 ====
  0038cf20  50ffbd27  addiu sp,sp,-0xb0
  0038cf24  ff000831  andi t0,t0,0xff
  0038cf28  5000b57f  sq s5,0x50(sp)
  0038cf2c  ff002931  andi t1,t1,0xff
  0038cf30  4000b67f  sq s6,0x40(sp)
  0038cf34  2da88000  move s5,a0
  0038cf38  3e00023c  lui v0,0x3e
  0038cf3c  a000b07f  sq s0,0xa0(sp)
  0038cf40  6000b47f  sq s4,0x60(sp)
  0038cf44  f8004224  addiu v0,v0,0xf8
  0038cf48  3000b77f  sq s7,0x30(sp)
  0038cf4c  0800b626  addiu s6,s5,0x8
  0038cf50  2000be7f  sq s8,0x20(sp)
  0038cf54  2db8c000  move s7,a2
  0038cf58  9000b17f  sq s1,0x90(sp)
  0038cf5c  2df0e000  move s8,a3
  0038cf60  8000b27f  sq s2,0x80(sp)
  0038cf64  2d20c002  move a0,s6
  0038cf68  7000b37f  sq s3,0x70(sp)
  0038cf6c  2da00000  move s4,zero
  0038cf70  1000bfff  sd ra,0x10(sp)
  0038cf74  0000a8af  sw t0,0x0(sp)
  0038cf78  0400a9af  sw t1,0x4(sp)
  0038cf7c  f0720d0c  jal 0x0035cbc0
  0038cf80  1001a2ae  _sw v0,0x110(s5)
  0038cf84  582f0e0c  jal 0x0038bd60
  0038cf88  00000000  _nop
  0038cf8c  2d804000  move s0,v0
  0038cf90  0004028e  lw v0,0x400(s0)
  0038cf94  11004058  blezl v0,0x0038cfdc
  0038cf98  0004038e  _lw v1,0x400(s0)
  0038cf9c  2d900002  move s2,s0
  0038cfa0  2d980002  move s3,s0
  0038cfa4  00000000  nop
  0038cfa8  0000448e  lw a0,0x0(s2)
  0038cfac  2d886002  move s1,s3
  0038cfb0  2d28c002  move a1,s6
  0038cfb4  9d720d0c  jal 0x0035ca74
  0038cfb8  08008424  _addiu a0,a0,0x8
  0038cfbc  0c004010  beq v0,zero,0x0038cff0
  0038cfc0  01009426  _addiu s4,s4,0x1
  0038cfc4  0004028e  lw v0,0x400(s0)
  0038cfc8  04003326  addiu s3,s1,0x4
  0038cfcc  2a108202  slt v0,s4,v0
  0038cfd0  f5ff4014  bne v0,zero,0x0038cfa8
  0038cfd4  04005226  _addiu s2,s2,0x4
  0038cfd8  0004038e  lw v1,0x400(s0)
  0038cfdc  00010224  li v0,0x100
  0038cfe0  06006214  bne v1,v0,0x0038cffc
  0038cfe4  80180300  _sll v1,v1,0x2
  0038cfe8  0a000010  b 0x0038d014
  0038cfec  2d200000  _move a0,zero
  0038cff0  000075ae  sw s5,0x0(s3)
  0038cff4  07000010  b 0x0038d014
  0038cff8  01000424  _li a0,0x1
  0038cffc  01000424  li a0,0x1
  0038d000  21180302  addu v1,s0,v1
  0038d004  000075ac  sw s5,0x0(v1)
  0038d008  0004028e  lw v0,0x400(s0)
  0038d00c  01004224  addiu v0,v0,0x1
  0038d010  000402ae  sw v0,0x400(s0)
  0038d014  ff008230  andi v0,a0,0xff
  0038d018  03004014  bne v0,zero,0x0038d028
  0038d01c  ffff0224  _li v0,-0x1
  0038d020  06000010  b 0x0038d03c
  0038d024  0000a2ae  _sw v0,0x0(s5)
  0038d028  582f0e0c  jal 0x0038bd60
  0038d02c  00000000  _nop
  0038d030  0004438c  lw v1,0x400(v0)
  0038d034  ffff6324  addiu v1,v1,-0x1
  0038d038  0000a3ae  sw v1,0x0(s5)
  0038d03c  0400b7ae  sw s7,0x4(s5)
  0038d040  01000224  li v0,0x1
  0038d044  0801beae  sw s8,0x108(s5)
  0038d048  0000a38f  lw v1,0x0(sp)
  0038d04c  04006254  bnel v1,v0,0x0038d060
  0038d050  0c01a0ae  _sw zero,0x10c(s5)
  0038d054  2e840b0c  jal 0x002e10b8
  0038d058  00000000  _nop
  0038d05c  0c01a2ae  sw v0,0x10c(s5)
  0038d060  0400a28f  lw v0,0x4(sp)
  0038d064  05004010  beq v0,zero,0x0038d07c
  0038d068  3c00043c  _lui a0,0x3c
  0038d06c  0c01a38e  lw v1,0x10c(s5)
  0038d070  207a828c  lw v0,0x7a20(a0)
  0038d074  25104300  or v0,v0,v1
  0038d078  207a82ac  sw v0,0x7a20(a0)
  0038d07c  2d10a002  move v0,s5
  0038d080  a000b07b  lq s0,0xa0(sp)
  0038d084  9000b17b  lq s1,0x90(sp)
  0038d088  8000b27b  lq s2,0x80(sp)
  0038d08c  7000b37b  lq s3,0x70(sp)
  0038d090  6000b47b  lq s4,0x60(sp)
  0038d094  5000b57b  lq s5,0x50(sp)
  0038d098  4000b67b  lq s6,0x40(sp)
  0038d09c  3000b77b  lq s7,0x30(sp)
  0038d0a0  2000be7b  lq s8,0x20(sp)
  0038d0a4  1000bfdf  ld ra,0x10(sp)
  0038d0a8  0800e003  jr ra
  0038d0ac  b000bd27  _addiu sp,sp,0xb0

# ==== FUN_0038d0b0 @ 0038d0b0 ====
  0038d0b0  50ffbd27  addiu sp,sp,-0xb0
  0038d0b4  ff000831  andi t0,t0,0xff
  0038d0b8  5000b57f  sq s5,0x50(sp)
  0038d0bc  ff002931  andi t1,t1,0xff
  0038d0c0  4000b67f  sq s6,0x40(sp)
  0038d0c4  2da88000  move s5,a0
  0038d0c8  3e00023c  lui v0,0x3e
  0038d0cc  a000b07f  sq s0,0xa0(sp)
  0038d0d0  6000b47f  sq s4,0x60(sp)
  0038d0d4  28474224  addiu v0,v0,0x4728
  0038d0d8  3000b77f  sq s7,0x30(sp)
  0038d0dc  0800b626  addiu s6,s5,0x8
  0038d0e0  2000be7f  sq s8,0x20(sp)
  0038d0e4  2db8c000  move s7,a2
  0038d0e8  9000b17f  sq s1,0x90(sp)
  0038d0ec  2df0e000  move s8,a3
  0038d0f0  8000b27f  sq s2,0x80(sp)
  0038d0f4  2d20c002  move a0,s6
  0038d0f8  7000b37f  sq s3,0x70(sp)
  0038d0fc  2da00000  move s4,zero
  0038d100  1000bfff  sd ra,0x10(sp)
  0038d104  0000a8af  sw t0,0x0(sp)
  0038d108  0400a9af  sw t1,0x4(sp)
  0038d10c  f0720d0c  jal 0x0035cbc0
  0038d110  1001a2ae  _sw v0,0x110(s5)
  0038d114  08330e0c  jal 0x0038cc20
  0038d118  00000000  _nop
  0038d11c  2d804000  move s0,v0
  0038d120  0004028e  lw v0,0x400(s0)
  0038d124  11004058  blezl v0,0x0038d16c
  0038d128  0004038e  _lw v1,0x400(s0)
  0038d12c  2d900002  move s2,s0
  0038d130  2d980002  move s3,s0
  0038d134  00000000  nop
  0038d138  0000448e  lw a0,0x0(s2)
  0038d13c  2d886002  move s1,s3
  0038d140  2d28c002  move a1,s6
  0038d144  9d720d0c  jal 0x0035ca74
  0038d148  08008424  _addiu a0,a0,0x8
  0038d14c  0c004010  beq v0,zero,0x0038d180
  0038d150  01009426  _addiu s4,s4,0x1
  0038d154  0004028e  lw v0,0x400(s0)
  0038d158  04003326  addiu s3,s1,0x4
  0038d15c  2a108202  slt v0,s4,v0
  0038d160  f5ff4014  bne v0,zero,0x0038d138
  0038d164  04005226  _addiu s2,s2,0x4
  0038d168  0004038e  lw v1,0x400(s0)
  0038d16c  00010224  li v0,0x100
  0038d170  06006214  bne v1,v0,0x0038d18c
  0038d174  80180300  _sll v1,v1,0x2
  0038d178  0a000010  b 0x0038d1a4
  0038d17c  2d200000  _move a0,zero
  0038d180  000075ae  sw s5,0x0(s3)
  0038d184  07000010  b 0x0038d1a4
  0038d188  01000424  _li a0,0x1
  0038d18c  01000424  li a0,0x1
  0038d190  21180302  addu v1,s0,v1
  0038d194  000075ac  sw s5,0x0(v1)
  0038d198  0004028e  lw v0,0x400(s0)
  0038d19c  01004224  addiu v0,v0,0x1
  0038d1a0  000402ae  sw v0,0x400(s0)
  0038d1a4  ff008230  andi v0,a0,0xff
  0038d1a8  03004014  bne v0,zero,0x0038d1b8
  0038d1ac  ffff0224  _li v0,-0x1
  0038d1b0  06000010  b 0x0038d1cc
  0038d1b4  0000a2ae  _sw v0,0x0(s5)
  0038d1b8  08330e0c  jal 0x0038cc20
  0038d1bc  00000000  _nop
  0038d1c0  0004438c  lw v1,0x400(v0)
  0038d1c4  ffff6324  addiu v1,v1,-0x1
  0038d1c8  0000a3ae  sw v1,0x0(s5)
  0038d1cc  0400b7ae  sw s7,0x4(s5)
  0038d1d0  01000224  li v0,0x1
  0038d1d4  0801beae  sw s8,0x108(s5)
  0038d1d8  0000a38f  lw v1,0x0(sp)
  0038d1dc  04006254  bnel v1,v0,0x0038d1f0
  0038d1e0  0c01a0ae  _sw zero,0x10c(s5)
  0038d1e4  2e840b0c  jal 0x002e10b8
  0038d1e8  00000000  _nop
  0038d1ec  0c01a2ae  sw v0,0x10c(s5)
  0038d1f0  0400a28f  lw v0,0x4(sp)
  0038d1f4  05004010  beq v0,zero,0x0038d20c
  0038d1f8  3c00043c  _lui a0,0x3c
  0038d1fc  0c01a38e  lw v1,0x10c(s5)
  0038d200  207a828c  lw v0,0x7a20(a0)
  0038d204  25104300  or v0,v0,v1
  0038d208  207a82ac  sw v0,0x7a20(a0)
  0038d20c  2d10a002  move v0,s5
  0038d210  a000b07b  lq s0,0xa0(sp)
  0038d214  9000b17b  lq s1,0x90(sp)
  0038d218  8000b27b  lq s2,0x80(sp)
  0038d21c  7000b37b  lq s3,0x70(sp)
  0038d220  6000b47b  lq s4,0x60(sp)
  0038d224  5000b57b  lq s5,0x50(sp)
  0038d228  4000b67b  lq s6,0x40(sp)
  0038d22c  3000b77b  lq s7,0x30(sp)
  0038d230  2000be7b  lq s8,0x20(sp)
  0038d234  1000bfdf  ld ra,0x10(sp)
  0038d238  0800e003  jr ra
  0038d23c  b000bd27  _addiu sp,sp,0xb0

# ==== Kaimt_CMetaClass2ZQ24Kaim7CEntityZPFPCcPv_PQ24Kaim7CEntity_0038d240 @ 0038d240 ====
  0038d240  e0ffbd27  addiu sp,sp,-0x20
  0038d244  4100033c  lui v1,0x41
  0038d248  1000b07f  sq s0,0x10(sp)
  0038d24c  f8eb628c  lw v0,-0x1408(v1)
  0038d250  f8eb7024  addiu s0,v1,-0x1408
  0038d254  05004014  bne v0,zero,0x0038d26c
  0038d258  0000bfff  _sd ra,0x0(sp)
  0038d25c  4000053c  lui a1,0x40
  0038d260  2d200002  move a0,s0
  0038d264  62c00d0c  jal 0x00370188
  0038d268  a064a524  _addiu a1,a1,0x64a0
  0038d26c  2d100002  move v0,s0
  0038d270  0000bfdf  ld ra,0x0(sp)
  0038d274  1000b07b  lq s0,0x10(sp)
  0038d278  0800e003  jr ra
  0038d27c  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_IPathFinder_0038d280 @ 0038d280 ====
  0038d280  e0ffbd27  addiu sp,sp,-0x20
  0038d284  4a00033c  lui v1,0x4a
  0038d288  1000b07f  sq s0,0x10(sp)
  0038d28c  40b9628c  lw v0,-0x46c0(v1)
  0038d290  40b97024  addiu s0,v1,-0x46c0
  0038d294  09004014  bne v0,zero,0x0038d2bc
  0038d298  0000bfff  _sd ra,0x0(sp)
  0038d29c  e4340e0c  jal 0x0038d390
  0038d2a0  00000000  _nop
  0038d2a4  4000053c  lui a1,0x40
  0038d2a8  4a00063c  lui a2,0x4a
  0038d2ac  7065a524  addiu a1,a1,0x6570
  0038d2b0  50b9c624  addiu a2,a2,-0x46b0
  0038d2b4  5ac00d0c  jal 0x00370168
  0038d2b8  2d200002  _move a0,s0
  0038d2bc  2d100002  move v0,s0
  0038d2c0  0000bfdf  ld ra,0x0(sp)
  0038d2c4  1000b07b  lq s0,0x10(sp)
  0038d2c8  0800e003  jr ra
  0038d2cc  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038d2d0 @ 0038d2d0 ====
  0038d2d0  d0ffbd27  addiu sp,sp,-0x30
  0038d2d4  1000b17f  sq s1,0x10(sp)
  0038d2d8  0000bfff  sd ra,0x0(sp)
  0038d2dc  2d888000  move s1,a0
  0038d2e0  2000b07f  sq s0,0x20(sp)
  0038d2e4  0000308e  lw s0,0x0(s1)
  0038d2e8  0000a38c  lw v1,0x0(a1)
  0038d2ec  30000686  lh a2,0x30(s0)
  0038d2f0  10006484  lh a0,0x10(v1)
  0038d2f4  30001026  addiu s0,s0,0x30
  0038d2f8  1400628c  lw v0,0x14(v1)
  0038d2fc  21882602  addu s1,s1,a2
  0038d300  09f84000  jalr v0
  0038d304  2120a400  _addu a0,a1,a0
  0038d308  0400038e  lw v1,0x4(s0)
  0038d30c  2d202002  move a0,s1
  0038d310  09f86000  jalr v1
  0038d314  2d284000  _move a1,v0
  0038d318  2000b07b  lq s0,0x20(sp)
  0038d31c  1000b17b  lq s1,0x10(sp)
  0038d320  0000bfdf  ld ra,0x0(sp)
  0038d324  0800e003  jr ra
  0038d328  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038d338 @ 0038d338 ====
  0038d338  d0ffbd27  addiu sp,sp,-0x30
  0038d33c  1000b17f  sq s1,0x10(sp)
  0038d340  4500113c  lui s1,0x45
  0038d344  2000b07f  sq s0,0x20(sp)
  0038d348  a812228e  lw v0,0x12a8(s1)
  0038d34c  4a00103c  lui s0,0x4a
  0038d350  08004014  bne v0,zero,0x0038d374
  0038d354  0000bfff  _sd ra,0x0(sp)
  0038d358  28350e0c  jal 0x0038d4a0
  0038d35c  38b50426  _addiu a0,s0,-0x4ac8
  0038d360  01000224  li v0,0x1
  0038d364  2e00043c  lui a0,0x2e
  0038d368  a81222ae  sw v0,0x12a8(s1)
  0038d36c  a4790d0c  jal 0x0035e690
  0038d370  78528424  _addiu a0,a0,0x5278
  0038d374  38b50226  addiu v0,s0,-0x4ac8
  0038d378  1000b17b  lq s1,0x10(sp)
  0038d37c  2000b07b  lq s0,0x20(sp)
  0038d380  0000bfdf  ld ra,0x0(sp)
  0038d384  0800e003  jr ra
  0038d388  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CBrainService_0038d390 @ 0038d390 ====
  0038d390  e0ffbd27  addiu sp,sp,-0x20
  0038d394  4a00033c  lui v1,0x4a
  0038d398  1000b07f  sq s0,0x10(sp)
  0038d39c  50b9628c  lw v0,-0x46b0(v1)
  0038d3a0  50b97024  addiu s0,v1,-0x46b0
  0038d3a4  09004014  bne v0,zero,0x0038d3cc
  0038d3a8  0000bfff  _sd ra,0x0(sp)
  0038d3ac  b8390e0c  jal 0x0038e6e0
  0038d3b0  00000000  _nop
  0038d3b4  4000053c  lui a1,0x40
  0038d3b8  4a00063c  lui a2,0x4a
  0038d3bc  8865a524  addiu a1,a1,0x6588
  0038d3c0  98abc624  addiu a2,a2,-0x5468
  0038d3c4  5ac00d0c  jal 0x00370168
  0038d3c8  2d200002  _move a0,s0
  0038d3cc  2d100002  move v0,s0
  0038d3d0  0000bfdf  ld ra,0x0(sp)
  0038d3d4  1000b07b  lq s0,0x10(sp)
  0038d3d8  0800e003  jr ra
  0038d3dc  2000bd27  _addiu sp,sp,0x20

# ==== Kaimt_CMetaClass2ZQ24Kaim13CBrainServiceZPFPQ24Kaim6CBrain_PQ24Kaim13CBrainService_0038d3e0 @ 0038d3e0 ====
  0038d3e0  e0ffbd27  addiu sp,sp,-0x20
  0038d3e4  4100033c  lui v1,0x41
  0038d3e8  1000b07f  sq s0,0x10(sp)
  0038d3ec  00ec628c  lw v0,-0x1400(v1)
  0038d3f0  00ec7024  addiu s0,v1,-0x1400
  0038d3f4  05004014  bne v0,zero,0x0038d40c
  0038d3f8  0000bfff  _sd ra,0x0(sp)
  0038d3fc  4000053c  lui a1,0x40
  0038d400  2d200002  move a0,s0
  0038d404  62c00d0c  jal 0x00370188
  0038d408  a065a524  _addiu a1,a1,0x65a0
  0038d40c  2d100002  move v0,s0
  0038d410  0000bfdf  ld ra,0x0(sp)
  0038d414  1000b07b  lq s0,0x10(sp)
  0038d418  0800e003  jr ra
  0038d41c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038d420 @ 0038d420 ====
  0038d420  f0ffbd27  addiu sp,sp,-0x10
  0038d424  3e00023c  lui v0,0x3e
  0038d428  0000bfff  sd ra,0x0(sp)
  0038d42c  c8004224  addiu v0,v0,0xc8
  0038d430  0100a530  andi a1,a1,0x1
  0038d434  0300a010  beq a1,zero,0x0038d444
  0038d438  100182ac  _sw v0,0x110(a0)
  0038d43c  521f040c  jal 0x00107d48
  0038d440  00000000  _nop
  0038d444  0000bfdf  ld ra,0x0(sp)
  0038d448  0800e003  jr ra
  0038d44c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_IConstraintClass_0038d450 @ 0038d450 ====
  0038d450  e0ffbd27  addiu sp,sp,-0x20
  0038d454  4a00033c  lui v1,0x4a
  0038d458  1000b07f  sq s0,0x10(sp)
  0038d45c  60b9628c  lw v0,-0x46a0(v1)
  0038d460  60b97024  addiu s0,v1,-0x46a0
  0038d464  09004014  bne v0,zero,0x0038d48c
  0038d468  0000bfff  _sd ra,0x0(sp)
  0038d46c  94350e0c  jal 0x0038d650
  0038d470  00000000  _nop
  0038d474  4000053c  lui a1,0x40
  0038d478  4100063c  lui a2,0x41
  0038d47c  f865a524  addiu a1,a1,0x65f8
  0038d480  08ecc624  addiu a2,a2,-0x13f8
  0038d484  5ac00d0c  jal 0x00370168
  0038d488  2d200002  _move a0,s0
  0038d48c  2d100002  move v0,s0
  0038d490  0000bfdf  ld ra,0x0(sp)
  0038d494  1000b07b  lq s0,0x10(sp)
  0038d498  0800e003  jr ra
  0038d49c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038d4a0 @ 0038d4a0 ====
  0038d4a0  3d00033c  lui v1,0x3d
  0038d4a4  008c6290  lbu v0,-0x7400(v1)
  0038d4a8  01004054  bnel v0,zero,0x0038d4b0
  0038d4ac  000480ac  _sw zero,0x400(a0)
  0038d4b0  008c60a0  sb zero,-0x7400(v1)
  0038d4b4  0800e003  jr ra
  0038d4b8  2d108000  _move v0,a0

# ==== FUN_0038d4c0 @ 0038d4c0 ====
  0038d4c0  50ffbd27  addiu sp,sp,-0xb0
  0038d4c4  ff000831  andi t0,t0,0xff
  0038d4c8  5000b57f  sq s5,0x50(sp)
  0038d4cc  ff002931  andi t1,t1,0xff
  0038d4d0  4000b67f  sq s6,0x40(sp)
  0038d4d4  2da88000  move s5,a0
  0038d4d8  3e00023c  lui v0,0x3e
  0038d4dc  a000b07f  sq s0,0xa0(sp)
  0038d4e0  6000b47f  sq s4,0x60(sp)
  0038d4e4  c8004224  addiu v0,v0,0xc8
  0038d4e8  3000b77f  sq s7,0x30(sp)
  0038d4ec  0800b626  addiu s6,s5,0x8
  0038d4f0  2000be7f  sq s8,0x20(sp)
  0038d4f4  2db8c000  move s7,a2
  0038d4f8  9000b17f  sq s1,0x90(sp)
  0038d4fc  2df0e000  move s8,a3
  0038d500  8000b27f  sq s2,0x80(sp)
  0038d504  2d20c002  move a0,s6
  0038d508  7000b37f  sq s3,0x70(sp)
  0038d50c  2da00000  move s4,zero
  0038d510  1000bfff  sd ra,0x10(sp)
  0038d514  0000a8af  sw t0,0x0(sp)
  0038d518  0400a9af  sw t1,0x4(sp)
  0038d51c  f0720d0c  jal 0x0035cbc0
  0038d520  1001a2ae  _sw v0,0x110(s5)
  0038d524  ce340e0c  jal 0x0038d338
  0038d528  00000000  _nop
  0038d52c  2d804000  move s0,v0
  0038d530  0004028e  lw v0,0x400(s0)
  0038d534  11004058  blezl v0,0x0038d57c
  0038d538  0004038e  _lw v1,0x400(s0)
  0038d53c  2d900002  move s2,s0
  0038d540  2d980002  move s3,s0
  0038d544  00000000  nop
  0038d548  0000448e  lw a0,0x0(s2)
  0038d54c  2d886002  move s1,s3
  0038d550  2d28c002  move a1,s6
  0038d554  9d720d0c  jal 0x0035ca74
  0038d558  08008424  _addiu a0,a0,0x8
  0038d55c  0c004010  beq v0,zero,0x0038d590
  0038d560  01009426  _addiu s4,s4,0x1
  0038d564  0004028e  lw v0,0x400(s0)
  0038d568  04003326  addiu s3,s1,0x4
  0038d56c  2a108202  slt v0,s4,v0
  0038d570  f5ff4014  bne v0,zero,0x0038d548
  0038d574  04005226  _addiu s2,s2,0x4
  0038d578  0004038e  lw v1,0x400(s0)
  0038d57c  00010224  li v0,0x100
  0038d580  06006214  bne v1,v0,0x0038d59c
  0038d584  80180300  _sll v1,v1,0x2
  0038d588  0a000010  b 0x0038d5b4
  0038d58c  2d200000  _move a0,zero
  0038d590  000075ae  sw s5,0x0(s3)
  0038d594  07000010  b 0x0038d5b4
  0038d598  01000424  _li a0,0x1
  0038d59c  01000424  li a0,0x1
  0038d5a0  21180302  addu v1,s0,v1
  0038d5a4  000075ac  sw s5,0x0(v1)
  0038d5a8  0004028e  lw v0,0x400(s0)
  0038d5ac  01004224  addiu v0,v0,0x1
  0038d5b0  000402ae  sw v0,0x400(s0)
  0038d5b4  ff008230  andi v0,a0,0xff
  0038d5b8  03004014  bne v0,zero,0x0038d5c8
  0038d5bc  ffff0224  _li v0,-0x1
  0038d5c0  06000010  b 0x0038d5dc
  0038d5c4  0000a2ae  _sw v0,0x0(s5)
  0038d5c8  ce340e0c  jal 0x0038d338
  0038d5cc  00000000  _nop
  0038d5d0  0004438c  lw v1,0x400(v0)
  0038d5d4  ffff6324  addiu v1,v1,-0x1
  0038d5d8  0000a3ae  sw v1,0x0(s5)
  0038d5dc  0400b7ae  sw s7,0x4(s5)
  0038d5e0  01000224  li v0,0x1
  0038d5e4  0801beae  sw s8,0x108(s5)
  0038d5e8  0000a38f  lw v1,0x0(sp)
  0038d5ec  04006254  bnel v1,v0,0x0038d600
  0038d5f0  0c01a0ae  _sw zero,0x10c(s5)
  0038d5f4  2e840b0c  jal 0x002e10b8
  0038d5f8  00000000  _nop
  0038d5fc  0c01a2ae  sw v0,0x10c(s5)
  0038d600  0400a28f  lw v0,0x4(sp)
  0038d604  05004010  beq v0,zero,0x0038d61c
  0038d608  3c00043c  _lui a0,0x3c
  0038d60c  0c01a38e  lw v1,0x10c(s5)
  0038d610  207a828c  lw v0,0x7a20(a0)
  0038d614  25104300  or v0,v0,v1
  0038d618  207a82ac  sw v0,0x7a20(a0)
  0038d61c  2d10a002  move v0,s5
  0038d620  a000b07b  lq s0,0xa0(sp)
  0038d624  9000b17b  lq s1,0x90(sp)
  0038d628  8000b27b  lq s2,0x80(sp)
  0038d62c  7000b37b  lq s3,0x70(sp)
  0038d630  6000b47b  lq s4,0x60(sp)
  0038d634  5000b57b  lq s5,0x50(sp)
  0038d638  4000b67b  lq s6,0x40(sp)
  0038d63c  3000b77b  lq s7,0x30(sp)
  0038d640  2000be7b  lq s8,0x20(sp)
  0038d644  1000bfdf  ld ra,0x10(sp)
  0038d648  0800e003  jr ra
  0038d64c  b000bd27  _addiu sp,sp,0xb0

# ==== Kaimt_CMetaClass2ZQ24Kaim11IConstraintZPFv_PQ24Kaim11IConstraint_0038d650 @ 0038d650 ====
  0038d650  e0ffbd27  addiu sp,sp,-0x20
  0038d654  4100033c  lui v1,0x41
  0038d658  1000b07f  sq s0,0x10(sp)
  0038d65c  08ec628c  lw v0,-0x13f8(v1)
  0038d660  08ec7024  addiu s0,v1,-0x13f8
  0038d664  05004014  bne v0,zero,0x0038d67c
  0038d668  0000bfff  _sd ra,0x0(sp)
  0038d66c  4000053c  lui a1,0x40
  0038d670  2d200002  move a0,s0
  0038d674  62c00d0c  jal 0x00370188
  0038d678  1866a524  _addiu a1,a1,0x6618
  0038d67c  2d100002  move v0,s0
  0038d680  0000bfdf  ld ra,0x0(sp)
  0038d684  1000b07b  lq s0,0x10(sp)
  0038d688  0800e003  jr ra
  0038d68c  2000bd27  _addiu sp,sp,0x20

# ==== FUN_0038d690 @ 0038d690 ====
  0038d690  a0ffbd27  addiu sp,sp,-0x60
  0038d694  4a00033c  lui v1,0x4a
  0038d698  1000b47f  sq s4,0x10(sp)
  0038d69c  90b9628c  lw v0,-0x4670(v1)
  0038d6a0  2da06000  move s4,v1
  0038d6a4  5000b07f  sq s0,0x50(sp)
  0038d6a8  4000b17f  sq s1,0x40(sp)
  0038d6ac  3000b27f  sq s2,0x30(sp)
  0038d6b0  2000b37f  sq s3,0x20(sp)
  0038d6b4  21004014  bne v0,zero,0x0038d73c
  0038d6b8  0000bfff  _sd ra,0x0(sp)
  0038d6bc  4a00033c  lui v1,0x4a
  0038d6c0  80b9628c  lw v0,-0x4680(v1)
  0038d6c4  18004014  bne v0,zero,0x0038d728
  0038d6c8  2d906000  _move s2,v1
  0038d6cc  4a00023c  lui v0,0x4a
  0038d6d0  70b9438c  lw v1,-0x4690(v0)
  0038d6d4  2d984000  move s3,v0
  0038d6d8  0e006014  bne v1,zero,0x0038d714
  0038d6dc  70b95124  _addiu s1,v0,-0x4690
  0038d6e0  4100033c  lui v1,0x41
  0038d6e4  c0eb628c  lw v0,-0x1440(v1)
  0038d6e8  05004014  bne v0,zero,0x0038d700
  0038d6ec  c0eb7024  _addiu s0,v1,-0x1440
  0038d6f0  4000053c  lui a1,0x40
  0038d6f4  2d200002  move a0,s0
  0038d6f8  62c00d0c  jal 0x00370188
  0038d6fc  0067a524  _addiu a1,a1,0x6700
  0038d700  4000053c  lui a1,0x40
  0038d704  2d202002  move a0,s1
  0038d708  1067a524  addiu a1,a1,0x6710
  0038d70c  5ac00d0c  jal 0x00370168
  0038d710  2d300002  _move a2,s0
  0038d714  4000053c  lui a1,0x40
  0038d718  70b96626  addiu a2,s3,-0x4690
  0038d71c  2867a524  addiu a1,a1,0x6728
  0038d720  5ac00d0c  jal 0x00370168
  0038d724  80b94426  _addiu a0,s2,-0x4680
  0038d728  4000053c  lui a1,0x40
  0038d72c  80b94626  addiu a2,s2,-0x4680
  0038d730  4067a524  addiu a1,a1,0x6740
  0038d734  5ac00d0c  jal 0x00370168
  0038d738  90b98426  _addiu a0,s4,-0x4670
  0038d73c  90b98226  addiu v0,s4,-0x4670
  0038d740  5000b07b  lq s0,0x50(sp)
  0038d744  4000b17b  lq s1,0x40(sp)
  0038d748  3000b27b  lq s2,0x30(sp)
  0038d74c  2000b37b  lq s3,0x20(sp)
  0038d750  1000b47b  lq s4,0x10(sp)
  0038d754  0000bfdf  ld ra,0x0(sp)
  0038d758  0800e003  jr ra
  0038d75c  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038d760 @ 0038d760 ====
  0038d760  a0ffbd27  addiu sp,sp,-0x60
  0038d764  4a00033c  lui v1,0x4a
  0038d768  1000b47f  sq s4,0x10(sp)
  0038d76c  a0b9628c  lw v0,-0x4660(v1)
  0038d770  2da06000  move s4,v1
  0038d774  5000b07f  sq s0,0x50(sp)
  0038d778  4000b17f  sq s1,0x40(sp)
  0038d77c  3000b27f  sq s2,0x30(sp)
  0038d780  2000b37f  sq s3,0x20(sp)
  0038d784  21004014  bne v0,zero,0x0038d80c
  0038d788  0000bfff  _sd ra,0x0(sp)
  0038d78c  4a00033c  lui v1,0x4a
  0038d790  80b9628c  lw v0,-0x4680(v1)
  0038d794  18004014  bne v0,zero,0x0038d7f8
  0038d798  2d906000  _move s2,v1
  0038d79c  4a00023c  lui v0,0x4a
  0038d7a0  70b9438c  lw v1,-0x4690(v0)
  0038d7a4  2d984000  move s3,v0
  0038d7a8  0e006014  bne v1,zero,0x0038d7e4
  0038d7ac  70b95124  _addiu s1,v0,-0x4690
  0038d7b0  4100033c  lui v1,0x41
  0038d7b4  c0eb628c  lw v0,-0x1440(v1)
  0038d7b8  05004014  bne v0,zero,0x0038d7d0
  0038d7bc  c0eb7024  _addiu s0,v1,-0x1440
  0038d7c0  4000053c  lui a1,0x40
  0038d7c4  2d200002  move a0,s0
  0038d7c8  62c00d0c  jal 0x00370188
  0038d7cc  0067a524  _addiu a1,a1,0x6700
  0038d7d0  4000053c  lui a1,0x40
  0038d7d4  2d202002  move a0,s1
  0038d7d8  1067a524  addiu a1,a1,0x6710
  0038d7dc  5ac00d0c  jal 0x00370168
  0038d7e0  2d300002  _move a2,s0
  0038d7e4  4000053c  lui a1,0x40
  0038d7e8  70b96626  addiu a2,s3,-0x4690
  0038d7ec  2867a524  addiu a1,a1,0x6728
  0038d7f0  5ac00d0c  jal 0x00370168
  0038d7f4  80b94426  _addiu a0,s2,-0x4680
  0038d7f8  4000053c  lui a1,0x40
  0038d7fc  80b94626  addiu a2,s2,-0x4680
  0038d800  6067a524  addiu a1,a1,0x6760
  0038d804  5ac00d0c  jal 0x00370168
  0038d808  a0b98426  _addiu a0,s4,-0x4660
  0038d80c  a0b98226  addiu v0,s4,-0x4660
  0038d810  5000b07b  lq s0,0x50(sp)
  0038d814  4000b17b  lq s1,0x40(sp)
  0038d818  3000b27b  lq s2,0x30(sp)
  0038d81c  2000b37b  lq s3,0x20(sp)
  0038d820  1000b47b  lq s4,0x10(sp)
  0038d824  0000bfdf  ld ra,0x0(sp)
  0038d828  0800e003  jr ra
  0038d82c  6000bd27  _addiu sp,sp,0x60

# ==== FUN_0038d830 @ 0038d830 ====
  0038d830  c0ffbd27  addiu sp,sp,-0x40
  0038d834  4a00023c  lui v0,0x4a
  0038d838  2000b17f  sq s1,0x20(sp)
  0038d83c  1000b27f  sq s2,0x10(sp)
  0038d840  70b95124  addiu s1,v0,-0x4690
  0038d844  70b9438c  lw v1,-0x4690(v0)
  0038d848  2d904000  move s2,v0
  0038d84c  3000b07f  sq s0,0x30(sp)
  0038d850  0e006014  bne v1,zero,0x0038d88c
  0038d854  0000bfff  _sd ra,0x0(sp)
  0038d858  4100033c  lui v1,0x41
  0038d85c  c0eb628c  lw v0,-0x1440(v1)
  0038d860  05004014  bne v0,zero,0x0038d878
  0038d864  c0eb7024  _addiu s0,v1,-0x1440
  0038d868  4000053c  lui a1,0x40
  0038d86c  2d200002  move a0,s0
  0038d870  62c00d0c  jal 0x00370188
  0038d874  0067a524  _addiu a1,a1,0x6700
  0038d878  4000053c  lui a1,0x40
  0038d87c  2d202002  move a0,s1
  0038d880  1067a524  addiu a1,a1,0x6710
  0038d884  5ac00d0c  jal 0x00370168
  0038d888  2d300002  _move a2,s0
  0038d88c  70b94226  addiu v0,s2,-0x4690
  0038d890  3000b07b  lq s0,0x30(sp)
  0038d894  2000b17b  lq s1,0x20(sp)
  0038d898  1000b27b  lq s2,0x10(sp)
  0038d89c  0000bfdf  ld ra,0x0(sp)
  0038d8a0  0800e003  jr ra
  0038d8a4  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038d8a8 @ 0038d8a8 ====
  0038d8a8  d0ffbd27  addiu sp,sp,-0x30
  0038d8ac  3f00023c  lui v0,0x3f
  0038d8b0  2000b07f  sq s0,0x20(sp)
  0038d8b4  609c4224  addiu v0,v0,-0x63a0
  0038d8b8  1000b17f  sq s1,0x10(sp)
  0038d8bc  2d808000  move s0,a0
  0038d8c0  0000bfff  sd ra,0x0(sp)
  0038d8c4  000002ae  sw v0,0x0(s0)
  0038d8c8  0800068e  lw a2,0x8(s0)
  0038d8cc  0700c010  beq a2,zero,0x0038d8ec
  0038d8d0  2d88a000  _move s1,a1
  0038d8d4  0000c28c  lw v0,0x0(a2)
  0038d8d8  03000524  li a1,0x3
  0038d8dc  08004484  lh a0,0x8(v0)
  0038d8e0  0c00438c  lw v1,0xc(v0)
  0038d8e4  09f86000  jalr v1
  0038d8e8  2120c400  _addu a0,a2,a0
  0038d8ec  3e00023c  lui v0,0x3e
  0038d8f0  01002332  andi v1,s1,0x1
  0038d8f4  40004224  addiu v0,v0,0x40
  0038d8f8  05006010  beq v1,zero,0x0038d910
  0038d8fc  000002ae  _sw v0,0x0(s0)
  0038d900  3d00033c  lui v1,0x3d
  0038d904  e087628c  lw v0,-0x7820(v1)
  0038d908  09f84000  jalr v0
  0038d90c  2d200002  _move a0,s0
  0038d910  2000b07b  lq s0,0x20(sp)
  0038d914  1000b17b  lq s1,0x10(sp)
  0038d918  0000bfdf  ld ra,0x0(sp)
  0038d91c  0800e003  jr ra
  0038d920  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038d928 @ 0038d928 ====
  0038d928  b0ffbd27  addiu sp,sp,-0x50
  0038d92c  4a00033c  lui v1,0x4a
  0038d930  2000b27f  sq s2,0x20(sp)
  0038d934  80b9628c  lw v0,-0x4680(v1)
  0038d938  2d906000  move s2,v1
  0038d93c  4000b07f  sq s0,0x40(sp)
  0038d940  3000b17f  sq s1,0x30(sp)
  0038d944  1000b37f  sq s3,0x10(sp)
  0038d948  18004014  bne v0,zero,0x0038d9ac
  0038d94c  0000bfff  _sd ra,0x0(sp)
  0038d950  4a00023c  lui v0,0x4a
  0038d954  70b9438c  lw v1,-0x4690(v0)
  0038d958  2d984000  move s3,v0
  0038d95c  0e006014  bne v1,zero,0x0038d998
  0038d960  70b95124  _addiu s1,v0,-0x4690
  0038d964  4100033c  lui v1,0x41
  0038d968  c0eb628c  lw v0,-0x1440(v1)
  0038d96c  05004014  bne v0,zero,0x0038d984
  0038d970  c0eb7024  _addiu s0,v1,-0x1440
  0038d974  4000053c  lui a1,0x40
  0038d978  2d200002  move a0,s0
  0038d97c  62c00d0c  jal 0x00370188
  0038d980  0067a524  _addiu a1,a1,0x6700
  0038d984  4000053c  lui a1,0x40
  0038d988  2d202002  move a0,s1
  0038d98c  1067a524  addiu a1,a1,0x6710
  0038d990  5ac00d0c  jal 0x00370168
  0038d994  2d300002  _move a2,s0
  0038d998  4000053c  lui a1,0x40
  0038d99c  70b96626  addiu a2,s3,-0x4690
  0038d9a0  2867a524  addiu a1,a1,0x6728
  0038d9a4  5ac00d0c  jal 0x00370168
  0038d9a8  80b94426  _addiu a0,s2,-0x4680
  0038d9ac  80b94226  addiu v0,s2,-0x4680
  0038d9b0  4000b07b  lq s0,0x40(sp)
  0038d9b4  3000b17b  lq s1,0x30(sp)
  0038d9b8  2000b27b  lq s2,0x20(sp)
  0038d9bc  1000b37b  lq s3,0x10(sp)
  0038d9c0  0000bfdf  ld ra,0x0(sp)
  0038d9c4  0800e003  jr ra
  0038d9c8  5000bd27  _addiu sp,sp,0x50

# ==== Kaim_CObject_0038d9e0 @ 0038d9e0 ====
  0038d9e0  c0ffbd27  addiu sp,sp,-0x40
  0038d9e4  4a00023c  lui v0,0x4a
  0038d9e8  2000b17f  sq s1,0x20(sp)
  0038d9ec  1000b27f  sq s2,0x10(sp)
  0038d9f0  b0b95124  addiu s1,v0,-0x4650
  0038d9f4  b0b9438c  lw v1,-0x4650(v0)
  0038d9f8  2d904000  move s2,v0
  0038d9fc  3000b07f  sq s0,0x30(sp)
  0038da00  0e006014  bne v1,zero,0x0038da3c
  0038da04  0000bfff  _sd ra,0x0(sp)
  0038da08  4100033c  lui v1,0x41
  0038da0c  c0eb628c  lw v0,-0x1440(v1)
  0038da10  05004014  bne v0,zero,0x0038da28
  0038da14  c0eb7024  _addiu s0,v1,-0x1440
  0038da18  4000053c  lui a1,0x40
  0038da1c  2d200002  move a0,s0
  0038da20  62c00d0c  jal 0x00370188
  0038da24  0067a524  _addiu a1,a1,0x6700
  0038da28  4000053c  lui a1,0x40
  0038da2c  2d202002  move a0,s1
  0038da30  8067a524  addiu a1,a1,0x6780
  0038da34  5ac00d0c  jal 0x00370168
  0038da38  2d300002  _move a2,s0
  0038da3c  b0b94226  addiu v0,s2,-0x4650
  0038da40  3000b07b  lq s0,0x30(sp)
  0038da44  2000b17b  lq s1,0x20(sp)
  0038da48  1000b27b  lq s2,0x10(sp)
  0038da4c  0000bfdf  ld ra,0x0(sp)
  0038da50  0800e003  jr ra
  0038da54  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038da58 @ 0038da58 ====
  0038da58  b0ffbd27  addiu sp,sp,-0x50
  0038da5c  4a00033c  lui v1,0x4a
  0038da60  2000b27f  sq s2,0x20(sp)
  0038da64  c0b9628c  lw v0,-0x4640(v1)
  0038da68  2d906000  move s2,v1
  0038da6c  4000b07f  sq s0,0x40(sp)
  0038da70  3000b17f  sq s1,0x30(sp)
  0038da74  1000b37f  sq s3,0x10(sp)
  0038da78  18004014  bne v0,zero,0x0038dadc
  0038da7c  0000bfff  _sd ra,0x0(sp)
  0038da80  4a00023c  lui v0,0x4a
  0038da84  70b9438c  lw v1,-0x4690(v0)
  0038da88  2d984000  move s3,v0
  0038da8c  0e006014  bne v1,zero,0x0038dac8
  0038da90  70b95124  _addiu s1,v0,-0x4690
  0038da94  4100033c  lui v1,0x41
  0038da98  c0eb628c  lw v0,-0x1440(v1)
  0038da9c  05004014  bne v0,zero,0x0038dab4
  0038daa0  c0eb7024  _addiu s0,v1,-0x1440
  0038daa4  4000053c  lui a1,0x40
  0038daa8  2d200002  move a0,s0
  0038daac  62c00d0c  jal 0x00370188
  0038dab0  0067a524  _addiu a1,a1,0x6700
  0038dab4  4000053c  lui a1,0x40
  0038dab8  2d202002  move a0,s1
  0038dabc  1067a524  addiu a1,a1,0x6710
  0038dac0  5ac00d0c  jal 0x00370168
  0038dac4  2d300002  _move a2,s0
  0038dac8  4000053c  lui a1,0x40
  0038dacc  70b96626  addiu a2,s3,-0x4690
  0038dad0  b067a524  addiu a1,a1,0x67b0
  0038dad4  5ac00d0c  jal 0x00370168
  0038dad8  c0b94426  _addiu a0,s2,-0x4640
  0038dadc  c0b94226  addiu v0,s2,-0x4640
  0038dae0  4000b07b  lq s0,0x40(sp)
  0038dae4  3000b17b  lq s1,0x30(sp)
  0038dae8  2000b27b  lq s2,0x20(sp)
  0038daec  1000b37b  lq s3,0x10(sp)
  0038daf0  0000bfdf  ld ra,0x0(sp)
  0038daf4  0800e003  jr ra
  0038daf8  5000bd27  _addiu sp,sp,0x50

# ==== FUN_0038db00 @ 0038db00 ====
  0038db00  3e00023c  lui v0,0x3e
  0038db04  f0ffbd27  addiu sp,sp,-0x10
  0038db08  40004224  addiu v0,v0,0x40
  0038db0c  0000bfff  sd ra,0x0(sp)
  0038db10  0100a530  andi a1,a1,0x1
  0038db14  0500a010  beq a1,zero,0x0038db2c
  0038db18  000082ac  _sw v0,0x0(a0)
  0038db1c  3d00033c  lui v1,0x3d
  0038db20  e087628c  lw v0,-0x7820(v1)
  0038db24  09f84000  jalr v0
  0038db28  00000000  _nop
  0038db2c  0000bfdf  ld ra,0x0(sp)
  0038db30  0800e003  jr ra
  0038db34  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038db38 @ 0038db38 ====
  0038db38  c0ffbd27  addiu sp,sp,-0x40
  0038db3c  4a00023c  lui v0,0x4a
  0038db40  2000b17f  sq s1,0x20(sp)
  0038db44  1000b27f  sq s2,0x10(sp)
  0038db48  d0b95124  addiu s1,v0,-0x4630
  0038db4c  d0b9438c  lw v1,-0x4630(v0)
  0038db50  2d904000  move s2,v0
  0038db54  3000b07f  sq s0,0x30(sp)
  0038db58  0e006014  bne v1,zero,0x0038db94
  0038db5c  0000bfff  _sd ra,0x0(sp)
  0038db60  4100033c  lui v1,0x41
  0038db64  c0eb628c  lw v0,-0x1440(v1)
  0038db68  05004014  bne v0,zero,0x0038db80
  0038db6c  c0eb7024  _addiu s0,v1,-0x1440
  0038db70  4000053c  lui a1,0x40
  0038db74  2d200002  move a0,s0
  0038db78  62c00d0c  jal 0x00370188
  0038db7c  0067a524  _addiu a1,a1,0x6700
  0038db80  4000053c  lui a1,0x40
  0038db84  2d202002  move a0,s1
  0038db88  c867a524  addiu a1,a1,0x67c8
  0038db8c  5ac00d0c  jal 0x00370168
  0038db90  2d300002  _move a2,s0
  0038db94  d0b94226  addiu v0,s2,-0x4630
  0038db98  3000b07b  lq s0,0x30(sp)
  0038db9c  2000b17b  lq s1,0x20(sp)
  0038dba0  1000b27b  lq s2,0x10(sp)
  0038dba4  0000bfdf  ld ra,0x0(sp)
  0038dba8  0800e003  jr ra
  0038dbac  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038dbb0 @ 0038dbb0 ====
  0038dbb0  d0ffbd27  addiu sp,sp,-0x30
  0038dbb4  3e00023c  lui v0,0x3e
  0038dbb8  2000b07f  sq s0,0x20(sp)
  0038dbbc  40004224  addiu v0,v0,0x40
  0038dbc0  1000b17f  sq s1,0x10(sp)
  0038dbc4  2d80a000  move s0,a1
  0038dbc8  0000bfff  sd ra,0x0(sp)
  0038dbcc  2d888000  move s1,a0
  0038dbd0  280022ae  sw v0,0x28(s1)
  0038dbd4  64970b0c  jal 0x002e5d90
  0038dbd8  2d280000  _move a1,zero
  0038dbdc  01001032  andi s0,s0,0x1
  0038dbe0  04000012  beq s0,zero,0x0038dbf4
  0038dbe4  3d00033c  _lui v1,0x3d
  0038dbe8  e087628c  lw v0,-0x7820(v1)
  0038dbec  09f84000  jalr v0
  0038dbf0  2d202002  _move a0,s1
  0038dbf4  2000b07b  lq s0,0x20(sp)
  0038dbf8  1000b17b  lq s1,0x10(sp)
  0038dbfc  0000bfdf  ld ra,0x0(sp)
  0038dc00  0800e003  jr ra
  0038dc04  3000bd27  _addiu sp,sp,0x30

# ==== Kaim_CFreeListBlock_0038dc08 @ 0038dc08 ====
  0038dc08  e0ffbd27  addiu sp,sp,-0x20
  0038dc0c  4a00033c  lui v1,0x4a
  0038dc10  1000b07f  sq s0,0x10(sp)
  0038dc14  e0b9628c  lw v0,-0x4620(v1)
  0038dc18  e0b97024  addiu s0,v1,-0x4620
  0038dc1c  09004014  bne v0,zero,0x0038dc44
  0038dc20  0000bfff  _sd ra,0x0(sp)
  0038dc24  d8350e0c  jal 0x0038d760
  0038dc28  00000000  _nop
  0038dc2c  4000053c  lui a1,0x40
  0038dc30  4a00063c  lui a2,0x4a
  0038dc34  0068a524  addiu a1,a1,0x6800
  0038dc38  a0b9c624  addiu a2,a2,-0x4660
  0038dc3c  5ac00d0c  jal 0x00370168
  0038dc40  2d200002  _move a0,s0
  0038dc44  2d100002  move v0,s0
  0038dc48  0000bfdf  ld ra,0x0(sp)
  0038dc4c  1000b07b  lq s0,0x10(sp)
  0038dc50  0800e003  jr ra
  0038dc54  2000bd27  _addiu sp,sp,0x20

# ==== Kaim_CObject_0038dc58 @ 0038dc58 ====
  0038dc58  c0ffbd27  addiu sp,sp,-0x40
  0038dc5c  4a00023c  lui v0,0x4a
  0038dc60  2000b17f  sq s1,0x20(sp)
  0038dc64  1000b27f  sq s2,0x10(sp)
  0038dc68  f0b95124  addiu s1,v0,-0x4610
  0038dc6c  f0b9438c  lw v1,-0x4610(v0)
  0038dc70  2d904000  move s2,v0
  0038dc74  3000b07f  sq s0,0x30(sp)
  0038dc78  0e006014  bne v1,zero,0x0038dcb4
  0038dc7c  0000bfff  _sd ra,0x0(sp)
  0038dc80  4100033c  lui v1,0x41
  0038dc84  c0eb628c  lw v0,-0x1440(v1)
  0038dc88  05004014  bne v0,zero,0x0038dca0
  0038dc8c  c0eb7024  _addiu s0,v1,-0x1440
  0038dc90  4000053c  lui a1,0x40
  0038dc94  2d200002  move a0,s0
  0038dc98  62c00d0c  jal 0x00370188
  0038dc9c  0067a524  _addiu a1,a1,0x6700
  0038dca0  4000053c  lui a1,0x40
  0038dca4  2d202002  move a0,s1
  0038dca8  1868a524  addiu a1,a1,0x6818
  0038dcac  5ac00d0c  jal 0x00370168
  0038dcb0  2d300002  _move a2,s0
  0038dcb4  f0b94226  addiu v0,s2,-0x4610
  0038dcb8  3000b07b  lq s0,0x30(sp)
  0038dcbc  2000b17b  lq s1,0x20(sp)
  0038dcc0  1000b27b  lq s2,0x10(sp)
  0038dcc4  0000bfdf  ld ra,0x0(sp)
  0038dcc8  0800e003  jr ra
  0038dccc  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038dcd0 @ 0038dcd0 ====
  0038dcd0  3e00023c  lui v0,0x3e
  0038dcd4  f0ffbd27  addiu sp,sp,-0x10
  0038dcd8  40004224  addiu v0,v0,0x40
  0038dcdc  0000bfff  sd ra,0x0(sp)
  0038dce0  0100a530  andi a1,a1,0x1
  0038dce4  0500a010  beq a1,zero,0x0038dcfc
  0038dce8  000082ac  _sw v0,0x0(a0)
  0038dcec  3d00033c  lui v1,0x3d
  0038dcf0  e087628c  lw v0,-0x7820(v1)
  0038dcf4  09f84000  jalr v0
  0038dcf8  00000000  _nop
  0038dcfc  0000bfdf  ld ra,0x0(sp)
  0038dd00  0800e003  jr ra
  0038dd04  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038dd08 @ 0038dd08 ====
  0038dd08  c0ffbd27  addiu sp,sp,-0x40
  0038dd0c  4a00023c  lui v0,0x4a
  0038dd10  2000b17f  sq s1,0x20(sp)
  0038dd14  1000b27f  sq s2,0x10(sp)
  0038dd18  00ba5124  addiu s1,v0,-0x4600
  0038dd1c  00ba438c  lw v1,-0x4600(v0)
  0038dd20  2d904000  move s2,v0
  0038dd24  3000b07f  sq s0,0x30(sp)
  0038dd28  0e006014  bne v1,zero,0x0038dd64
  0038dd2c  0000bfff  _sd ra,0x0(sp)
  0038dd30  4100033c  lui v1,0x41
  0038dd34  c0eb628c  lw v0,-0x1440(v1)
  0038dd38  05004014  bne v0,zero,0x0038dd50
  0038dd3c  c0eb7024  _addiu s0,v1,-0x1440
  0038dd40  4000053c  lui a1,0x40
  0038dd44  2d200002  move a0,s0
  0038dd48  62c00d0c  jal 0x00370188
  0038dd4c  0067a524  _addiu a1,a1,0x6700
  0038dd50  4000053c  lui a1,0x40
  0038dd54  2d202002  move a0,s1
  0038dd58  4868a524  addiu a1,a1,0x6848
  0038dd5c  5ac00d0c  jal 0x00370168
  0038dd60  2d300002  _move a2,s0
  0038dd64  00ba4226  addiu v0,s2,-0x4600
  0038dd68  3000b07b  lq s0,0x30(sp)
  0038dd6c  2000b17b  lq s1,0x20(sp)
  0038dd70  1000b27b  lq s2,0x10(sp)
  0038dd74  0000bfdf  ld ra,0x0(sp)
  0038dd78  0800e003  jr ra
  0038dd7c  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038dd80 @ 0038dd80 ====
  0038dd80  b0ffbd27  addiu sp,sp,-0x50
  0038dd84  3f00023c  lui v0,0x3f
  0038dd88  3000b17f  sq s1,0x30(sp)
  0038dd8c  809a4224  addiu v0,v0,-0x6580
  0038dd90  2000b27f  sq s2,0x20(sp)
  0038dd94  2d888000  move s1,a0
  0038dd98  1000b37f  sq s3,0x10(sp)
  0038dd9c  2d90a000  move s2,a1
  0038dda0  4000b07f  sq s0,0x40(sp)
  0038dda4  0000bfff  sd ra,0x0(sp)
  0038dda8  000022ae  sw v0,0x0(s1)
  0038ddac  1800238e  lw v1,0x18(s1)
  0038ddb0  19006010  beq v1,zero,0x0038de18
  0038ddb4  3e00133c  _lui s3,0x3e
  0038ddb8  0400258e  lw a1,0x4(s1)
  0038ddbc  1600a010  beq a1,zero,0x0038de18
  0038ddc0  14000224  _li v0,0x14
  0038ddc4  f0ffa38c  lw v1,-0x10(a1)
  0038ddc8  18206200  mult a0,v1,v0
  0038ddcc  21808500  addu s0,a0,a1
  0038ddd0  0d00b050  beql a1,s0,0x0038de08
  0038ddd4  0400248e  _lw a0,0x4(s1)
  0038ddd8  ecff1026  addiu s0,s0,-0x14
  0038dddc  00000000  nop
  0038dde0  2d280000  move a1,zero
  0038dde4  0000028e  lw v0,0x0(s0)
  0038dde8  08004484  lh a0,0x8(v0)
  0038ddec  0c00438c  lw v1,0xc(v0)
  0038ddf0  09f86000  jalr v1
  0038ddf4  21200402  _addu a0,s0,a0
  0038ddf8  0400228e  lw v0,0x4(s1)
  0038ddfc  f8ff5014  bne v0,s0,0x0038dde0
  0038de00  ecff1026  _addiu s0,s0,-0x14
  0038de04  0400248e  lw a0,0x4(s1)
  0038de08  3d00023c  lui v0,0x3d
  0038de0c  e087438c  lw v1,-0x7820(v0)
  0038de10  09f86000  jalr v1
  0038de14  f0ff8424  _addiu a0,a0,-0x10
  0038de18  40006226  addiu v0,s3,0x40
  0038de1c  01004332  andi v1,s2,0x1
  0038de20  05006010  beq v1,zero,0x0038de38
  0038de24  000022ae  _sw v0,0x0(s1)
  0038de28  3d00033c  lui v1,0x3d
  0038de2c  e087628c  lw v0,-0x7820(v1)
  0038de30  09f84000  jalr v0
  0038de34  2d202002  _move a0,s1
  0038de38  4000b07b  lq s0,0x40(sp)
  0038de3c  3000b17b  lq s1,0x30(sp)
  0038de40  2000b27b  lq s2,0x20(sp)
  0038de44  1000b37b  lq s3,0x10(sp)
  0038de48  0000bfdf  ld ra,0x0(sp)
  0038de4c  0800e003  jr ra
  0038de50  5000bd27  _addiu sp,sp,0x50

# ==== FUN_0038de58 @ 0038de58 ====
  0038de58  3e00023c  lui v0,0x3e
  0038de5c  f0ffbd27  addiu sp,sp,-0x10
  0038de60  40004224  addiu v0,v0,0x40
  0038de64  0000bfff  sd ra,0x0(sp)
  0038de68  0100a530  andi a1,a1,0x1
  0038de6c  0500a010  beq a1,zero,0x0038de84
  0038de70  000082ac  _sw v0,0x0(a0)
  0038de74  3d00033c  lui v1,0x3d
  0038de78  e087628c  lw v0,-0x7820(v1)
  0038de7c  09f84000  jalr v0
  0038de80  00000000  _nop
  0038de84  0000bfdf  ld ra,0x0(sp)
  0038de88  0800e003  jr ra
  0038de8c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038de90 @ 0038de90 ====
  0038de90  c0ffbd27  addiu sp,sp,-0x40
  0038de94  4a00023c  lui v0,0x4a
  0038de98  2000b17f  sq s1,0x20(sp)
  0038de9c  1000b27f  sq s2,0x10(sp)
  0038dea0  10ba5124  addiu s1,v0,-0x45f0
  0038dea4  10ba438c  lw v1,-0x45f0(v0)
  0038dea8  2d904000  move s2,v0
  0038deac  3000b07f  sq s0,0x30(sp)
  0038deb0  0e006014  bne v1,zero,0x0038deec
  0038deb4  0000bfff  _sd ra,0x0(sp)
  0038deb8  4100033c  lui v1,0x41
  0038debc  c0eb628c  lw v0,-0x1440(v1)
  0038dec0  05004014  bne v0,zero,0x0038ded8
  0038dec4  c0eb7024  _addiu s0,v1,-0x1440
  0038dec8  4000053c  lui a1,0x40
  0038decc  2d200002  move a0,s0
  0038ded0  62c00d0c  jal 0x00370188
  0038ded4  0067a524  _addiu a1,a1,0x6700
  0038ded8  4000053c  lui a1,0x40
  0038dedc  2d202002  move a0,s1
  0038dee0  8068a524  addiu a1,a1,0x6880
  0038dee4  5ac00d0c  jal 0x00370168
  0038dee8  2d300002  _move a2,s0
  0038deec  10ba4226  addiu v0,s2,-0x45f0
  0038def0  3000b07b  lq s0,0x30(sp)
  0038def4  2000b17b  lq s1,0x20(sp)
  0038def8  1000b27b  lq s2,0x10(sp)
  0038defc  0000bfdf  ld ra,0x0(sp)
  0038df00  0800e003  jr ra
  0038df04  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038df08 @ 0038df08 ====
  0038df08  3e00023c  lui v0,0x3e
  0038df0c  f0ffbd27  addiu sp,sp,-0x10
  0038df10  40004224  addiu v0,v0,0x40
  0038df14  0000bfff  sd ra,0x0(sp)
  0038df18  0100a530  andi a1,a1,0x1
  0038df1c  0500a010  beq a1,zero,0x0038df34
  0038df20  000082ac  _sw v0,0x0(a0)
  0038df24  3d00033c  lui v1,0x3d
  0038df28  e087628c  lw v0,-0x7820(v1)
  0038df2c  09f84000  jalr v0
  0038df30  00000000  _nop
  0038df34  0000bfdf  ld ra,0x0(sp)
  0038df38  0800e003  jr ra
  0038df3c  1000bd27  _addiu sp,sp,0x10

# ==== Kaim_CObject_0038df40 @ 0038df40 ====
  0038df40  c0ffbd27  addiu sp,sp,-0x40
  0038df44  4a00023c  lui v0,0x4a
  0038df48  2000b17f  sq s1,0x20(sp)
  0038df4c  1000b27f  sq s2,0x10(sp)
  0038df50  20ba5124  addiu s1,v0,-0x45e0
  0038df54  20ba438c  lw v1,-0x45e0(v0)
  0038df58  2d904000  move s2,v0
  0038df5c  3000b07f  sq s0,0x30(sp)
  0038df60  0e006014  bne v1,zero,0x0038df9c
  0038df64  0000bfff  _sd ra,0x0(sp)
  0038df68  4100033c  lui v1,0x41
  0038df6c  c0eb628c  lw v0,-0x1440(v1)
  0038df70  05004014  bne v0,zero,0x0038df88
  0038df74  c0eb7024  _addiu s0,v1,-0x1440
  0038df78  4000053c  lui a1,0x40
  0038df7c  2d200002  move a0,s0
  0038df80  62c00d0c  jal 0x00370188
  0038df84  0067a524  _addiu a1,a1,0x6700
  0038df88  4000053c  lui a1,0x40
  0038df8c  2d202002  move a0,s1
  0038df90  b868a524  addiu a1,a1,0x68b8
  0038df94  5ac00d0c  jal 0x00370168
  0038df98  2d300002  _move a2,s0
  0038df9c  20ba4226  addiu v0,s2,-0x45e0
  0038dfa0  3000b07b  lq s0,0x30(sp)
  0038dfa4  2000b17b  lq s1,0x20(sp)
  0038dfa8  1000b27b  lq s2,0x10(sp)
  0038dfac  0000bfdf  ld ra,0x0(sp)
  0038dfb0  0800e003  jr ra
  0038dfb4  4000bd27  _addiu sp,sp,0x40

# ==== FUN_0038dfb8 @ 0038dfb8 ====
  0038dfb8  b0ffbd27  addiu sp,sp,-0x50
  0038dfbc  3f00023c  lui v0,0x3f
  0038dfc0  3000b17f  sq s1,0x30(sp)
  0038dfc4  409b4224  addiu v0,v0,-0x64c0
  0038dfc8  2000b27f  sq s2,0x20(sp)
  0038dfcc  2d888000  move s1,a0
  0038dfd0  1000b37f  sq s3,0x10(sp)
  0038dfd4  2d90a000  move s2,a1
  0038dfd8  4000b07f  sq s0,0x40(sp)
  0038dfdc  0000bfff  sd ra,0x0(sp)
  0038dfe0  000022ae  sw v0,0x0(s1)
  0038dfe4  1800238e  lw v1,0x18(s1)
  0038dfe8  19006010  beq v1,zero,0x0038e050
  0038dfec  3e00133c  _lui s3,0x3e
  0038dff0  0400258e  lw a1,0x4(s1)
  0038dff4  1600a010  beq a1,zero,0x0038e050
  0038dff8  14000224  _li v0,0x14
  0038dffc  f0ffa38c  lw v1,-0x10(a1)
  0038e000  18206200  mult a0,v1,v0
  0038e004  21808500  addu s0,a0,a1
  0038e008  0d00b050  beql a1,s0,0x0038e040
  0038e00c  0400248e  _lw a0,0x4(s1)
  0038e010  ecff1026  addiu s0,s0,-0x14
  0038e014  00000000  nop
  0038e018  2d280000  move a1,zero
  0038e01c  0000028e  lw v0,0x0(s0)
  0038e020  08004484  lh a0,0x8(v0)
  0038e024  0c00438c  lw v1,0xc(v0)
  0038e028  09f86000  jalr v1
  0038e02c  21200402  _addu a0,s0,a0
  0038e030  0400228e  lw v0,0x4(s1)
  0038e034  f8ff5014  bne v0,s0,0x0038e018
  0038e038  ecff1026  _addiu s0,s0,-0x14
  0038e03c  0400248e  lw a0,0x4(s1)
  0038e040  3d00023c  lui v0,0x3d
  0038e044  e087438c  lw v1,-0x7820(v0)
  0038e048  09f86000  jalr v1
  0038e04c  f0ff8424  _addiu a0,a0,-0x10
  0038e050  40006226  addiu v0,s3,0x40
  0038e054  01004332  andi v1,s2,0x1
  0038e058  05006010  beq v1,zero,0x0038e070
  0038e05c  000022ae  _sw v0,0x0(s1)
  0038e060  3d00033c  lui v1,0x3d
  0038e064  e087628c  lw v0,-0x7820(v1)
  0038e068  09f84000  jalr v0
  0038e06c  2d202002  _move a0,s1
  0038e070  4000b07b  lq s0,0x40(sp)
  0038e074  3000b17b  lq s1,0x30(sp)
  0038e078  2000b27b  lq s2,0x20(sp)
  0038e07c  1000b37b  lq s3,0x10(sp)
  0038e080  0000bfdf  ld ra,0x0(sp)
  0038e084  0800e003  jr ra
  0038e088  5000bd27  _addiu sp,sp,0x50

# ==== FUN_0038e090 @ 0038e090 ====
  0038e090  3f00033c  lui v1,0x3f
  0038e094  70a76290  lbu v0,-0x5890(v1)
  0038e098  01004054  bnel v0,zero,0x0038e0a0
  0038e09c  000480ac  _sw zero,0x400(a0)
  0038e0a0  70a760a0  sb zero,-0x5890(v1)
  0038e0a4  0800e003  jr ra
  0038e0a8  2d108000  _move v0,a0

# ==== FUN_0038e0b0 @ 0038e0b0 ====
  0038e0b0  d0ffbd27  addiu sp,sp,-0x30
  0038e0b4  1000b17f  sq s1,0x10(sp)
  0038e0b8  4500113c  lui s1,0x45
  0038e0bc  2000b07f  sq s0,0x20(sp)
  0038e0c0  d413228e  lw v0,0x13d4(s1)
  0038e0c4  3f00103c  lui s0,0x3f
  0038e0c8  08004014  bne v0,zero,0x0038e0ec
  0038e0cc  0000bfff  _sd ra,0x0(sp)
  0038e0d0  24380e0c  jal 0x0038e090
  0038e0d4  68a30426  _addiu a0,s0,-0x5c98
  0038e0d8  01000224  li v0,0x1
  0038e0dc  2e00043c  lui a0,0x2e
  0038e0e0  d41322ae  sw v0,0x13d4(s1)
  0038e0e4  a4790d0c  jal 0x0035e690
  0038e0e8  90748424  _addiu a0,a0,0x7490
  0038e0ec  68a30226  addiu v0,s0,-0x5c98
  0038e0f0  1000b17b  lq s1,0x10(sp)
  0038e0f4  2000b07b  lq s0,0x20(sp)
  0038e0f8  0000bfdf  ld ra,0x0(sp)
  0038e0fc  0800e003  jr ra
  0038e100  3000bd27  _addiu sp,sp,0x30

# ==== FUN_0038e108 @ 0038e108 ====
  0038e108  50ffbd27  addiu sp,sp,-0xb0
  0038e10c  ff000831  andi t0,t0,0xff
  0038e110  5000b57f  sq s5,0x50(sp)
  0038e114  ff002931  andi t1,t1,0xff
  0038e118  4000b67f  sq s6,0x40(sp)
  0038e11c  2da88000  move s5,a0
  0038e120  3f00023c  lui v0,0x3f
  0038e124  a000b07f  sq s0,0xa0(sp)
  0038e128  6000b47f  sq s4,0x60(sp)
  0038e12c  90a74224  addiu v0,v0,-0x5870
  0038e130  3000b77f  sq s7,0x30(sp)
  0038e134  0800b626  addiu s6,s5,0x8
  0038e138  2000be7f  sq s8,0x20(sp)
  0038e13c  2db8c000  move s7,a2
  0038e140  9000b17f  sq s1,0x90(sp)
  0038e144  2df0e000  move s8,a3
  0038e148  8000b27f  sq s2,0x80(sp)
  0038e14c  2d20c002  move a0,s6
  0038e150  7000b37f  sq s3,0x70(sp)
  0038e154  2da00000  move s4,zero
  0038e158  1000bfff  sd ra,0x10(sp)
  0038e15c  0000a8af  sw t0,0x0(sp)
  0038e160  0400a9af  sw t1,0x4(sp)
  0038e164  f0720d0c  jal 0x0035cbc0
  0038e168  1001a2ae  _sw v0,0x110(s5)
  0038e16c  2c380e0c  jal 0x0038e0b0
  0038e170  00000000  _nop
  0038e174  2d804000  move s0,v0
  0038e178  0004028e  lw v0,0x400(s0)
  0038e17c  11004058  blezl v0,0x0038e1c4
  0038e180  0004038e  _lw v1,0x400(s0)
  0038e184  2d900002  move s2,s0
  0038e188  2d980002  move s3,s0
  0038e18c  00000000  nop
  0038e190  0000448e  lw a0,0x0(s2)
  0038e194  2d886002  move s1,s3
  0038e198  2d28c002  move a1,s6
  0038e19c  9d720d0c  jal 0x0035ca74
  0038e1a0  08008424  _addiu a0,a0,0x8
  0038e1a4  0c004010  beq v0,zero,0x0038e1d8
  0038e1a8  01009426  _addiu s4,s4,0x1
  0038e1ac  0004028e  lw v0,0x400(s0)
  0038e1b0  04003326  addiu s3,s1,0x4
  0038e1b4  2a108202  slt v0,s4,v0
  0038e1b8  f5ff4014  bne v0,zero,0x0038e190
  0038e1bc  04005226  _addiu s2,s2,0x4
  0038e1c0  0004038e  lw v1,0x400(s0)
  0038e1c4  00010224  li v0,0x100
  0038e1c8  06006214  bne v1,v0,0x0038e1e4
  0038e1cc  80180300  _sll v1,v1,0x2
  0038e1d0  0a000010  b 0x0038e1fc
  0038e1d4  2d200000  _move a0,zero
  0038e1d8  000075ae  sw s5,0x0(s3)
  0038e1dc  07000010  b 0x0038e1fc
  0038e1e0  01000424  _li a0,0x1
  0038e1e4  01000424  li a0,0x1
  0038e1e8  21180302  addu v1,s0,v1
  0038e1ec  000075ac  sw s5,0x0(v1)
  0038e1f0  0004028e  lw v0,0x400(s0)
  0038e1f4  01004224  addiu v0,v0,0x1
  0038e1f8  000402ae  sw v0,0x400(s0)
  0038e1fc  ff008230  andi v0,a0,0xff
  0038e200  03004014  bne v0,zero,0x0038e210
  0038e204  ffff0224  _li v0,-0x1
  0038e208  06000010  b 0x0038e224
  0038e20c  0000a2ae  _sw v0,0x0(s5)
  0038e210  2c380e0c  jal 0x0038e0b0
  0038e214  00000000  _nop
  0038e218  0004438c  lw v1,0x400(v0)
  0038e21c  ffff6324  addiu v1,v1,-0x1
  0038e220  0000a3ae  sw v1,0x0(s5)
  0038e224  0400b7ae  sw s7,0x4(s5)
  0038e228  01000224  li v0,0x1
  0038e22c  0801beae  sw s8,0x108(s5)
  0038e230  0000a38f  lw v1,0x0(sp)
  0038e234  04006254  bnel v1,v0,0x0038e248
  0038e238  0c01a0ae  _sw zero,0x10c(s5)
  0038e23c  2e840b0c  jal 0x002e10b8
  0038e240  00000000  _nop
  0038e244  0c01a2ae  sw v0,0x10c(s5)
  0038e248  0400a28f  lw v0,0x4(sp)
  0038e24c  05004010  beq v0,zero,0x0038e264
  0038e250  3c00043c  _lui a0,0x3c
  0038e254  0c01a38e  lw v1,0x10c(s5)
  0038e258  207a828c  lw v0,0x7a20(a0)
  0038e25c  25104300  or v0,v0,v1
  0038e260  207a82ac  sw v0,0x7a20(a0)
  0038e264  2d10a002  move v0,s5
  0038e268  a000b07b  lq s0,0xa0(sp)
  0038e26c  9000b17b  lq s1,0x90(sp)
  0038e270  8000b27b  lq s2,0x80(sp)
  0038e274  7000b37b  lq s3,0x70(sp)
  0038e278  6000b47b  lq s4,0x60(sp)
  0038e27c  5000b57b  lq s5,0x50(sp)
  0038e280  4000b67b  lq s6,0x40(sp)
  0038e284  3000b77b  lq s7,0x30(sp)
  0038e288  2000be7b  lq s8,0x20(sp)
  0038e28c  1000bfdf  ld ra,0x10(sp)
  0038e290  0800e003  jr ra
  0038e294  b000bd27  _addiu sp,sp,0xb0

