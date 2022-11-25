	.text
	.file	"locale.c"
	.globl	_setlocale_r            //  -- Begin function _setlocale_r
	.type	_setlocale_r,@function
_setlocale_r:                           //  @_setlocale_r
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
	add x8 ,  x0 ,  x12
	lui x9 ,  (.str.3>>12)&1048575
	sw x1 ,  12 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 1, -4
	beq x0, x8, .LBB0_5
.LBB0_1:                                //  %if.then
	lui x30 ,  .str.2&4095
	lui x15 ,  (.str.2>>12)&1048575
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x15 ,  x30
	call strcmp
	beq x0, x10, .LBB0_5
.LBB0_2:                                //  %land.lhs.true
	lui x30 ,  .str.3&4095
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x9 ,  x30
	call strcmp
	beq x0, x10, .LBB0_5
.LBB0_3:                                //  %land.lhs.true4
	lui x30 ,  .str.1&4095
	lui x15 ,  (.str.1>>12)&1048575
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x15 ,  x30
	call strcmp
	beq x0, x10, .LBB0_5
.LBB0_4:
	add x10 ,  x0 ,  x0
	jal x0, .LBB0_6
.LBB0_5:                                //  %if.end8
	lui x30 ,  .str.3&4095
	srli x30 ,  x30 ,  12&31
	or x10 ,  x9 ,  x30
.LBB0_6:                                //  %return
	lw x8 ,  4 ( x2 )               //  4-byte Folded Reload
	lw x9 ,  8 ( x2 )               //  4-byte Folded Reload
	lw x1 ,  12 ( x2 )              //  4-byte Folded Reload
	addi x2 ,  x2 ,  16
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end0:
	.size	_setlocale_r, .Lfunc_end0-_setlocale_r
	.cfi_endproc
                                        //  -- End function
	.globl	__locale_mb_cur_max     //  -- Begin function __locale_mb_cur_max
	.type	__locale_mb_cur_max,@function
__locale_mb_cur_max:                    //  @__locale_mb_cur_max
	.cfi_startproc
	.cfi_return_column 1
//  %bb.0:                              //  %entry
	.cfi_def_cfa 2, 0
	lui x30 ,  __global_locale&4095
	lui x15 ,  (__global_locale>>12)&1048575
	srli x30 ,  x30 ,  12&31
	or x15 ,  x15 ,  x30
	lb x10 ,  296 ( x15 )
	ret
.Lfunc_end1:
	.size	__locale_mb_cur_max, .Lfunc_end1-__locale_mb_cur_max
	.cfi_endproc
                                        //  -- End function
	.globl	setlocale               //  -- Begin function setlocale
	.type	setlocale,@function
setlocale:                              //  @setlocale
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
	add x8 ,  x0 ,  x11
	lui x9 ,  (.str.3>>12)&1048575
	sw x1 ,  12 ( x2 )              //  4-byte Folded Spill
	.cfi_offset 1, -4
	beq x0, x8, .LBB2_5
.LBB2_1:                                //  %if.then.i
	lui x30 ,  .str.2&4095
	lui x15 ,  (.str.2>>12)&1048575
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x15 ,  x30
	call strcmp
	beq x0, x10, .LBB2_5
.LBB2_2:                                //  %land.lhs.true.i
	lui x30 ,  .str.3&4095
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x9 ,  x30
	call strcmp
	beq x0, x10, .LBB2_5
.LBB2_3:                                //  %land.lhs.true4.i
	lui x30 ,  .str.1&4095
	lui x15 ,  (.str.1>>12)&1048575
	add x10 ,  x0 ,  x8
	srli x30 ,  x30 ,  12&31
	or x11 ,  x15 ,  x30
	call strcmp
	beq x0, x10, .LBB2_5
.LBB2_4:
	add x10 ,  x0 ,  x0
	jal x0, .LBB2_6
.LBB2_5:                                //  %if.end8.i
	lui x30 ,  .str.3&4095
	srli x30 ,  x30 ,  12&31
	or x10 ,  x9 ,  x30
.LBB2_6:                                //  %_setlocale_r.exit
	lw x8 ,  4 ( x2 )               //  4-byte Folded Reload
	lw x9 ,  8 ( x2 )               //  4-byte Folded Reload
	lw x1 ,  12 ( x2 )              //  4-byte Folded Reload
	addi x2 ,  x2 ,  16
	.cfi_def_cfa 2, 0
	ret
.Lfunc_end2:
	.size	setlocale, .Lfunc_end2-setlocale
	.cfi_endproc
                                        //  -- End function
	.address_space	0
	.type	_PathLocale,@object     //  @_PathLocale
	.bss
	.globl	_PathLocale
	.p2align	2
_PathLocale:
	.long	0
	.size	_PathLocale, 4

	.address_space	0
	.address_space	0
	.type	.str,@object            //  @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.str:
	.asciz	"."
	.size	.str, 2

	.address_space	0
	.type	.str.1,@object          //  @.str.1
.str.1:
	.zero	1
	.size	.str.1, 1

	.address_space	0
	.type	__global_locale,@object //  @__global_locale
	.data
	.globl	__global_locale
	.p2align	2
__global_locale:
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"C\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.long	__ascii_wctomb
	.long	__ascii_mbtowc
	.long	0                       //  0x0
	.long	_ctype_b+127
	.long	.str
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.long	.str.1
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.byte	127                     //  0x7f
	.zero	2
	.asciz	"\001"
	.asciz	"ASCII\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.asciz	"ASCII\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
	.zero	2
	.size	__global_locale, 364

	.address_space	0
	.type	.str.2,@object          //  @.str.2
	.section	.rodata.str1.1,"aMS",@progbits,1
.str.2:
	.asciz	"POSIX"
	.size	.str.2, 6

	.address_space	0
	.type	.str.3,@object          //  @.str.3
.str.3:
	.asciz	"C"
	.size	.str.3, 2


	.ident	"clang version 9.0.1 (ssh://git@gitlab.codasip.com/codasip-studio/llvm-project.git d5357f0eec354bae21f33cf62e5504ff6d1cc93d)"
	.section	".note.GNU-stack","",@progbits
