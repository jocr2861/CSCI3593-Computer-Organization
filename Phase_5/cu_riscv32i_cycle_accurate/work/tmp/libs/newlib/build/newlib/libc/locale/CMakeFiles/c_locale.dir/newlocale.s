	.text
	.file	"newlocale.c"
	.globl	_newlocale_r            //  -- Begin function _newlocale_r
	.type	_newlocale_r,@function
_newlocale_r:                           //  @_newlocale_r
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	lui x30 ,  __global_locale&4095
	lui x15 ,  (__global_locale>>12)&1048575
	srli x30 ,  x30 ,  12&31
	or x10 ,  x15 ,  x30
	ret
.Lfunc_end0:
	.size	_newlocale_r, .Lfunc_end0-_newlocale_r
	.cfi_endproc
                                        //  -- End function
	.globl	newlocale               //  -- Begin function newlocale
	.type	newlocale,@function
newlocale:                              //  @newlocale
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	lui x30 ,  __global_locale&4095
	lui x15 ,  (__global_locale>>12)&1048575
	srli x30 ,  x30 ,  12&31
	or x10 ,  x15 ,  x30
	ret
.Lfunc_end1:
	.size	newlocale, .Lfunc_end1-newlocale
	.cfi_endproc
                                        //  -- End function
	.address_space	0

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
