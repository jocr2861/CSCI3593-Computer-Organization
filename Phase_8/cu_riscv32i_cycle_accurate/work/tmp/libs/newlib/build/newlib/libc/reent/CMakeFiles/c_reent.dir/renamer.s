	.text
	.file	"renamer.c"
	.globl	_rename_r               //  -- Begin function _rename_r
	.type	_rename_r,@function
_rename_r:                              //  @_rename_r
	.cfi_sections .debug_frame
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	addi x2 ,  x2 ,  -16
	.cfi_adjust_cfa_offset 16
	sw x9 ,  8 ( x2 )               //  4-byte Folded Spill
	.cfi_offset 9, -8
	sw x8 ,  4 ( x2 )               //  4-byte Folded Spill
	.cfi_offset 8, -12
	sw x1 ,  12 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 1, -4
	add x8 ,  x0 ,  x11
	add x9 ,  x0 ,  x10
	call _link_r
	xori x15 ,  x10 ,  -1
	beq x0, x15, .LBB0_1
.LBB0_2:                                //  %if.end
	add x10 ,  x0 ,  x9
	add x11 ,  x0 ,  x8
	call _unlink_r
	add x15 ,  x0 ,  x10
	addi x10 ,  x0 ,  -1
	beq x15, x10, .LBB0_4
.LBB0_3:                                //  %if.end
	add x10 ,  x0 ,  x0
	jal x0, .LBB0_4
.LBB0_1:
	addi x10 ,  x0 ,  -1
.LBB0_4:                                //  %cleanup
	lw x8 ,  4 ( x2 )               //  4-byte Folded Reload
	lw x9 ,  8 ( x2 )               //  4-byte Folded Reload
	lw x1 ,  12 ( x2 )              //  4-byte Folded Reload
	addi x2 ,  x2 ,  16
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end0:
	.size	_rename_r, .Lfunc_end0-_rename_r
	.cfi_endproc
                                        //  -- End function

	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
