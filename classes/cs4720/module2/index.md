# Module 2 - Logic Design

# Number Systems
## Decimal Number
It has base 10.

Uses the digit 0 to 9.

Base: number of digits a number system is using.

Example: 420

## Binary Number System
Base 2

It uses 0 and 1.

## Conversion of Decimal Number into Binary Number

 1. Divide the number by 2
 2. Keep the remainder
 3. Keep dividing until we get the quotient equals to 0.
 4. Record remainders from bottom to top.

### Example
$(13)_{10} = (1101)_2$

| Number | Quotient | remainder |
| - | - | - |
|13 | 6 | 1 |
| 6 | 3 | 0 |
| 3 | 1 | 1 |
| 1 | 0 | 1 |

## Place value of digits in decimal number

The place value of 5 and 2 in $(4521)_{10}$

The place value if 5 is $500 = 5 * 10^2$.

The place value of 2 is $20 = 2 * 10^1$.

## Place value of Digits in Binary Number

1011

| Digit | Place value | value |
| - | - |
| 1 | $2^3$ |
| 0 | $2^2$ |
| 1 | $2^1$ |
| 1 | $2^0$ |

101101

1 + 4 + 8 + 32

## Hexidecimal Numbers

Base 16

Uses the 10 decimal numbers as well as A-F.

Example: 12AC

# Digital Electronics

The electronics inside a modern computer are digital

Digital electronics operate ith only two voltage levels of interest: A High voltage and a low voltage
 - Low (L) and High (H)
 - False and True
 - 0 and 1

# Two logic block types
Logic blocks are categorized as one of two types

Deoending on whether they contain memory

Blocks without memory are combinational the output of a combinational block depends only on the current point

In blocks with memory, the outputs can depend on both the inputs and the value stored in memory, which is called sequential logic. We will talk more about it in module 4.

Output is a  boolean function in combinational logic

# Boolean Algebra
Boolean algebra is composed of
Boolean constants 0 and 1
Boolean variables which can take 0 and 1

Boolean operators

(NOT): X'
OR (incliusive): X + Y
AND: X * Y OR XY
XOR: exclusive or
Nand: Not and
NOR: not or.


Boolean functions: expressions involving boolean variables, constants, and operators

F(X,Y,Z) = X * Y' + X * Z'

## Combinational Logic Gates:

NOT GATE or inverter (triangle)

AND GATE: (semi-circle)

OR GATE: (arrow head)

XOR: (or with line on tail)

inverted version: (circle at tip)

## Truth table
### NOT
| X | X' |
| - | - |
| 1 | 0 |
| 0 | 1 |

### AND
| X | Y | X*Y |
| - | - |  -  |
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### OR
| X | Y | X+Y |
| - | - |  -  |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### NAND
| X | Y | X~&Y |
| - | - |  -  |
| 0 | 0 | 1 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

### NOR
| X | Y | X~+Y |
| - | - |  -  |
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 0 |

### EXNOR
| X | Y | X~^Y |
| - | - |  -  |
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### EXOR
| X | Y | X^Y |
| - | - |  -  |
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

## Combination al Logic Truth Tables

### Example
An n variable boolean function can be represented by a truth tabler with $2^n$ rows

| X | Y | Z |
| - | - | - |
| 0 | 0 | 0 |
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 0 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |
| 1 | 1 | 1 |

## Boolean expressions and functions

### Example
Find the values of the Boolean function represented by F(x,y,z) = xy + z'
### Solution
We use a Truth table to compute the value F(x,y,z)

| x | y | z | xy | ~z | F(x,y,z) = xy + ~z |
| - | - | - | -- | -- | :----------------: |
| 1 | 1 | 1 | 1  | 0  | 1                  |
| 1 | 1 | 0 | 1  | 1  | 1                  |
| 1 | 0 | 1 | 0  | 0  | 0                  |
| 1 | 0 | 0 | 0  | 1  | 1                  |
| 0 | 1 | 1 | 0  | 0  | 0                  |
| 0 | 1 | 0 | 0  | 1  | 1                  |
| 0 | 0 | 1 | 0  | 0  | 0                  |
| 0 | 0 | 0 | 0  | 1  | 1                  |

## Laws of Boolean Algebra

Identity: $a + 0 = a$

Zero and One laws: $a + 1 = 1 and A * 0 = 0$

Inverse: $A + ~A = 1 and A * ~A = 0$

Commutative: $A + B = B + a and A * b = B * A$

Associative: $A + (B + C) = (A + B) + C

## Minterm and Maxterm
### Minterm
A minterm of n Boolean variables is the product of n literals in which each variabe appears exactly once.

Each minterm has calue 1 for exactly one combination of values of variables

A Boolean function can be written as a sum of minterms which is reffered to as the minterm expansion or a standard sum of products

#### Examples
ABC, A'BC, A'B'C', etc.

### Maxterm

Sum of n literals in which each variable apperas exactly once.

Each maxterm has a value of 0 for exactly one combination of values of variables.

A Boolean function can be written as a product of maxterms, which is referred to as a maxterm expansion or a standard product of sums.

#### Examples
A + B + C, A' + B + C, A'+ B'+ C'

## Sum-of-products expansion

Example find the sum of product expansion for the function F(x,y,z) = (x+y)~Z

which gives us F(x,x,z) = xy~z + x~y~z + ~xy~z

### Examples

| x | y | z | xz' | yz | xz' + yz |
| - | - | - | --- | -- | -------- |
| 1 | 1 | 1 | 0   | 1  | 1        |
| 1 | 1 | 0 | 1   | 0  | 1        |
| 1 | 0 | 1 | 0   | 0  | 0        |
| 1 | 0 | 0 | 1   | 0  | 1        |
| 0 | 1 | 1 | 0   | 1  | 1        |
| 0 | 1 | 0 | 0   | 0  | 0        |
| 0 | 0 | 1 | 0   | 0  | 0        |
| 0 | 0 | 0 | 0   | 0  | 0        |

#### Minterm
xyz + xyz' + xy'z' + x'yz

#### Maxterm
(x' + y + z')(x + y' + z)(x + y + z')(x + y + z)

# Combinational Logic Circuit Design Steps
1. Functional Description of the Logic Circut
2. Derive a truth table
3. Derive the Boolean expression
  a. Sum of Products
  b. Products of Sum
4. Derive the logic circut (and-or implementation) (or-and implementation)

## Let's design one

Design a 3 input combinational logic circuit to detect whether or not precisely two of its inputs are 1. If yes, output one, else output 0.

### Truth Table
| x | y | z | Output|
| - | - | - | ----- |
| 1 | 1 | 1 | 0     |
| 1 | 1 | 0 | 1     |
| 1 | 0 | 1 | 1     |
| 1 | 0 | 0 | 0     |
| 0 | 1 | 1 | 1     |
| 0 | 1 | 0 | 0     |
| 0 | 0 | 1 | 0     |
| 0 | 0 | 0 | 0     |

### Sum of products
xyz' + xy'z + x'yz

### Product of Sums

(x+y+z)(x+y+z')(x'+y+z)(x'+y'+z')

 
### [Back to CS4720](%WEBPATH%/classes/cs4720/)