# Basics of C

## Compilation
This course uses GCC 17.2.0, to compile data.

There are a few commands you can use.
```bash
gcc -Wall example.c # Compiles and links to a.out
gcc -Wall example.c -o # Compiles but does not link
gcc -Wall example.o -o example.out # Links Compiled file to output executable.
```

## Comparisons between Java and C


C/C++:
    - Does not have Garbage Collection
    - You must Deallocate Memory, have to free it (Memory leaks are bad.)
    - Has variables called Pointers (hold memory addresses)
      - Allows for lower-level manipulation of pointer arithemetic to move around.
    - Was designed before viruses existed, so you must be careful with everything. Live wires, not insulated.
Java:
    - Has Garbage Collection
    - Limited in Memory manipulation
    - Java wanted to be pointer free (yet has a NullPointerException
    - Was designed for security


## Identifiers and Sensitivity
A vaid idenfifier is a sequence of one or more letters, digits, or underscore characters. They can't include spaces, punctuation, and symbols.

They could begin with an underscore, but it's generally considered poor programming style.

It can never  begin with a digit.

Names of variables and functions should correlate with its function.

C has reserved keywords that can't be used.

Some compilers may have additional keywords to base C or C++.

C and C++ are case-sensitive.

ex: RESULT is different from result or Result.

File names are also case-sensitive.

# Examples
## hello.c
This is an example, Hello world program.
```c
#include <stdio.h>

int main (int argc, char* argv[]) {
	printf("Hello, World!\n");
	return 0;
}

```

## commandargs.c
This program prints the arguments that are passed through the command line.
```c
#include <stdio.h>

void printCommandLineArgs(int n, char* argv[]);

int main (int argc, char* argv[]) {
	printCommandLineArgs(argc, argv);
	return 0;
}

void printCommandLineArgs(int n, char* argv[]) {
	printf("The command line args are:\n");
	for (int i = 0; i < n; i++) {
		printf(" argv[%d] = %s\n", i ,argv[i]);
	} // for


} // printCommandLineArgs

```
### [Back to CS1730](https://coryborek.github.io/classes/cs1730/)