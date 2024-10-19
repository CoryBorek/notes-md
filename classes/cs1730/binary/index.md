# Binary Example

During the first week of class, we were asked to write a program in Java that converts an integer `int` into a Binary String of which the string represents an integer of the same value.

We then converted the program into the C programming language.

It shows that both languages can produce the same expected outcome, though C can do it a lot faster.

## Binary.java
```java

import java.util.ArrayList;
/**
 * Integer to Binary Converter.
 */
class Binary {

    public static void main(String[] args) {
	ArrayList<Integer> list = new ArrayList<Integer>();
	int start = 1730;

	if (start == 0) {
	    list.add(0);
	}
	while (start != 0) {
	    list.add(start % 2);
	    start /= 2;
	}
	String out = "";
	for (int i = list.size() - 1; i > -1; i--) {
	    out += list.get(i);
	}

	System.out.printf("%s", out);
	
    }
} // Binary
```
## Binary.c
```c
#include <stdio.h>


int main(void) {
  int input = 1730;
  int bit[64] = {0};

  int index = 0;

  if (input == 0) {
    bit[0] = 0;
    index++;
  }
  
  while (input != 0) {
    bit[index] = input % 2;
    input /= 2;
    index++;
  }

  for (int i = index - 1; i >= 0; i--) {
    printf("%i",  bit[i]);
  }

  printf("\n");

}

```

### [Back to CS1730](https://coryborek.github.io/classes/cs1730/)