# Header Files
    A file that allows for multiple c files to be used. Generally holds prototypes.

# Example Programs

## Makefile
```
CC = gcc
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

compile: oddeven.out

oddeven.out: main.o oddeven.o
	$(CC) $(LFLAGS) -o oddeven.out main.o oddeven.o

main.o: oddeven.c oddeven.h
	$(CC) $(CFLAGS) main.c

oddeven.o: oddeven.c oddeven.h
	$(CC) $(CFLAGS) oddeven.c



run: oddeven.out
	./oddeven.out

clean:
	rm *.o
	rm oddeven.out

```

## main.c
```c
#include <stdio.h>
#include "oddeven.h"

int main(void) {
	int i = 1;
	while (i != 0) {
		printf("Please enter an int (0 to exit)");
		scanf("%d", &i);
		odd(i);
	}
	return 0;
}

```

## oddeven.h
```c
#ifndef ODDEVEN_H
#define ODDEVEN_H
void odd(int);
void even(int);
#endif

```
## oddeven.c
```c
#include <stdio.h>
#include "oddeven.h"

void odd(int x) {
	if (x % 2 != 0) {
		printf("It is odd.\n");
	} else {
		even(x);
	}
}

void even(int x) {
	if (x % 2 == 0) {
		printf("It is even.\n");
	} else {
		odd(x);
	}
}

```

### [Back to CS1730](https://coryborek.github.io/classes/cs1730/)