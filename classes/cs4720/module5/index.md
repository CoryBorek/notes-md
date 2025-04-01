# Module 5

# Multiply in MIPS

 Mips provides a separate pair o32-bitr registers to contain the 64 bit product, called Hi and Lo

 MIPS has two instructions


 # Divide in MIPS

 Two instructions
 - divide (div)
 - divide unsigned (divu)


Both instructions ignore overflow and division by zero

Hi register contains the remainder, and o register contains teh quotient after the divide instruction

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

x = (-1)^1 * (1 + 01)

# Floating-point Instructions in MIPS

FP hardware is coprocessor 1

Adjunct processor that extends the ISA

Separate FP registers

32 single-precision: $f0, $f1, ... $f31

Paired for double-precision: $f0/$f1, $f2/$f3, ...

Release 2 of MIPS ISA supports 32 x 64 bit FP regs

FP instructions operate only on FP registers

Programs generally don't do integer ops on FP data or vice-versa.



### [Back to CS4720](%WEBPATH%/classes/cs4720/) 


