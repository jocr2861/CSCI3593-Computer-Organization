	.text
	.file	"fcntl.c"
	.globl	fcntl                   //  -- Begin function fcntl
	.type	fcntl,@function
fcntl:                                  //  @fcntl
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	lui x30 ,  errno&4095
	lui x15 ,  (errno>>12)&1048575
	addi x14 ,  x0 ,  88
	addi x10 ,  x0 ,  -1
	srli x30 ,  x30 ,  12&31
	or x15 ,  x15 ,  x30
	sw x14 ,  0 ( x15 )
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end0:
	.size	fcntl, .Lfunc_end0-fcntl
	.cfi_endproc
                                        //  -- End function
	.address_space	0

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
