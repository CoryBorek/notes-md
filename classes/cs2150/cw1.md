## Exercise

### Encoding

Encode 3027.59375 as IEE754 32 bit float.

3027 - 2048 - 512 - 256 - 128 - 64 - 16 - 2 - 1
  
10011

11 to left

$$ 1.0111101001110011 * 2^{11} $$


1000 1011

1000 0000

| Sign | Exponent |      Mantissa         |
| ---- | -------- |      --------         |
| 0    | 10001011 | 0111101001110011 0... |


### Decoding

[2] Decode the following into scientific notation in base 2.

| Sign | Exponent  | Mantissa  |
| ---- | --------  | --------  |
|  0   | 0101 1010 | 01101 0.. |

Positive

Negtive exponent
 -37

$$1.01101 * 2 ^{-37} $$