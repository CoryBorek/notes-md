# Operation Example
The following files are necessary to run the operation example.

## operation.c
```c
#include <stdio.h>

int addition(int a, int b) { return a + b; }
int subtraction(int a, int b) { return a - b; }


int operation(int x, int y, int (* functocall)(int, int)) {
	int g;
	g = (*functocall)(x,y);
	return g;
}

int main(void) {
	int m, n;
	int (* minus)(int, int) = subtraction;
	m = operation(7, 5, addition);
	n = operation(20, m, minus);
	printf("%d\n", n);
	return 0;
}
```

## Makefile
```

compile: operation.out

operation.out: operation.c
	gcc -Wall operation.c -o operation.out

run: operation.out
	./operation.out
clean:
	rm operation.out

```

### [Back to Pointers](https://coryborek.github.io/classes/cs1730/pointers/)