# Structures
Instead of typical Class systems, that you would see in an Object-Oriented Programming Language such as Java, we instead use the concept of a structure.

They follow a specific form:

```c
struct StructName {
	DataType [*] varName1;
	DataType [*] varName2;
	DataType varName3;
	DataType varName4;
};
```

# Examples
The following will create an example program that uses structs.

## Makefile
```
compile: structs.out

structs.out: structs.c
	gcc -Wall structs.c -o structs.out

run: structs.out
	./structs.out
clean:
	rm structs.out

```

## structs.c
```c
#include <stdio.h>

struct student {
	char * firstName;
	char* lastName;
	int id;
	double gpa;
};


struct group {
	struct student s1[4];
	unsigned short groupId;
	char groupLetter;
	double averageGpa;

};

struct group2 {
	struct student s1[4];
	unsigned short groupId;
	double averageGpa;
	char groupLetter;
};


int main(void) {
	struct student s;
	struct student * sp;
	struct group g;
	struct group2 g2;

	printf("%ld\n", sizeof(s));
	printf("%ld\n", sizeof(sp));
	printf("%ld\n", sizeof(g));
	printf("%ld\n", sizeof(g2));
}

```

### [Back to CS2720](https://coryborek.github.io/classes/cs1730/)