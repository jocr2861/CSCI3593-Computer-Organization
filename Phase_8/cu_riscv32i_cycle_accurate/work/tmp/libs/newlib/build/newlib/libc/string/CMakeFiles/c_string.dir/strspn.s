	.text
	.file	"strspn.c"
	.globl	strspn                  //  -- Begin function strspn
	.type	strspn,@function
strspn:                                 //  @strspn
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	lbu x14 ,  0 ( x10 )
	add x15 ,  x0 ,  x10
	beq x0, x14, .LBB0_7
.LBB0_1:                                //  %for.cond.preheader.lr.ph
	lbu x13 ,  0 ( x11 )
	add x15 ,  x0 ,  x10
	beq x0, x13, .LBB0_7
.LBB0_2:                                //  %for.cond.preheader.preheader
	addi x12 ,  x11 ,  1
	add x15 ,  x0 ,  x10
.LBB0_3:                                //  %for.cond.preheader
                                        //  =>This Loop Header: Depth=1
                                        //      Child Loop BB0_5 Depth 2
	add x11 ,  x0 ,  x12
	add x5 ,  x0 ,  x13
.LBB0_5:                                //  %for.body
                                        //    Parent Loop BB0_3 Depth=1
                                        //  =>  This Inner Loop Header: Depth=2
	andi x5 ,  x5 ,  255
	andi x6 ,  x14 ,  255
	beq x6, x5, .LBB0_6
.LBB0_4:                                //  %for.cond
                                        //    in Loop: Header=BB0_5 Depth=2
	lbu x5 ,  0 ( x11 )
	addi x6 ,  x11 ,  1
	add x11 ,  x0 ,  x6
	bltu x0, x5, .LBB0_5
	jal x0, .LBB0_7
.LBB0_6:                                //  %if.end8
                                        //    in Loop: Header=BB0_3 Depth=1
	lbu x14 ,  1 ( x15 )
	addi x15 ,  x15 ,  1
	bltu x0, x14, .LBB0_3
.LBB0_7:                                //  %while.end
	sub x10 ,  x15 ,  x10
	ret
.Lfunc_end0:
	.size	strspn, .Lfunc_end0-strspn
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
