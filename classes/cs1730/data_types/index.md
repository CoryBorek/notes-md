# Data Types and Usage


## Data Assignment
```c
x = y
```

## Booleans

Requires `stdbool`

```c
#include <stdbool.h>
bool x = true; // Also considered a 1.
bool y = false; // Also considered a 0.
```
## If Statements

Inside an if statement, requires a number. If it is zero, then it is false, if it is positive, then it is true.
```c
if (7){} // Considered true
if (0){} // considered false
```


## Arithmetic

```
+= -= /= *= %= // Add and set
    x = x + y // set x to x + y (addition)
    x = x - y // set x to x - y (subtraction)
    x = x / y // set x to x / y (division)
    x = x * y // set x to x * y (multiplicatino)
    x = x % y // set x to x mod y (modulus)
```

## Increment / Decrement
There are a few increment and decrement tools, and four possible operators, which are `x++ x-- or ++x --x`
```c
x = 3
y = ++x // x contains 4, y contains 4
y = x++ // x contains 4, y contains 3
```
Be careful with your ordering, as it could create bugs.


## Relational operators

    == // equal, floating and doubles are not always equal with different values, may want to round. to do it, take |x - y| < 1e-5 (|x - y| < 10^-5)

     !=  // not equal, also be careful with floating point numbers

    < // less than

    > // greater than

    <= // less then or equal

    >= // greater than or equal

## Logical operators

    && // and

     || // or (inclusive)

    ! // Not or negation


## Short circut

if the first value in AND is false, then false.

if the first value in OR is true, then true.

## Ternary Operator

The format is `condiction ? T : F`

Example:
```c
7 == 5 ? 4 : 3 // If 7 is equal to 5, then return 4, else return 3
```

## Explicit Type cast operator
(type)

 Example:
```c
int i;
float f = 3.14
i = (int) f;
```

Note: only uses primitive types for this.

## char
    Character type, can be treated like an integer. They take up 8 bits, or one byte.

## If and Else
```c
if (condition) {
    statement(s);
} else {
    statement(t);
}
```

Works the same as Java, except for non-zero values being considered true.

## Switch statements

```c
switch(expression) {
    case constant1:
        statement(1);
        break; // ends execution
    case constant2:
        statement(2);
        break;
    ...
    default: // optional
        statement(s);
        break;
} // switch
```

## Loops

### While loop
```c
while(true) { // condition is first
    doSomething();
} // runs infinitely
```


Full Example:
```c
int n = 10;
while (n > 0) {
    printf("%d, ", n);
    n--;
}

### Do While Loop
```c
int n = 10
do {
    printf("%d, ", n);
    n--;
} while (n > 0);
```

### For Loop
```c
for (setup, condition, change) {
    doSomething(setup);
} // for

for (int n = 10; n > 0; n--) {
    printf("%d, ", n);
}
```

NOTE: for loop with no condtion is an infinite loop.

### Other Loop Notes:

Don't use breaks in loops in this course, considered against good styling.

continue (breaks till end of this run of the loop).

goto (jumps to another point in the program), don't use, very old, and bad style.

# Examples
## case.c
```c
#include <stdio.h>
#include <string.h>


void toUpperCase(char s[]);
void toLowerCase(char s[]);

int main(int argc, char* argv[]) {

	if (strcmp(argv[1], "-u") == 0) {
		toUpperCase(argv[2]);
		printf("%s\n", argv[2]);
	}
	if (strcmp(argv[1], "-l") == 0) {
		toLowerCase(argv[2]);
		printf("%s\n", argv[2]);
	}
	return 0;
}

void toUpperCase(char s[]) {
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		char c = s[i];
		if ('a' <= c && c <= 'z') {
			s[i] = c - 32;
		}
	}
}

void toLowerCase(char s[]) {
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		char c = s[i];
		if ('A' <= c && c <= 'Z') {
			s[i] = c + 32;
		}
	}
}

```
### [Back to CS1730](%WEBPATH%/classes/cs1730/)