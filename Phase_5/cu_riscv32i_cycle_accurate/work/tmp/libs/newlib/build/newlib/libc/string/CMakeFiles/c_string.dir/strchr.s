	.text
	.file	"strchr.c"
	.globl	strchr                  //  -- Begin function strchr
	.type	strchr,@function
strchr:                                 //  @strchr
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	andi x15 ,  x10 ,  3
	andi x14 ,  x11 ,  255
	beq x0, x14, .LBB0_15
.LBB0_1:                                //  %while.cond17.preheader
	beq x0, x15, .LBB0_6
.LBB0_2:
	add x15 ,  x0 ,  x0
.LBB0_3:                                //  %while.body20
                                        //  =>This Inner Loop Header: Depth=1
	lbu x13 ,  0 ( x10 )
	beq x0, x13, .LBB0_22
.LBB0_4:                                //  %if.end23
                                        //    in Loop: Header=BB0_3 Depth=1
	beq x13, x14, .LBB0_24
.LBB0_5:                                //  %if.end28
                                        //    in Loop: Header=BB0_3 Depth=1
	addi x10 ,  x10 ,  1
	andi x13 ,  x10 ,  3
	bltu x0, x13, .LBB0_3
.LBB0_6:                                //  %while.end30
	lw x12 ,  0 ( x10 )
	lui x30 ,  -16843009&4095
	lui x15 ,  (-16843009>>12)&1048575
	srli x30 ,  x30 ,  12&31
	or x13 ,  x15 ,  x30
	lui x30 ,  -2139062144&4095
	srli x30 ,  x30 ,  12&31
	add x13 ,  x13 ,  x12
	xori x11 ,  x12 ,  -1
	and x11 ,  x13 ,  x11
	lui x13 ,  (-2139062144>>12)&1048575
	or x5 ,  x13 ,  x30
	and x11 ,  x5 ,  x11
	bltu x0, x11, .LBB0_10
.LBB0_7:                                //  %land.rhs.preheader
	slli x11 ,  x14 ,  8&31
	or x11 ,  x14 ,  x11
	slli x5 ,  x11 ,  16&31
	or x11 ,  x11 ,  x5
.LBB0_8:                                //  %land.rhs
                                        //  =>This Inner Loop Header: Depth=1
	lui x30 ,  -16843009&4095
	xor x12 ,  x11 ,  x12
	srli x30 ,  x30 ,  12&31
	or x5 ,  x15 ,  x30
	lui x30 ,  -2139062144&4095
	add x5 ,  x5 ,  x12
	xori x12 ,  x12 ,  -1
	srli x30 ,  x30 ,  12&31
	and x12 ,  x5 ,  x12
	or x5 ,  x13 ,  x30
	and x12 ,  x5 ,  x12
	bltu x0, x12, .LBB0_10
.LBB0_9:                                //  %while.body48
                                        //    in Loop: Header=BB0_8 Depth=1
	lw x12 ,  4 ( x10 )
	lui x30 ,  -16843009&4095
	addi x10 ,  x10 ,  4
	srli x30 ,  x30 ,  12&31
	or x5 ,  x15 ,  x30
	lui x30 ,  -2139062144&4095
	srli x30 ,  x30 ,  12&31
	add x5 ,  x5 ,  x12
	xori x6 ,  x12 ,  -1
	and x5 ,  x5 ,  x6
	or x6 ,  x13 ,  x30
	and x5 ,  x6 ,  x5
	beq x0, x5, .LBB0_8
.LBB0_10:                               //  %while.end50
	addi x12 ,  x10 ,  -1
.LBB0_11:                               //  %while.cond51
                                        //  =>This Inner Loop Header: Depth=1
	lbu x13 ,  1 ( x12 )
	addi x15 ,  x12 ,  1
	beq x13, x14, .LBB0_13
.LBB0_12:                               //  %while.cond51
                                        //    in Loop: Header=BB0_11 Depth=1
	add x12 ,  x0 ,  x15
	bltu x0, x13, .LBB0_11
.LBB0_13:                               //  %while.end62
	beq x13, x14, .LBB0_22
.LBB0_14:                               //  %while.end62
	add x15 ,  x0 ,  x0
	add x10 ,  x0 ,  x15
	ret
.LBB0_15:                               //  %while.cond.preheader
	beq x0, x15, .LBB0_18
.LBB0_16:                               //  %while.body
                                        //  =>This Inner Loop Header: Depth=1
	lbu x15 ,  0 ( x10 )
	beq x0, x15, .LBB0_24
.LBB0_17:                               //  %if.end
                                        //    in Loop: Header=BB0_16 Depth=1
	addi x10 ,  x10 ,  1
	andi x15 ,  x10 ,  3
	bltu x0, x15, .LBB0_16
.LBB0_18:                               //  %while.end
	addi x15 ,  x10 ,  -4
	lui x14 ,  (-16843009>>12)&1048575
	lui x13 ,  (-2139062144>>12)&1048575
.LBB0_19:                               //  %while.cond4
                                        //  =>This Inner Loop Header: Depth=1
	lw x12 ,  4 ( x15 )
	lui x30 ,  -16843009&4095
	addi x15 ,  x15 ,  4
	srli x30 ,  x30 ,  12&31
	or x11 ,  x14 ,  x30
	lui x30 ,  -2139062144&4095
	srli x30 ,  x30 ,  12&31
	add x11 ,  x11 ,  x12
	xori x10 ,  x12 ,  -1
	and x11 ,  x11 ,  x10
	or x10 ,  x13 ,  x30
	and x11 ,  x10 ,  x11
	beq x0, x11, .LBB0_19
.LBB0_20:                               //  %while.end10
	andi x14 ,  x12 ,  255
	beq x0, x14, .LBB0_22
.LBB0_21:                               //  %while.cond11.while.cond11_crit_edge
                                        //  =>This Inner Loop Header: Depth=1
	lbu x14 ,  1 ( x15 )
	addi x15 ,  x15 ,  1
	bltu x0, x14, .LBB0_21
.LBB0_22:                               //  %cleanup
	add x10 ,  x0 ,  x15
.LBB0_24:
	ret
.Lfunc_end0:
	.size	strchr, .Lfunc_end0-strchr
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
