# Two's Complement, Signed integer
Two's Complement is a way to handle Signed integers, and to make a negative number from a positive one.

Assume X is a signed integer represented by a fixed number of bits.

`-x == ~x + 1`

The negative is equivilent to the flipped bits of x plus one.

Three bit signed integers

```
Base 10 Binary Two's Complement
  0      000       000
  1      001       111
  2      010       110
  3      011       101
 -4      100       100
 -3      101       011
 -2      110       010
 -1      111       001
```

## Example

### Base 10 value 1
```
x = Binary 0000 0001
~x = 1111 1110
~x + 1 = 1111 1111
```



### Compute -18 using a signed 8-bit integer

```
18 0    0  0  1  0  0  1  0
p  -128 64 32 16 8  4  2  1
```

```
Flip bits
c               1
~18 1 1 1 0 1 1 0 1
+1  0 0 0 0 0 0 0 1
-18 1 1 1 0 1 1 1 0
```

```
double check
c   1 1 1 1 1 1
18  0 0 0 1 0 0 1 0
-18 1 1 1 0 1 1 1 0
-   0 0 0 0 0 0 0 0
```


### Calculate -25 using binary

First calculate positive
```
25 / 2 = 12 r 1
12 / 2 = 6 r 0
6 / 2 = 3 r 0
3 / 2 = 1 r 1
1 / 2 = 0 r 1
```
```
25 = 11001 = 0001 1001

~(0001 1001) = 1110 0110

 1110 0110
+0000 0001
=1110 0111
```

```
Verify:
c 11111  111
   0001 1001
  -1110 0111
=  0000 0000
```