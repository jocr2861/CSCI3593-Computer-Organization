	.text
	.file	"mbsnrtowcs.c"
	.globl	_mbsnrtowcs_r           //  -- Begin function _mbsnrtowcs_r
	.type	_mbsnrtowcs_r,@function
_mbsnrtowcs_r:                          //  @_mbsnrtowcs_r
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	addi x2 ,  x2 ,  -40
	.cfi_adjust_cfa_offset 40
	sw x9 ,  32 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 9, -8
	sw x18 ,  28 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 18, -12
	sw x20 ,  20 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 20, -20
	sw x21 ,  16 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 21, -24
	sw x22 ,  12 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 22, -28
	sw x8 ,  8 ( x2 )               //  4-byte Folded Spill
	.cfi_offset 8, -32
	add x8 ,  x0 ,  x15
	add x21 ,  x0 ,  x14
	add x9 ,  x0 ,  x13
	add x20 ,  x0 ,  x12
	add x22 ,  x0 ,  x11
	add x18 ,  x0 ,  x10
	sw x1 ,  36 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 1, -4
	sw x19 ,  24 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 19, -16
	beq x0, x22, .LBB0_6
.LBB0_1:                                //  %if.end
	add x19 ,  x0 ,  x0
	beq x0, x21, .LBB0_17
.LBB0_2:                                //  %while.body.preheader
	lw x12 ,  0 ( x20 )
.LBB0_3:                                //  %while.body
                                        //  =>This Inner Loop Header: Depth=1
	add x10 ,  x0 ,  x18
	add x11 ,  x0 ,  x22
	add x13 ,  x0 ,  x9
	add x14 ,  x0 ,  x8
	call _mbrtowc_r
	bge x0, x10, .LBB0_11
.LBB0_4:                                //  %if.then3
                                        //    in Loop: Header=BB0_3 Depth=1
	lw x15 ,  0 ( x20 )
	sub x9 ,  x9 ,  x10
	addi x22 ,  x22 ,  4
	addi x19 ,  x19 ,  1
	add x12 ,  x10 ,  x15
	sw x12 ,  0 ( x20 )
	bne x21, x19, .LBB0_3
.LBB0_5:
	add x19 ,  x0 ,  x21
	jal x0, .LBB0_17
.LBB0_6:                                //  %while.body.us.preheader
	lw x19 ,  0 ( x20 )
	add x21 ,  x0 ,  x0
	add x20 ,  x0 ,  x21
	sw x19 ,  4 ( x2 )
.LBB0_7:                                //  %while.body.us
                                        //  =>This Inner Loop Header: Depth=1
	add x10 ,  x0 ,  x18
	add x11 ,  x0 ,  x21
	add x12 ,  x0 ,  x19
	add x13 ,  x0 ,  x9
	add x14 ,  x0 ,  x8
	call _mbrtowc_r
	bge x0, x10, .LBB0_10
.LBB0_8:                                //  %if.then3.us
                                        //    in Loop: Header=BB0_7 Depth=1
	addi x20 ,  x20 ,  -1
	sub x9 ,  x9 ,  x10
	add x19 ,  x10 ,  x19
	xori x15 ,  x20 ,  1
	bltu x0, x15, .LBB0_7
.LBB0_9:                                //  %cleanup.loopexit
	sw x19 ,  4 ( x2 )
	jal x0, .LBB0_16
.LBB0_10:                               //  %if.else.loopexit
	sw x19 ,  4 ( x2 )
	sub x19 ,  x0 ,  x20
	addi x20 ,  x2 ,  4
.LBB0_11:                               //  %if.else
	beq x0, x10, .LBB0_14
.LBB0_12:                               //  %if.else
	xori x15 ,  x10 ,  -2
	bltu x0, x15, .LBB0_15
.LBB0_13:                               //  %if.then7
	lw x15 ,  0 ( x20 )
	add x15 ,  x9 ,  x15
	sw x15 ,  0 ( x20 )
	jal x0, .LBB0_17
.LBB0_14:                               //  %if.then11
	sw x0 ,  0 ( x20 )
	jal x0, .LBB0_17
.LBB0_15:                               //  %if.else12
	addi x15 ,  x0 ,  138
	sw x0 ,  0 ( x8 )
	sw x15 ,  0 ( x18 )
.LBB0_16:                               //  %cleanup
	addi x19 ,  x0 ,  -1
.LBB0_17:                               //  %cleanup
	add x10 ,  x0 ,  x19
	lw x8 ,  8 ( x2 )               //  4-byte Folded Reload
	lw x22 ,  12 ( x2 )             //  4-byte Folded Reload
	lw x21 ,  16 ( x2 )             //  4-byte Folded Reload
	lw x20 ,  20 ( x2 )             //  4-byte Folded Reload
	lw x19 ,  24 ( x2 )             //  4-byte Folded Reload
	lw x18 ,  28 ( x2 )             //  4-byte Folded Reload
	lw x9 ,  32 ( x2 )              //  4-byte Folded Reload
	lw x1 ,  36 ( x2 )              //  4-byte Folded Reload
	addi x2 ,  x2 ,  40
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end0:
	.size	_mbsnrtowcs_r, .Lfunc_end0-_mbsnrtowcs_r
	.cfi_endproc
                                        //  -- End function
	.globl	mbsnrtowcs              //  -- Begin function mbsnrtowcs
	.type	mbsnrtowcs,@function
mbsnrtowcs:                             //  @mbsnrtowcs
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	addi x2 ,  x2 ,  -48
	.cfi_adjust_cfa_offset 48
	lui x30 ,  _impure_ptr&4095
	lui x15 ,  (_impure_ptr>>12)&1048575
	sw x18 ,  36 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 18, -12
	sw x9 ,  40 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 9, -8
	sw x20 ,  28 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 20, -20
	sw x21 ,  24 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 21, -24
	sw x22 ,  20 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 22, -28
	sw x23 ,  16 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 23, -32
	sw x8 ,  12 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 8, -36
	add x8 ,  x0 ,  x14
	add x22 ,  x0 ,  x13
	add x9 ,  x0 ,  x12
	add x21 ,  x0 ,  x11
	add x23 ,  x0 ,  x10
	add x20 ,  x0 ,  x0
	sw x1 ,  44 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 1, -4
	sw x19 ,  32 ( x2 )             //  4-byte Folded Spill
	.cfi_offset 19, -16
	srli x30 ,  x30 ,  12&31
	or x15 ,  x15 ,  x30
	lw x18 ,  0 ( x15 )
	beq x0, x23, .LBB1_6
.LBB1_1:                                //  %if.end.i
	beq x0, x22, .LBB1_17
.LBB1_2:                                //  %while.body.preheader.i
	lw x19 ,  0 ( x21 )
.LBB1_3:                                //  %while.body.i
                                        //  =>This Inner Loop Header: Depth=1
	add x10 ,  x0 ,  x18
	add x11 ,  x0 ,  x23
	add x12 ,  x0 ,  x19
	add x13 ,  x0 ,  x9
	add x14 ,  x0 ,  x8
	call _mbrtowc_r
	bge x0, x10, .LBB1_11
.LBB1_4:                                //  %if.then3.i
                                        //    in Loop: Header=BB1_3 Depth=1
	add x19 ,  x10 ,  x19
	sub x9 ,  x9 ,  x10
	addi x23 ,  x23 ,  4
	addi x20 ,  x20 ,  1
	sw x19 ,  0 ( x21 )
	bne x22, x20, .LBB1_3
.LBB1_5:
	add x20 ,  x0 ,  x22
	jal x0, .LBB1_17
.LBB1_6:                                //  %while.body.us.preheader.i
	lw x19 ,  0 ( x21 )
	add x21 ,  x0 ,  x20
	sw x19 ,  8 ( x2 )
.LBB1_7:                                //  %while.body.us.i
                                        //  =>This Inner Loop Header: Depth=1
	add x10 ,  x0 ,  x18
	add x11 ,  x0 ,  x20
	add x12 ,  x0 ,  x19
	add x13 ,  x0 ,  x9
	add x14 ,  x0 ,  x8
	call _mbrtowc_r
	bge x0, x10, .LBB1_10
.LBB1_8:                                //  %if.then3.us.i
                                        //    in Loop: Header=BB1_7 Depth=1
	addi x21 ,  x21 ,  -1
	sub x9 ,  x9 ,  x10
	add x19 ,  x10 ,  x19
	xori x15 ,  x21 ,  1
	bltu x0, x15, .LBB1_7
.LBB1_9:                                //  %cleanup.loopexit.i
	sw x19 ,  8 ( x2 )
	jal x0, .LBB1_16
.LBB1_10:                               //  %if.else.loopexit.i
	sub x20 ,  x0 ,  x21
	addi x21 ,  x2 ,  8
	sw x19 ,  8 ( x2 )
.LBB1_11:                               //  %if.else.i
	beq x0, x10, .LBB1_14
.LBB1_12:                               //  %if.else.i
	xori x15 ,  x10 ,  -2
	bltu x0, x15, .LBB1_15
.LBB1_13:                               //  %if.then7.i
	add x15 ,  x9 ,  x19
	sw x15 ,  0 ( x21 )
	jal x0, .LBB1_17
.LBB1_14:                               //  %if.then11.i
	sw x0 ,  0 ( x21 )
	jal x0, .LBB1_17
.LBB1_15:                               //  %if.else12.i
	addi x15 ,  x0 ,  138
	sw x0 ,  0 ( x8 )
	sw x15 ,  0 ( x18 )
.LBB1_16:                               //  %_mbsnrtowcs_r.exit
	addi x20 ,  x0 ,  -1
.LBB1_17:                               //  %_mbsnrtowcs_r.exit
	add x10 ,  x0 ,  x20
	lw x8 ,  12 ( x2 )              //  4-byte Folded Reload
	lw x23 ,  16 ( x2 )             //  4-byte Folded Reload
	lw x22 ,  20 ( x2 )             //  4-byte Folded Reload
	lw x21 ,  24 ( x2 )             //  4-byte Folded Reload
	lw x20 ,  28 ( x2 )             //  4-byte Folded Reload
	lw x19 ,  32 ( x2 )             //  4-byte Folded Reload
	lw x18 ,  36 ( x2 )             //  4-byte Folded Reload
	lw x9 ,  40 ( x2 )              //  4-byte Folded Reload
	lw x1 ,  44 ( x2 )              //  4-byte Folded Reload
	addi x2 ,  x2 ,  48
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end1:
	.size	mbsnrtowcs, .Lfunc_end1-mbsnrtowcs
	.cfi_endproc
                                        //  -- End function
	.address_space	0

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
