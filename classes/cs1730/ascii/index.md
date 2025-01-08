# ASCII Characters
ASCII is a format for converting bytes to visible characters. The following program prints a chart of ascii characters.

## asciichart.c
```c
#include <stdio.h>

int main(void) {
	unsigned char c = 32;
	printf("char\tinteger\n");
	printf("====\t======\n");
	while (c <= 127) {
		if (c % 10 == 0) {
			printf("char\tinteger\n");
			printf("====\t======\n");
		}
		printf("%c\t%hhu\n", c ,c);
		c++;
	}

}

```
### [Back to CS1730](%WEBPATH%/classes/cs1730/)