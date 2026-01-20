# Introduction to Computational Science

Dr. Hollingsworth.

Uses it in Grafstate (yay....)


# Numbers

Not a typical numerical methods course. Which is a normal standard. This is different, because we are also constructing the implementation. Number representations in machines, in different bases, etc.

What is a decimal? How do we represent them? How do we represent negative numbers (two's compliment lol).

## Base 10

If our alphabet is just 10 symbols, and a number is a word, then 10 is a word. (1 and 0). You can't describe a system without some sort of attachment to it.

For computers, we base it as on and off, or positive and negative current. We can make it a base-2 system (1 and 0)

| - | - |
| Base 10 | Base 2 |
| 0 | 0 |
| 1 | 1 |
| 2 | 10 |
| 3 | 11 |
| 4 | 100 |
| 5 | 101 |
| 6 | 110 |
| 7 | 111 |
| 8 | 1000 |
| 9 | 1001 |
| 10 | 1010 |

$$101_2 = 1*10^2 + 0*10^1 + 1*10^0 = 5$$

$$ 0110 1001_2 = 1 + 4 + 32 + 64 $$


# One's Complement

1. Flip each bit.

| n   | one's complement |  -n |
| - | - | - |
| 000 | 111 | -0 |
| 001 | 110 | -1 |
| 010 | 101 | -2 |
| 011 | 100 | -3 |

# Two's Compliment
(my favorite)

1. Take the one's complement
2. increment by one.

| n | one's comp | 2s comp | -n |
| - | - | - | - | 
| 000 | 111 | 000 | 0 |
| 001 | 110 | 111 | -1 |
| 010 | 101 | 110 | -2 |
| 011 | 100 | 101 | -3 |
| 100 | 011 | 100 | -4 |
| 101 | 010 | 011 | 3 |
| 110 | 001 | 010 | 2 |
| 111 | 000 | 001 | 1 |

## Base 16
TODO: stuff here

## Base 8

TODO: Stuff here

## Conversion
TODO: Stuff here

# IEEE 754 - 32-bit floating point numbers.
How do we retreive this item very easily and decompose the number into its smallest pieces?

We can decompose it into three parts:

Sign (one bit)
Exponent (8 bits)
Mantissa (the rest)

Once we can subdivide it, we could write the exponent, bits, and decide whether it is negative or positive.

Now we need an algorithm to encode and decode these bits.


1. Sign - 1 bit
2. Exponent - 8 bits
3. Mantissa - 23 bits.


## Example

316.625

| Sign | Exponent |        Mantissa         |
| ---- | -------- |        --------         |
|  0   | 10000111 | 00111100101000000000000 |

### Steps
#### Get sign bit
In our number, it is positive, so the sign bit is 0.

#### Convert to Binary

316 - 256 - 32 - 16 - 8 - 4 = 0

1011 1100
AC

0.625 1/2 + 1/8 =

101

10111100.101

#### Scientific Notation (Base 2)
$$1.0111100101 * 2^8$$

#### Encode the Exponent
$$2^8$$

We can ignore the 2, as this is implied.

We can add 127 to the actual value

8 encoded is 0000 1000

We can add 127, or, there is a little hack.

0 = 1000 0000

If we add 8 to this, we get 1000 1000 or 0x88.

#### Encode the MAntiss

Store all bits right of the decimal point.

0111100101

Not any of the other bits.


## Decoding

| Sign | Exponent | Mantissa |
| ---- | -------- | -------- |
|  1   | 01111010 | 1011 0.. |


#### Decode Exponent
In this case, the sign is 1, so it is negative.

0111 1010 = 122
122 - 127 = -5

#### Decode Sign

It's negative 

#### Decode Mantissa

Put the understood 1 back in.

1.1011

#### Scientific Notation (base 2)
Then we can write it in scientific notation.

$$ -1.1011_2 * 2^{-5} $$

## Zero Encoding

| Sign | Exponent | Mantissa |
| ---- | -------- | -------- |
|   0  | 00000000 | 00000... |

Decode above:

$$ 1.0 * 2^-127 $$

Works for almost every case, but 0.

We define 32 bits of 0 as the encoding of $$0_{10}$$.

$$ 1.0 * 2^{-127} cannot be stored in 32 bits. $$

## Exercise

### Encoding

### Decoding

