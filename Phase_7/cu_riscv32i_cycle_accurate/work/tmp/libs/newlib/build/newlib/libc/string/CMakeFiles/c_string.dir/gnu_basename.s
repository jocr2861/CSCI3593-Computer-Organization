	.text
	.file	"gnu_basename.c"
	.globl	__gnu_basename          //  -- Begin function __gnu_basename
	.type	__gnu_basename,@function
__gnu_basename:                         //  @__gnu_basename
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	addi x2 ,  x2 ,  -8
	.cfi_adjust_cfa_offset 8
	addi x11 ,  x0 ,  47
	sw x8 ,  0 ( x2 )               //  4-byte Folded Spill
	.cfi_offset 8, -8
	sw x1 ,  4 ( x2 )               //  4-byte Folded Spill
	.cfi_offset 1, -4
	add x8 ,  x0 ,  x10
	call strrchr
	add x15 ,  x0 ,  x0
	beq x10, x15, .LBB0_2
.LBB0_1:                                //  %entry
	addi x8 ,  x10 ,  1
.LBB0_2:                                //  %entry
	add x10 ,  x0 ,  x8
	lw x8 ,  0 ( x2 )               //  4-byte Folded Reload
	lw x1 ,  4 ( x2 )               //  4-byte Folded Reload
	addi x2 ,  x2 ,  8
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end0:
	.size	__gnu_basename, .Lfunc_end0-__gnu_basename
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
