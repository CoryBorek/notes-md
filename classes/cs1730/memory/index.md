# C and C++ Process Memory Layout

## Global variables, and Static variables

Varables declared at the top of program. Can be used in any other part of the program.

Once they hit the line of code that they are declared in, will stick around unti the end of the program.

## Call Stack

Used by C and C++ (Java uses it as well)

to store variables local to a function. Stored temporarily while a function is called, until the call ends. Popped off stack afterwards. Can cause a problem when trying to access deallocated memory

## Heap

Longer-term memory. Stores dynamic memory allocation. When we use a malloc or calloc function, this heap stores it. Used to store objects longer term, example, result of a string or array.

Heap is managed by users, we must free up memory that we are no longer using.

### Dynamic Memory in C
    malloc // allocates specified num of bytes
realloc // increases or decreases size of specified block of memory
calloc // allocates specified num of bytes and initializes to zero, notes takes more time then malloc.
free // releases specified block of memory back to the system.

Requires cstdlib header in C++.



C++ also has new language features, including new and delete.

new creates and allocates a variable, delete removes it from the heap.


In C, this would require malloc or calloc.

c++ may use new with a constructor call to place cate on a newly created object (instance of a class)

a C++ class may have a destructor for dynamic memory deallocation.


### Dynamic Memory in Java:


When programs need to dynamically allocate memory, java uses the term new.

Java doesn't need you to deallocate memory, due to the garbage collector.

No need for a delete operator or a free function in Java.

There is a constructor, no destructor.

### malloc function

Has one input parameter of type size_t (basically an integer greater or equal to zero.)
Says how much memory to put on the heap (in bytes), ex: sizeof(type) * units

```c
int * foo =  (int *) malloc(sizeof(int) * 5); // Creates a 5-element integer array on the heap.
```

You can use it as an array, or with the pointer syntax.

If successful, stores the memory address of the program on its heap at a memory address.

When you no longer need the array, deallocate it:
```c
free(foo)
```

### Dynamic Memory and Arrays

Performed by a call to malloc or calloc to assign memory using any variable value as size.

Dynamic memory is allocated by the system from the memory heap.

NOTE: The memory heap of a program is not the same concept as the "heap" data structure covered in most data structures class
(named the same thing, even thoygh they reperesent different concepts)

### Dynamic Memory and the Heap

Dyanamic memory is Memory that is allocated by the system from the memory heap

In C we have malloc/calloc to allocate memory and free to deallocate (free up) space on the heap

Be aware, that computers have limited resources, and it can be exhaused, no guaruntees that all requests to allocate memoy on the heap are going to be granted by the system.

We can check if a call to malloc or calloc is successful.

If malloc or calloc points to 0 (null pointer) then it failed, otherwise successful.

### Memory Leaks

We want to avoid it.

Happens when you allocate memory, but not deallocate it when the program ends. Considered poor programming style, if you do this.
 Make sure you deallocate any item you put on the heap, otherwise the OS will have to clean it up (may prevent other processes for accessing the memory).

valgrind is a popular program used to detect memory leaks in C and C++ programs.

Picture a parking lot with a pickup truck double parked.

Becomes an issue when an operating system is busy.

Considered a **horrible** programming style to have a memory leak in a program. Never do this.

Only occurs when you are using dynamic memory allocation. Stacks remove variables automatically.

Anything put on the heap in a C/C++ process remains on the heap. You must remove it as a programmer.
## Instructions

Every line of code written is compiled and linked to an executable. gets loaded into memory with the program itself, when you call a function, you jump to that position in memory, and run the code.

# Memory Examples
The following source blocks contain the files that have example programs for this.

## Makefile
```

compile: heap.out heap2.out dynamic.out

heap.out: heap.c
	gcc -Wall heap.c -o heap.out

heap2.out: heap2.c
	gcc -Wall heap2.c -o heap2.out

dynamic.out: dynamic.c
	gcc -Wall --pedantic-errors dynamic.c -o dynamic.out

dynamic: dynamic.out
	./dynamic.out

heap2: heap2.out
	./heap2.out

heap: heap.out
	./heap.out

run: heap.out heap2.out
	./heap.out
	./heap2.out
clean:
	rm *.out

```

## dynamic.c
```c
#include <stdio.h>
#include <stdlib.h> // malloc, calloc, free, exit

/*
 * Print the values in a to standard output, where a is a
 * pointer to the start of a contiguous block of
 * memory containing n integers.
 */
void print(int * a, int n);

/*
 * Demos dynamic memory allocation and deallocation
 * for a 1D array. Also, demos this for a variable
 * sized 1D array.
 */
int main(void){

  int n = 12;
  n = 5*1000*1000;
  //int * a = (int *) malloc(n * sizeof(int));
  int * a = (int *) calloc(n, sizeof(int));

  if(a == NULL){
    printf("Dynamic memory allocation failed.\n");
    printf("Goodbye.\n");
    exit(0);
  }
  else{
    printf("Dynamic memory allocation successful.\n");
  }
  for(int i = 0; i < n; i++){
    *(a + i) = i + 1;
  }
  printf("a = ");
  print(a, n);
  free(a);


  int b[n];
  for(int i = 0; i < n; i++) {
    *(b + i) = i + 1;
  }
  printf("b = ");
  print(b, n);

  return 0;
}

void print(int * a, int n){
  printf("[");
  for(int i = 0; i < n - 1; i++){
    printf("%d, ", *(a + i));
  }
  printf("%d]\n", *(a + n - 1));
}

```

## heap.c
```c
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int i, n;
	int * p;
	printf("How many numbers would you like to type? ");
	scanf("%d", &n);
	p = (int *) malloc(n * sizeof(int));
	if (p == NULL) {
		printf("Error memory on the heap could not be allocated.\n");
	} else {
		for (i = 0; i <n; i++) {
			printf("Enter Number: ");
			scanf("%d", &p[i]);
		}
		printf("You have entered: ");
		for (int i = 0; i < n - 1; i++) printf("%d, ", p[i]);
		printf("%d\n", p[n-1]);
		free(p);
	}
	return 0;
}

```

### heap2.c
```c
#include <stdlib.h>
#include <stdio.h>

int main(void) {
	int i, n;
	int * p;
	printf("How many numbers would you like to type? ");
	scanf("%d", &n);
	p = (int *) calloc(n, sizeof(int));
	if (p == NULL) {
		printf("Error memory on the heap could not be allocated.\n");
	} else {
		for (i = 0; i <n; i++) {
			printf("Enter Number: ");
			scanf("%d", &p[i]);
		}
		printf("You have entered: ");
		for (int i = 0; i < n - 1; i++) printf("%d, ", p[i]);
		printf("%d\n", p[n-1]);
		free(p);
	}
	return 0;
}

```
### [Back to CS1730](https://coryborek.github.io/classes/cs1730/)