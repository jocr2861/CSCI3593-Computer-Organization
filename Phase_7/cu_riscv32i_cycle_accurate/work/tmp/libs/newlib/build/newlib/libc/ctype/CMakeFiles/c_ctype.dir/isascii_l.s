	.text
	.file	"isascii_l.c"
	.globl	isascii_l               //  -- Begin function isascii_l
	.type	isascii_l,@function
isascii_l:                              //  @isascii_l
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	sltiu x10 ,  x10 ,  128
	ret
.Lfunc_end0:
	.size	isascii_l, .Lfunc_end0-isascii_l
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
