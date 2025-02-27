# 3.6

## Announcements

### M3 Quiz
 - Will be available on eLC starting 3/10/2025
 - Due Wed. 3/12 at 11:59 PM

### Midterm
 is tentatively on Tuesday 3/18

There will be a review before the exam.

# Arrays vs Pointers
 - Array indexing involves
   - Multiplying index by element size
   - Adding to array base address
 - Pointers correspond directly to memory addresses
   - Can avoid indexing complexity

## Example: Clearing and array

```c
void clear1(int array[], int size) {
    int i;
    for (i = 0; i < size; i += 1) {
        array[i] = 0;
    }
}
```

```s
       move $t0, $zero    # i = 0
loop1: sll $t1,$t0,2      # $t1 = i * 4
       add $t2, $a0, $t1  # $t2 =
                          #   &array[i]
       sw $zero, 0($t2)   # array[i] = 0
       addi $t0, $t0, 1   # i = i + 1
       slt $t4, $t0, $a1  # $t3 = 
                          #   (i < size)
       bne $t4, $zero, loop1 # if (...)
                             # goto loop1
```

```c
void clear2(int * array, int size) {
    int *p;
    for (p = &array[0]; p < &array[size]; p = p + 1) {
        *p = 0;
    }
}
```

```s
        move $t0, $a0       # p = &array[0]
        sll $t1,$a1,2       # $t1 = size * 4
        add $t2, $a0,$t1    # $t2 = 
                            #   &array[size]
loop2:  sw $zero,0($t0)     # Memory[p] = 0
        addi $t0,$t0,4      # p = p + 4
        slt $t4,$t0,$t2     # $t3 =
                            #(p<&array[size])
        bne $t3,$zero,loop2 # if (...)
                            # goto loop2
```

The second version is more optimized, as less calculations happen in the loop

## Comparision of Array vs. Pointer

The array must have the "multiple" and add inside the loop because i is incremented and each address must be recalculated from the new index.
The memory pointer version increments the pointer p directly.

The pointer version moves the scaling shift and the array bound addition outside the loop, thereby reducing teh instructions executed per iteration from 6 to 4.

# ARM and MIPS similarities
ARM: The most popular embedded core

Similar basic set of instructions to MIPS

| | ARM | Mips |
| - | - | - |
| Date announced | 1985 | 1985 |
| Instruction Size | 32 bits | 32 bits |
| Address space | 32-bit flat | 32-bit flat |
| Data alignment | Aligned | Aligned |
| Data addressing modes | 9 | 3 |
| Registers | 15 * 32-bit | 31 * 32-bit |
| Input/output | Memory Mapped | Memory Mapped |

# Intel x86 ISA

Evolution with backward compatibility

## History
### 8080 (1974)
 - 8-bit microprocessor
 - Accumlulator, plus 3 index-register pairs
### 8086 (1978)
 - 17 bit extension to 8080
 - Complex instruction set (CISC)
### 8087 (1980)
 - Floating pointer coprocessor
 - Adds FP instrucitons and register stack
### 80286 (1982)
 - 24 bit addresses, MMU
 - Segmeneted memory mapping and protection
### 80386 (1985)
 - 32-bit extension (now IA-32)
 - Additional addressing modes and operations
 - Paged memory mapping as well as segments

## Further evolution
 - i486 (1989): pipelined, on-chip caches and FPU
 - Pentium (1993): superscalar, 64-bit datapath
 - Pentium Pro (1995), Pentium II (1997)
   - new microarchitecture
- Pentium III (1999)
  - Added SSE (Streaming SIMD Extensions) and associated registers
- Pentium 4 (2001)
  - New microarchitecture
  - Added SSE2 instructions

## Basic x86 Registers

### General Purpose Registers
GPR0-7 also has common names such as eax, ecx, edx, ebx, esp, ebp, esi, edi

### 16-bit registers

CS - Code segment pointer

SS - Stack segment pointer (top of stack)

DS,ES,FS,GS - Data segment pointers

### Others
EIP - Instruction Pointer

EFLAGS - Condition codes
## Basic x86 Addressing modes

### Two operands per instruction
| Source/dest operand | second source operand |
| ------------------- | --------------------- |
| Register | Register |
| Register | Immediate |
| Register | Memory |
| Memory | Register |
| Memory | Immediate |

### Memory Addressing modes
 - Address in register
 - Address = R_(base) + displacement
 - Address = r_(base) + 2^(scale) * R_(index) (scale = 0, 1, 2, or 3)
 - Address = R_(base) + 2^(scale) * R_(index) + displacement

 ## x86 Instruction Encoding

 1. JE EIP + displacement
  - 4 bit JE, 4 bit condition, 8 bit displacement
 2. CALL
  - 8 bit CALL, 32 bit offset
 3. MOV EBX,[EDI+45]
  - 6 bit MOV, 1 bit d, 1 bit w, 8 bit r/m postbyte, 8 bit displacement
 4. PUSH ESI
  - 5 bit opcode 3 bit register
 5. ADD EAX, #6765 
  - 4 bit opcode, 3 bit register, 1 bit w, 32 bit immediate value
 6. TEST EDX, #42
  - 7 bit opcode, 1 bit w 8 bit postbyte, 32 bit immediate value

### Variable Length encoding
 Postfix bytes specify addressing mode

 Prefix bytes modify operation
  - Operand, length, repetition, locking, ...

# Fallacies

## Powerful Instruction => Higher performance
Fewer instructions required

but complex instructions are hard to implement
 - May slow down all instructions including simple ones

Compilers are good at maing fast code from simple instructions

## Use assembly code for higher performance

But modern compilers ae better at dealing with modern processors

More lines of code => more erros and less productivity

## Backward compality instruction set doesn't change

But they do accrete more instructions

# Concluding Remarks

## Design Principles
1. Simplicity favors regularity
2. Smaller is faster
3. Make the common case fast
4. Good design demands good compromises
## Layers of software/hardware
Compiler, assembler, hardware
## MIPS: typical of RISC ISAs
c.f. x86

# The 20 MiniMIPS instructions covered so far

| Instruction | Usage | op | fn |
| - | - | - | - |
| Load upper immediate | lui rt,imm | 15 | |
| Add | add rd,rs,rt | 0 | 32 |
| Subtract | sub rd,rs,rt | 0 | 34 |
| Set less than | slt rd,rs,rt | 0 | 42 |
| Add immediate | addi rt,rs,imm | 8 | |
| Set less than immediate | slti rd,rs,imm | 10 | |
| AND | and rd,rs,rt | 0 | 36 |
| OR | or rd,rs,rt | 0 | 37 |
| XOR | rd,rs,rt | 0 | 38 |
| NOR | rd,rs,rt | 0 | 39 |
| AND Immediate | andi rt,rs,imm | 12 | |
| OR immediate | ori rt,rs,imm | 13 | |
| XOR immediate | xori rt,rs,imm | 14 | |
| Load word | lw rt,imm(rs) | 35 | |
| Store word | sw rt,imm(rs) | 43 | |
| Jump | j L | 2 | |
| Jump register | jr rs | 0 | 8 |
| branch less than 0 | bltz rs,L | 1 | |
| Branch equal | beq rs,rt,L | 4 | |
| Branch not equal | bne rs,rt,L | 5 | |


### [Back to Module 3](%WEBPATH%/classes/cs4720/module3)