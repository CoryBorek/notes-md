# Instructions: Language of the Computer


# Instruction Set

The set of instructions of a computer

Different Computers have different instructions sets, but with many aspects in common

Early computers have very simple instruction sets
  - Simplified Implementation

Many modern computers alos have simple instruction sets
  - Reduced Instruction Set Computers (RISC)


# Arithmetic Operations
Add and subtract, three operands

Two sources, one destination

`ADD a, b, c // a gets b + c`

All arithmetic operations have this form

Design principle 1: simplicity favors regularity

Regularity makes implementation simpler
Simplicity enables high performance at lower cost.


## Arithmetic Example
C Code

```c
f = (g + h) - (i + j);
```

Compiled LEGv8 (a subset of ARM) code
```asm
ADD t0, g, h // temp t0 = g + h
ADD t1, i, j // temp t1 = i + j
SUB f, t0, t1 // f = t0 - t1
```

# Register Operands
Arithmetic instructions use register opeands

Mips has a 32 x 32 bit register file

Use for frequently accessed data

Numbered 0 to 31

32-bit data called a "word"

Assembler names:
- `$t0, $t1, ..., $t9` for temporary values
- `$s0, $s1, ..., $s7` for saved values


Design principle 2: smaller is faster

Compare with main memory - millions of locations, but slower access time.

## Register Operand Example

C Code

```c
f = (g + h) - (i + j);
// f, ..., j in $s0 to $s4
```

Compiled MIPS Code
```s
add $t0, $s1, $s2 # $t0 <- g + h
add $t1, $s3, $s4 # $t1 <- i + j
sub $s0, $t0, $t1 # $s0 <- $t0 - $t1
```

# MIPS arithmetic instructions

Each performs one operation

destinaion <- source1 op source2
```s
add $t0, $s1, $s2
sub $s1, $s2, $s3
adi $s1, $s2, 20
```

# Immeditate operations
Constant data specified in an instruction

`addi $s3, $s3, 4`

No subtract immediate instruction.

Just use a negative constant


Design principle 3: make the common case fast.

Small constants are common

Immediate operand avoids a load instruction

# The constant zero

MIPS register 0 ($zero) is the constant 0

Cannot be overwritten

Useful for common operations

e.g. move between registers

`add $t2, $s1, $zero`

# Unsigned binary integers

Give an n-bit number

Range $0$ to $2ˆn-1$

If n = 4, range: $0000$ to $1111$ (15 in decimal)

# 2s complement signed integers

Given an n bit number

Range $-2ˆ{n-1} to +2ˆ{n-1}+1

# Memory operands

Main memory used for composite data

Arrays, structures, dynamic data

Top apply arithmetic operations

Load values from memor into registers

Store results from registers to memory

Memory is byte addressed

Each address identifies an 8-bit byte

Word aligned address must be a multiple of 4.

MIPS is big-endian.

Memory address and Contents

To access a word in memory, the instruction must supply them memory address

The address of the third data element is 2 and teh value of memory [2] = 0.

## Data transfer instructions load and store

Load: transfer from memory to register

Store: transfer from register to memory

Load one word from memory: `lw $s1, 20($s2)``

Loads into s1 20 + the value at s2

Store a word: `s1 $s1, 20($s2)`

stores the value at s2 at 20 + s2


Memory is slow, registers are fast.
### [Back to Module 3](%WEBPATH%/classes/cs4720/module3)