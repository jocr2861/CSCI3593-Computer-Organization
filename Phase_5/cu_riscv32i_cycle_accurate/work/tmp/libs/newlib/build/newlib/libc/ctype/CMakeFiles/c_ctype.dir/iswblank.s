	.text
	.file	"iswblank.c"
	.globl	iswblank                //  -- Begin function iswblank
	.type	iswblank,@function
iswblank:                               //  @iswblank
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	add x11 ,  x0 ,  x0
	jal x0, iswblank_l
.Lfunc_end0:
	.size	iswblank, .Lfunc_end0-iswblank
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
