	.text
	.file	"sf_pow10.c"
	.globl	pow10f                  //  -- Begin function pow10f
	.type	pow10f,@function
pow10f:                                 //  @pow10f
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	add x11 ,  x0 ,  x10
	lui x10 ,  (1092616192>>12)&1048575
	jal x0, powf
.Lfunc_end0:
	.size	pow10f, .Lfunc_end0-pow10f
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
