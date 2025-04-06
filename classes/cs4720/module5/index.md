# Module 5

# Arithmetic for Computers

Operations on integers

Addition and Subtraction, Multiplication and Division.

Dealing with Overflow.

## Review: Basic Hardware

AND gate,

OR gate,

NOT gate,

Multiplexor

Half Adder: S = x'y + xy', C = xy

# Overflow

Overflow = Carry in to most significant bit XOR carry our of most significant bit.



# Multiply in MIPS

 Mips provides a separate pair of 32-bit registers to contain the 64 bit product, called Hi and Lo

 MIPS has two instructions


 # Divide in MIPS

 Two instructions
 - divide (div)
 - divide unsigned (divu)


Both instructions ignore overflow and division by zero

Hi register contains the remainder, and Lo register contains the quotient after the divide instruction

### Example
```
div $s0, $s1

```

# Floating Point
Representation for non-integral numbers

Including very small and very large numbers


Like scientific notation
 - $-2.34 * 10^56$ (normalized)
 - $+0.002 * 10^{-4}$ (not normalized)

In Binary: $+- 1.xxxxxxx_2 * 2^{yyyy}$ 

## FLoating point standard IEEE STD 754-1985

Now almost universally adopted

Two representations

- Single Precision (32 bit)
- Double Precision (64 bit)

S (sign bit)

Exponent (single: 8 bits, double: 11 bits)

Fraction (single: 23 bits, double: 52 bits)

$X = (-1)^S * (1 + Fraction)*2^{(Exponent-Bias)}$

Sign bit = 0 : non-negative, 1-> negative


## Exaple
$-0.75 = 00.11_2$

$-0.75 = (-1) * 1.1_2 * 2^-1$

$S = 1$

Fraction = $10000...00_2$

Exponent = -1 + Bias

Single: -1 + 127 = 126
Double: -1 + 1023 = 126

## Example 2
6 = 11.101 = 1.11010000 * 2^1

S = 0

Exponent = 1 + 127 = $1000000_2$

Fraction = $11010000000000000000000_2$

X = $01000000011010000000000000000000_2$
0.625 = 101

## Example 3
What number is represented by the single-precision float?

1100000010100....0

S = 1
Fraction = 010000...0
Exponent = 10000001 = 129

$x = (-1)^1 * (1 + 01)$

# Floating-point Instructions in MIPS

FP hardware is coprocessor 1

Adjunct processor that extends the ISA

Separate FP registers

32 single-precision: `$f0, $f1, ... $f31`

Paired for double-precision: `$f0/$f1, $f2/$f3, ...`

Release 2 of MIPS ISA supports 32 x 64 bit FP regs

FP instructions operate only on FP registers

Programs generally don't do integer ops on FP data or vice-versa.


MIPS supports IEEE 754 single precision and double precision formats with

Floating point addition. single (add.s) and addition, double (add.d)

Subtraction (sub.s, sub.d)

Multiplication (mul.s, mul.d)

Division (div., div.d)

## Floating point Comparision

FP load and store instructions

lwc1, swc1

e.g. `ldc1 $f8, 32($sp)`


Floating point comparison, single, and comparison, double (c.x.d), where x may be equal (eq), not equal (neq), less than (lt), less than or equal (le), greater than (gt), greater than or equal (ge)

Floating point branch, true (bc1t), and branch, false (bc1f)

Example: `c.lt.d $f0, $f2` #condition of `$f0 < $f2`
  - `bc1t exit` # if condition is true, exit



# FP Example: convert a temperature in F to C

```c
float f2c (float fahr) {
    return ((5.0/9.0)*(fahr - 32.0));
}
```

fahr in `$f12`, result in `$f0`, literals in global memory space

## Compiled LEGv8 code
```asm
f2c:
    lwc1, $f16, const5($gp) # $f16 = 5.0 (5.0 in memory)
    lwc1 $f18,const9($gp)   # $f18 = 9.0 (9.0 in memory)
    div.s $f16, $f16, $f18  # $f16 = 5.0 / 9.0
    lwc1 $f18, const32($gp) # $f18 = 32.0
    sub.s $f18, $f12, $f18  # $f18 = fahr - 32.0 
    mul.s $f0, $f16, $f18   # $f0 = (5/9)*(fahr - 32.0)
    jr $ra                  # return
```

# Concluding remarks

ISAs support arithmetic

Bounded range and precision
 - Operations can overflow and underflow
### [Back to CS4720](%WEBPATH%/classes/cs4720/) 


