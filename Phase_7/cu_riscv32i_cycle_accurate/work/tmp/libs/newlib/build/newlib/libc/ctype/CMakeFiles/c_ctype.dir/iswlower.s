	.text
	.file	"iswlower.c"
	.globl	iswlower                //  -- Begin function iswlower
	.type	iswlower,@function
iswlower:                               //  @iswlower
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	add x11 ,  x0 ,  x0
	jal x0, iswlower_l
.Lfunc_end0:
	.size	iswlower, .Lfunc_end0-iswlower
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
