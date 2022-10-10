/*
 * regression_.s
 *
 * Author: Joshua Creany
 * Date: 9-30-2022
 * 
 */

 // Section .crt0 is always placed from address 0
	.section .crt0, "ax"

_start:
	.global _start

 /*
 	Immediate (i-type) ALU operations
 */
 	addi x2, x0, 2				// load 2 into register x2
 	nop
 	nop
 	nop
 	addi x2, x2, (-1 & 0xfff)	// add -1 to x2
 	nop					// x2 = 2
 	nop
 	nop
 	slti x3, x2, 2				// compare 1 to 2, less than so x3 = 1
 	nop					// x2 = 1
 	nop
 	nop
 	slti x3, x2, 1				// compare 1 to 1, not less than, so x3 = 0
 	nop					// x3 = 1
 	nop
 	nop
    nop
    nop                 // x3 = 0
    //Setup
 	addi x1, x0, 0xfff          // x1 = -1
    addi x2, x0, 0              // x2 = 0
    addi x3, x0, 1              // x3 = 1
    nop
    nop
    nop                 //x1 = -1
    nop                 //x2 = 0
    nop                 //x3 = 1
    //Beginning of new i-type instruction tests
    sltiu x4, x2, 0xfff         // 0 < big number, true, so x4 = 1
	nop
    nop
    nop
    sltiu x4, x1, 0             // -1 (unsigned, so actually big number) < 0, false, so x4 = 0
    nop                 //x4 = 1
    nop
    nop
    sltiu x4, x1, 0xfff         // -1 (unsigned, so actually big number) < -1 (unsigned, so actually big number), false, so x4 = 0
    nop                 //x4 = 0
    nop
    nop
    xori x5, x2, 0         // 0x0 ^ 0x0 = 0x0, x5 = 0
    nop                 //x4 = 0
    nop
    nop
    xori x5, x2, 1         // 0x0 ^ 0x1 = 0x1, x5 = 1
    nop                 //x5 = 0
    nop
    nop
    xori x5, x1, 0xffe         // 0xffffffff ^ 0xfffffffe = 0x00000001, x5 = 1
    nop                 //x5 = 1
    nop
    nop
    xori x5, x3, 1         // 0x1 ^ 0x1 = 0x0, x5 = 0
    nop                 //x5 = 1
    nop
    nop
    ori x6, x2, 0         // 0x0 | 0x0 = 0x0, x6 = 0
    nop                 //x5 = 0
    nop
    nop
    ori x6, x2, 1         // 0x0 | 0x1 = 0x1, x6 = 1
    nop                 //x6 = 0
    nop
    nop
    ori x6, x1, 0xffe         // 0xffffffff | 0xfffffffe = 0xffffffff, x6 = -1
    nop                 //x6 = 1
    nop
    nop
    ori x6, x3, 1         // 0x1 | 0x1 = 0x1, x6 = 1
    nop                 //x6 = 1
    nop
    nop
    andi x7, x2, 0         // 0x0 & 0x0 = 0x0, x7 = 0
    nop                 //x6 = 1
    nop
    nop
    andi x7, x2, 1         // 0x0 & 0x1 = 0x1, x7 = 0 //ISA BROKEN HERE
    nop                 //x7 = 0
    nop
    nop
    andi x7, x1, 0xffe         // 0xffffffff & 0xfffffffe = 0xfffffffe, x7 = -2 //ISA BROKEN HERE
    nop                 //x7 = 0
    nop
    nop
    andi x7, x3, 1         // 0x1 & 0x1 = 0x1, x7 = 1
    nop                 //x7 = -2
    nop
    nop
    nop
    nop                 //x7 = 1
  	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	Immediate (r-type) ALU operations
 */
    //Setup
 	addi x1, x0, 0x800          // x1 = 0xfffff800(-2048)
    addi x2, x0, 0xfff          // x2 = 0xffffffff(-1)
    addi x3, x0, 0              // x3 = 0
    addi x4, x0, 1              // x4 = 1
    addi x5, x0, 2              // x5 = 2
    nop                 //x1 = 0xfffff800
    nop                 //x2 = -1
    nop                 //x3 = 0
    nop                 //x4 = 1
    nop                 //x5 = 2
    //Beginning of r-type instruction tests
    add x6, x1, x2         // 0xfffff800(-2048) + 0xffffffff(-1) = 0xfffff7ff(-2049) = x6
    nop
    nop
    nop
    add x6, x2, x4         // 0xffffffff(-1) + 1 = 0 = x6
    nop                 //x6 = 0xfffff7ff
    nop
    nop
    add x6, x3, x5         // 0 + 2 = 2 = x6
    nop                 //x6 = 0
    nop
    nop
    sub x7, x1, x2         // 0xfffff800(-2048) - 0xffffffff(-1) = 0xfffff801(-2047) = x7
    nop                 //x6 = 2
    nop
    nop
    sub x7, x2, x4         // 0xffffffff - 1 = 0xfffffffe(-2) = x7
    nop                 //x7 = 0xfffff801
    nop
    nop
    sub x7, x3, x5         // 0 - 2 = 0xfffffffe(-2) = x7
    nop                 //x7 = 0xfffffffe
    nop
    nop
    sub x7, x5, x4         // 2 - 1 = 1 = x7
    nop                 //x7 = 0xfffffffe
    nop
    nop
    sll x8, x1, x7         // 0xfffff800 << 1 = 0xfffff000 = x8
    nop                 //x7 = 1
    nop
    nop
    sll x8, x1, x2         // 0xfffff800 << 0xffffffff(-1) = 0 = x8
    nop                 //x8 = 0xfffff000
    nop
    nop
    sll x8, x4, x5         // 0b1 << 2 = 0b100 = 0x4 = x8
    nop                 //x8 = 0
    nop
    nop
    slt x9, x1, x2         // 0xffff800(-2048) < 0xffffffff(-1), yes, x9 = 1
    nop                 //x8 = 0x4
    nop
    nop
    slt x9, x2, x5         // 0xfffffff(-1) < 2, yes, x9 = 1 //ISA BROKEN HERE
    nop                 //x9 = 1
    nop
    nop
    slt x9, x5, x3         // 2 < 0, no, x9 = 0
    nop                 //x9 = 1
    nop
    nop
    sltu x10, x1, x2         // 0xffff800 < 0xffffffff, yes, x10 = 1
    nop                 //x9 = 0
    nop
    nop
    sltu x10, x2, x5         // 0xfffffff < 2, no, x10 = 0
    nop                 //x10 = 1
    nop
    nop
    sltu x10, x5, x3         // 2 < 0, no, x10 = 0
    nop                 //x10 = 0
    nop
    nop
    xor x11, x1, x5         // 0xfffff800 ^ 0x2 = 0xfffff802 = x11
    nop                 //x10 = 0
    nop
    nop
    xor x11, x3, x3         // 0 ^ 0 = 0 = x11
    nop                 //x11 = 0xfffff802
    nop
    nop
    xor x11, x11, x4        // 0 ^ 1 = 1 = x11
    nop                 //x11 = 0
    nop
    nop
    xor x11, x11, x3         // 1 ^ 0 = 1 = x11
    nop                 //x11 = 1
    nop
    nop
    xor x11, x11, x4         // 1 ^ 1 = 0 = x11
    nop                 //x11 = 1
    nop
    nop
    srl x12, x1, x4         // 0xfffff800 L>> 1 = 0x7ffffc00 = x12
    nop                 //x11 = 0
    nop
    nop
    srl x12, x4, x4         // 1 L>> 1 = 0 = x12
    nop                 //x12 = 0x7ffffc00
    nop
    nop
    sra x13, x1, x4         // 0xfffff800 A>> 1 = 0xfffffc00 = x13
    nop                 //x12 = 0
    nop
    nop
    sra x13, x4, x4         // 1 A>> 1 = 0 = x13
    nop                 //x13 = 0xfffffc00
    nop
    nop
    sra x13, x1, x2         // 0xfffff800 A>> 0xffffffff(-1) = 0xffffffff(-1) = x13
    nop                 //x13 = 0
    nop
    nop
    or x14, x3, x3         // 0 | 0 = 0 = x14
    nop                 //x13 = 0
    nop
    nop
    or x14, x3, x4         // 0 | 1 = 1 = x14
    nop                 //x14 = 0
    nop
    nop
    or x14, x14, x3         // 1 | 0 = 1 = x14
    nop                 //x14 = 1
    nop
    nop
    or x14, x14, x4         // 1 | 1 = 1 = x14
    nop                 //x14 = 1
    nop
    nop
    and x15, x3, x3         // 0 & 0 = 0 = x15
    nop                 //x14 = 1
    nop
    nop
    and x15, x15, x4        // 0 & 1 = 0 = x15
    nop                 //x15 = 0
    nop
    nop
    and x15, x4, x15        // 1 & 0 = 0 = x15
    nop                 //x15 = 0
    nop
    nop
    and x15, x4, x4         // 1 & 1 = 1 = x15
    nop                 //x15 = 0
    nop
    nop
    nop
    nop                 //x15 = 1
 	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	Immediate (r-type immediate) ALU operations
 */
    //Setup
 	addi x1, x0, 0x800          // x1 = 0xfffff800(-2048)
    addi x2, x0, 0xfff          // x2 = 0xffffffff(-1)
    addi x3, x0, 0              // x3 = 0
    addi x4, x0, 1              // x4 = 1
    addi x5, x0, 2              // x5 = 2
    nop                 //x1 = 0xfffff800
    nop                 //x2 = -1
    nop                 //x3 = 0
    nop                 //x4 = 1
    nop                 //x5 = 2
    //Beginning of r-type immediate instruction tests
    slli x6, x1, 1         // 0xfffff800 << 1 = 0xfffff000 = x6
    nop
    nop
    nop
    slli x6, x1, 0xffffffff         // 0xfffff800 << 0xffffffff(-1) = 0 = x6
    nop                 //x6 = 0xfffff000
    nop
    nop
    slli x6, x4, 2         // 0b1 << 2 = 0b100 = 0x4 = x6
    nop                 //x6 = 0
    nop
    nop
    srli x7, x1, 1         // 0xfffff800 L>> 1 = 0x7ffffc00 = x7
    nop                 //x6 = 0x4
    nop
    nop
    srli x7, x4, 1         // 1 L>> 1 = 0 = x7
    nop                 //x7 = 0x7ffffc00
    nop
    nop
    srai x8, x1, 1         // 0xfffff800 A>> 1 = 0xfffffc00 = x8 //ISA BROKEN HERE
    nop                 //x7 = 0
    nop
    nop
    srai x8, x8, 0xffffffff         // 0xfffffc00 A>> 0xffffffff(-1) = 0xffffffff(-1) = x8 //ISA BROKEN HERE
    nop                 //x8 = 0xfffffc00
    nop
	nop
    srai x8, x4, 1         // 1 A>> 1 = 0 = x8
    nop                 //x8 = 0xffffffff
    nop
    nop
    nop
	nop                 //x8 = 0
 	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	Data hazard detection and forwarding test sequences
 */
    //Setup
 	addi x2, x0, 1				// load x2 register with 1
 	addi x3, x0, 2				// load x3 register with 2
 	addi x4, x0, 3				// load x4 register with 3
 	addi x5, x0, -1				// load x5 register with -1
	nop
	nop
	nop
	nop
    //Setup done for data hazard tests
    add x6, x2, x3              // 1 + 2 = 3 = x6
    nop
    nop
    nop
    add x7, x6, x2              // 3 + 1 = 4 = x7 //RAW detection
    nop             //x6 = 3
    nop
    nop
    add x7, x5, x2              // -1 + 1 = 0 = x7 //WAW detection
    nop             //x7 = 4
    nop
    nop
    add x8, x7, x2              // 0 + 1 = 1 = x8
    nop             //x7 = 0
    nop
    nop
    add x7, x3, x2              // 2 + 1 = 3 = x8 //WAR detection
    nop             //x8 = 1
    nop
    nop
    nop
    nop             //x7 = 3
  	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	Branch (b-type) operations
 */
    //Setup
 	addi x1, x0, 0x800          // x1 = 0xfffff800(-2048)
    addi x2, x0, 0xfff          // x2 = 0xffffffff(-1)
    addi x3, x0, 0              // x3 = 0
    addi x4, x0, 1              // x4 = 1
    addi x5, x0, 2              // x5 = 2
    nop                 //x1 = 0xfffff800
    nop                 //x2 = -1
    nop                 //x3 = 0
    nop                 //x4 = 1
    nop                 //x5 = 2
    //Beginning of branch instruction tests

    beq x1, x4, BRANCH_FAIL     //0xffffffff == 1, no, so continue
    beq x4, x1, BRANCH_FAIL     //1 == 0xffffffff, no, so continue
    beq x1, x1, 0x8             //0xffffffff == 0xffffffff, yes, so add 8 to PC and go to BNE tests
    beq x0, x0, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 0 == 0, yes, FAIL TEST
    
    bne x1, x1, BRANCH_FAIL     //0xffffffff != 0xffffffff, no, so continue
    bne x4, x4, BRANCH_FAIL     //1 != 1, no, so continue
    bne x1, x4, 0x8             //0xffffffff != 1, yes, so add 8 to PC
    bne x0, x4, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 0 != 1, yes, FAIL TEST
    bne x4, x1, 0x8             //1 != 0xffffffff, yes, so add 8 to PC and go to BLT tests
    bne x0, x4, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 0 != 1, yes, FAIL TEST
    
    blt x1, x3, 0x8             //1. 0xffffffff < 0, yes, add 8 to PC
    blt x2, x4, 0xc             //3. 0xfffff800 < 1, yes, add 12 to PC and go to BGE tests
    blt x4, x5, -4              //2. 1 < 2, yes, remove 4 from PC
    blt x0, x4, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 0 < 1, yes, FAIL TEST

    bge x1, x4, BRANCH_FAIL     //0xffffffff >= 1, no, so continue
    bge x3, x5, BRANCH_FAIL     //0 >= 2, no, so continue
    bge x4, x3, 0x8             //1 >= 0, yes, so add 8 to PC
    bge x4, x0, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 1 >= 0, yes, FAIL TEST
    bge x4, x4, 0x8             //1 >= 1, yes, so add 8 to PC and continue to BLTU tests
    bge x4, x0, BRANCH_FAIL     //SHOULD NOT EVER GET HERE: 1 >= 0, yes, FAIL TEST

//SWITCH X1 & X2
	bltu x2, x1, BRANCH_FAIL    //0xffffffff < 0xfffff800, no, so continue
    bltu x1, x3, BRANCH_FAIL    //0xfffff800 < 0, no, so continue //ISA BROKEN HERE
    bltu x5, x4, BRANCH_FAIL    //2 < 1, no, so continue
    bltu x5, x5, BRANCH_FAIL    //2 < 2, no, so continue
    bltu x1, x2, 0x8            //0xfffff800 < 0xffffffff, yes, so add 8 to PC and continue to BGEU tests
    bltu x0, x4, BRANCH_FAIL    //SHOULD NOT EVER GET HERE: 0 < 1, yes, FAIL TEST

    bgeu x1, x2, BRANCH_FAIL    //0xfffff800 >= 0xffffffff, no, so continue
    bgeu x3, x1, BRANCH_FAIL    //0 >= 0xfffff800, no, so continue
    bgeu x4, x5, BRANCH_FAIL    //1 >= 2, no, so continue
    bgeu x2, x1, 0x8            //0xffffffff >= 0xfffff800, yes, so add 8 to PC
    bgeu x4, x0, BRANCH_FAIL    //SHOULD NOT EVER GET HERE: 1 >= 0, yes, FAIL TEST
    bgeu x2, x1, 0x8            //0xffffffff >= 0xffffffff, yes, so add 8 to PC and finish tests
    bgeu x4, x0, BRANCH_FAIL    //SHOULD NOT EVER GET HERE: 1 >= 0, yes, FAIL TEST

	beq x0, x0, PASS
BRANCH_FAIL:
	nop
	nop
	nop
	nop
	halt		// Branch test has failed, time to debug
	nop
	nop
	nop
	nop
PASS:
	nop
    nop
	nop
	nop
  	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	jump instruction operations
 */
    //Setup - Stores PC of JUMP_POINT2 into x6 and BRANCH_FAIL into x7
    addi x6, x0, (JUMP_POINT2 >> 12)	// Assume DATA memory address less than 24-bits
 	slli x6, x6, 12					// Move the upper 12-bits to locations 12..23
 	ori x6, x6, (JUMP_POINT2 & 0xfff)	// OR in the lower 12-bits to create all 24-bits
    addi x7, x0, (BRANCH_FAIL >> 12)	// Assume DATA memory address less than 24-bits
 	slli x7, x7, 12					// Move the upper 12-bits to locations 12..23
 	ori x7, x7, (BRANCH_FAIL & 0xfff)	// OR in the lower 12-bits to create all 24-bits
    //Jump instruction testing
    jal x8, 0x10                    //Skip to subtracting 8 from PC instruction //ISA BROKEN HERE
    jal x8, BRANCH_FAIL             //SHOULD NEVER GET HERE
JUMP_POINT1:
    jal x8, 0x10                    //Add 16 to PC, skipping down and preventing a loop
    jal x8, BRANCH_FAIL             //SHOULD NEVER GET HERE
    jal x8, JUMP_POINT1             //Subtract 8 from PC //ISA BROKEN HERE
    jal x8, BRANCH_FAIL             //SHOULD NEVER GET HERE
    nop
    
    jalr x9, 0x0(x6)                  //Jump to JUMP_POINT2, passing the tests
    jalr x9, 0x0(x7)                  //SHOULD NEVER GET HERE
JUMP_POINT2:
	nop
	nop
    nop
    nop
  	halt
 	nop
 	nop
 	nop
 	nop
 /*
 	Store (s-type)  operations
 */
 	// Loading test data into registers for Store / Load tests
 	addi x20, x0, 0x765
 	slli x20, x20, 12
 	ori	x20, x20, 0x432
 	slli x20, x20, 8
 	ori x20, x20, 0x10				// x20 = 0x76543210
 	xori x21, x20, 0xfff			// x21 = 0x89abcdef
 	// Load register x10 with base DATA memory location
 	addi x10, x0, (DATA >> 12)		// Assume DATA memory address less than 24-bits
 	slli x10, x10, 12				// Move the upper 12-bits to locations 12..23
 	ori x10, x10, (DATA & 0xfff)	// OR in the lower 12-bits to create all 24-bits
 	// Load register x11 with base DATA_MINUS location
 	addi x11, x0, (DATA_MINUS >> 12)	// Assume DATA memory address less than 24-bits
 	slli x11, x11, 12					// Move the upper 12-bits to locations 12..23
 	ori x11, x11, (DATA_MINUS & 0xfff)	// OR in the lower 12-bits to create all 24-bits
 	// start of Store Instruction test
    sw x20, 0(x10)              //Store positive value in DATA
    sw x21, 4(x10)              //Store negative value in DATA + 1WORD
    sh x20, 8(x10)              //Store positive value in DATA + 2WORDS
    sh x20, 10(x10)             //Store positive value in DATA + 2WORDS + 1HALFWORD
    sh x21, 12(x10)             //Store positive value in DATA + 3WORDS
    sh x21, 14(x10)             //Store positive value in DATA + 3WORDS + 1HALFWORD
	sb x20, 16(x10)             //Store positive value in DATA + 4WORDS
    sb x20, 17(x10)             //Store positive value in DATA + 4WORDS + 1BYTE
    sb x20, 18(x10)             //Store positive value in DATA + 4WORDS + 2BYTES
    sb x20, 19(x10)             //Store positive value in DATA + 4WORDS + 3BYTES
    sb x21, 20(x10)             //Store positive value in DATA + 5WORDS
    sb x21, 21(x10)             //Store positive value in DATA + 5WORDS + 1BYTE
    sb x21, 22(x10)             //Store positive value in DATA + 5WORDS + 2BYTES
    sb x21, 23(x10)             //Store positive value in DATA + 5WORDS + 3BYTES
    sw x20, -8(x11)      //Store positive value in DATA + 6WORDS (AKA END OF DATA - 8) //ISA FAILS HERE
    sw x21, -4(x11)      //Store positive value in DATA + 7WORDS (AKA END OF DATA - 4) //ISA FAILS HERE
    nop
	nop
	nop
	nop
    # nop //COMMENT OUT THIS NOP WHEN UNCOMMENTING THE HALT TO KEEP MEMORY DISPLAY EASIER
  	halt
  	nop
  	beq x0, x0, LOAD_TEST
  	nop
  	nop
 /*
 	Data Memory Space for regression test
 	- There are 8 NOP locations which are available
 		to be overwritten for test
 	- Accessing the first data location by 0 offset of x10 => 0(x10)
 	- Accessing the 1st byte in data space is 1 offset of x10 => 1(x10)
 	- Accessing the 2nd half-word in data space is 2 offset of x10 => 2(x10)
 	- Accessing the 2nd word in data space is 4 offset of x10 => 4(x10)
 */
DATA:
 	nop
 	nop
 	nop
 	nop
 	nop
 	nop
 	nop
 	nop
 DATA_MINUS:

 /*
 	Load (l-type)  operations
 */
LOAD_TEST:
	lw x1, 0(x10)               //Load 0x76543210 into x1
    bne x1, x20, LOAD_FAIL      //Branch if load failed
    lw x1, 4(x10)               //Load 0x89abcdef into x1
    bne x1, x21, LOAD_FAIL      //Branch if load failed
    lw x1, -8(x11)              //Load 0x76543210 into x1, TESTING NEGATIVE OFFSET - USING 2nd LAST WORD
    bne x1, x20, LOAD_FAIL      //Branch if load failed
    lw x1, -4(x11)              //Load 0x89abcdef into x1, TESTING NEGATIVE OFFSET - USING LAST WORD
    bne x1, x21, LOAD_FAIL      //Branch if load failed

    //Setup
    slli x12, x20, 0x10         //Shift 0x76543210 16bits to left to remove top halfword
    srai x12, x12, 0x10         //Shift back right (SIGN EXTENSION) to get the result of 0x00003210
    slli x13, x21, 0x10         //Shift 0x89abcdef 16bits to left to remove top halfword
    srai x13, x13, 0x10         //Shift back right (SIGN EXTENSION) to get the result of 0xffffcdef
    //x12 = 0x00003210
    //x13 = 0xffffcdef
    lh x2, 0(x10)               //Load 0x00003210 into x2
    bne x2, x12, LOAD_FAIL      //Branch if load failed
    lh x2, 4(x10)               //Load 0xffffcdef into x2 (SIGN EXTENSION)
    bne x2, x13, LOAD_FAIL      //Branch if load failed
    lh x2, -8(x11)              //Load 0x00003210 into x2, TESTING NEGATIVE OFFSET - USING 2nd LAST WORD
    bne x2, x12, LOAD_FAIL      //Branch if load failed
    lh x2, -4(x11)              //Load 0xffffcdef into x2 (SIGN EXTENSION), TESTING NEGATIVE OFFSET - USING LAST WORD
    bne x2, x13, LOAD_FAIL      //Branch if load failed

    //Setup
    slli x14, x20, 0x10         //Shift 0x76543210 16bits to left to remove top halfword
    srli x14, x14, 0x10         //Shift back right to get the result of 0x00003210
    slli x15, x21, 0x10         //Shift 0x89abcdef 16bits to left to remove top halfword
    srli x15, x15, 0x10         //Shift back right to get the result of 0x0000cdef
    //x14 = 0x00003210
    //x15 = 0x0000cdef
    lhu x3, 0(x10)               //Load 0x00003210 into x3
    bne x3, x14, LOAD_FAIL       //Branch if load failed
    lhu x3, 4(x10)               //Load 0x0000cdef into x3
    bne x3, x15, LOAD_FAIL       //Branch if load failed
    lhu x3, -8(x11)              //Load 0x00003210 into x3, TESTING NEGATIVE OFFSET - USING 2nd LAST WORD
    bne x3, x14, LOAD_FAIL       //Branch if load failed
    lhu x3, -4(x11)              //Load 0x0000cdef into x3, TESTING NEGATIVE OFFSET - USING LAST WORD
    bne x3, x15, LOAD_FAIL       //Branch if load failed

    //Setup
    slli x16, x20, 0x18         //Shift 0x76543210 24bits to left to remove top 3 bytes
    srai x16, x16, 0x18         //Shift back right (SIGN EXTENSION) to get the result of 0x00000010
    slli x17, x21, 0x18         //Shift 0x89abcdef 24bits to left to remove top 3 bytes
    srai x17, x17, 0x18         //Shift back right (SIGN EXTENSION) to get the result of 0xffffffef
    //x16 = 0x00000010
    //x17 = 0xffffffef
    lb x4, 0(x10)                //Load 0x00000010 into x4
    bne x4, x16, LOAD_FAIL       //Branch if load failed
    lb x4, 4(x10)                //Load 0xffffffef into x4 (SIGN EXTENSION) //ISA FAILS HERE
    bne x4, x17, LOAD_FAIL       //Branch if load failed
    lb x4, -8(x11)               //Load 0x00000010 into x4, TESTING NEGATIVE OFFSET - USING 2nd LAST WORD
    bne x4, x16, LOAD_FAIL       //Branch if load failed
    lb x4, -4(x11)               //Load 0xffffffef into x4 (SIGN EXTENSION), TESTING NEGATIVE OFFSET - USING LAST WORD
    bne x4, x17, LOAD_FAIL       //Branch if load failed

    //Setup
    slli x18, x20, 0x18         //Shift 0x76543210 24bits to left to remove top 3 bytes
    srli x18, x18, 0x18         //Shift back right to get the result of 0x00000010
    slli x19, x21, 0x18         //Shift 0x89abcdef 24bits to left to remove top 3 bytes
    srli x19, x19, 0x18         //Shift back right to get the result of 0x000000ef
    //x18 = 0x00000010
    //x19 = 0x000000ef
    lbu x5, 0(x10)               //Load 0x00000010 into x4
    bne x5, x18, LOAD_FAIL       //Branch if load failed
    lbu x5, 4(x10)               //Load 0x000000ef into x4
    bne x5, x19, LOAD_FAIL       //Branch if load failed
    lbu x5, -8(x11)              //Load 0x00000010 into x4, TESTING NEGATIVE OFFSET - USING 2nd LAST WORD
    bne x5, x18, LOAD_FAIL       //Branch if load failed
    lbu x5, -4(x11)              //Load 0x000000ef into x4, TESTING NEGATIVE OFFSET - USING LAST WORD
    bne x5, x19, LOAD_FAIL       //Branch if load failed
    nop
	nop
	nop
	nop
  	halt
 	nop
 	nop
 	nop
 	nop
 LOAD_FAIL:							// Using branch statements, if load does not
 	nop								// return result expected, branch to LOAD_FAIL label
 	nop
 	nop
    nop
 	halt
    nop
 	nop
 	nop
 	nop