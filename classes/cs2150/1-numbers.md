
# Numbers

Not a typical numerical methods course. Which is a normal standard. This is different, because we are also constructing the implementation. Number representations in machines, in different bases, etc.

What is a decimal? How do we represent them? How do we represent negative numbers (two's compliment lol).

## Base 10

If our alphabet is just 10 symbols, and a number is a word, then 10 is a word. (1 and 0). You can't describe a system without some sort of attachment to it.

For computers, we base it as on and off, or positive and negative current. We can make it a base-2 system (1 and 0)


| Base 10 | Base 2 |
| - | - |
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