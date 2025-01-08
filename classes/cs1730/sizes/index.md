# Sizes
Different Data types in C have different sizes in bytes.

The following C source code is a program that can state the size.

## sizes.c
```c
#include <stdio.h>
#include <stdbool.h> // bool

/*
 * This program prints out the size of
 * various fundamental types, and it uses
 * the sizeof() unary operator.
 */
int main(void){

  printf("sizeof(char) = %ld byte(s)\n", sizeof(char));
  printf("sizeof(signed char) = %ld byte(s)\n", sizeof(signed char));
  printf("sizeof(unsigned char) = %ld byte(s)\n\n", sizeof(unsigned char));

  printf("sizeof(short) = %ld byte(s)\n", sizeof(short));
  printf("sizeof(unsigned short) = %ld byte(s)\n", sizeof(unsigned short));
  printf("sizeof(int) = %ld byte(s)\n", sizeof(int));
  printf("sizeof(unsigned int) = %ld byte(s)\n", sizeof(unsigned int));
  printf("sizeof(long) = %ld byte(s)\n", sizeof(long));
  printf("sizeof(unsigned long) = %ld byte(s)\n\n", sizeof(unsigned long));

  printf("sizeof(float) = %ld byte(s)\n", sizeof(float));
  printf("sizeof(double) = %ld byte(s)\n\n", sizeof(double));

  printf("sizeof(bool) = %ld byte(s)\n", sizeof(bool));
  return 0;
}
```

### [Back to CS2720](%WEBPATH%/classes/cs1730/)