	.text
	.file	"timesr.c"
	.globl	_times_r                //  -- Begin function _times_r
	.type	_times_r,@function
_times_r:                               //  @_times_r
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	add x10 ,  x0 ,  x11
	jal x0, times
.Lfunc_end0:
	.size	_times_r, .Lfunc_end0-_times_r
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
