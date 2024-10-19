# DNA String Encoding

Consider the four values.

```c
A = 0b00
T = 0b01
C = 0b10
G = 0b11
```

We can fit four characters into a single unsigned char.


if (|d| % 4 != 0) then pad with trailing zeros, supose d is ATTCGG.

Compress ATTCGG by printing length of d.

ATTCG's length is 6.

Create an 8-bit unsigned char to fill values with.

Fill values

First four bits are stored

00 << 6
01 << 4
01 << 2
00 << 0

Print base-10 value of the unsigned char

Reinitialize value to 0.
11 << 6
11 << 4

Add trailing zeros at end

00 << 2
00 << 0

Print final values as output

6 22 240

DNA String memory usage: 7 bytes, Compressed Amount: 6 bytes

We printed data to the console, as File IO isn't used yet.

For a future assignment, we will compress / decompress a DNA string without file I/O.

Requires Bitwise operators.
