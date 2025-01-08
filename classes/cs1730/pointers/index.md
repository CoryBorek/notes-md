# Pointers
 - Poiner Initialization
 - Void pointers
 - null pointers
 - Function pointers
 - Pointers and Const
 - Right-left rule

## Initialization:
```c
 int myvar;
 int * myptr = &myvar;


  int myvar;
  int* myptr;
  myptr = &myvar;
```
// * = pointer
// & pointer that applies to a variable.



## Pointer Arithemetic:

 Pointer memory addresses can have arithemetic.
 Only supports Addition and Subtraction.
 No multiplication, division, or modulus.

 To understand increment or decrement, must understand number of bytes to value that you are pointing to.

```
char* mychar;
short* myshort;
long* mylog;
```

```
myChar is at 1000
myShort is at 2000
myLong is at 3000;
```

If we write ++myChar;
```
++myShort
++mylong
```
```
myChar = 1001
myShort = 2002
myLong = 3008
```
int would move over 4 bytes.

You can draw nice memory maps with pointer arithemetic.

You should do it to understand what is happening at the low level.


Pointer can be used to control items on the heap that can last past functions themselves.

```
*p++ // equiveleint to *(p++)
```
++ takes a higher preference then the ++ operator.

```
++*p // (++(*p))
*p++ // *(++p)
(*p)++
```

## Pointers to Pointers:

Determined by the number of asterisks.

Example:
```c
char a;
char * b;
char ** c;
a = 'z';
b = &a;
c = &b;
```
This is not a good usage of a double-pointer in c.

Better usage is for multi-dimensional structures/arrays.


## Void pointers

Special type of pointer in C, the has an absence of type.

Can be considered a generic pointer that pointes to a value
 that has no type and an undertermined length and undetermined dereferencing properties.

This gives void pointers very good flexibility.

Data cant be dereferenced without being cast to a specific type.

Some functions that are called use a void pointer type.

One of the most important functions is one called malloc.

Its one of the most widely used functions to store data on the heap.


void* means a generic pointer


## Invalid and null pointers:

  There are also null and invalid pointers.

  They are supposed to point to a vaild memory address.

  Typical null pointers are inunitialized pointers and pointers to nonexistent elements of an array.

  Can cause a program to either take garbage data, or create a segmentation fault.

  The data is considered undefined.

Pointers that point to arrays should point to a valid memory address or index of the array.


int * p /// uninitialized array
int myarray[10]
int * q = myarray + 20 // element out of bounds.

Neither p nor q point to addresses known to contain available
 but none of the above statements causes as synrtax error



## Null pointers:

a pointer that pointesst o either an integer value of zer or with the NULL value
(requires stdio.h).


Don't try to dereference a null pointer, will cause program to crash.

Null pointers explicitly point to nowherer, and both compare to equal..

All null pointers compare equal to other null pointers.


Don't confuse null pointers to void pointers. Null pointers point to nowhere,
void pointers can point to a specific place without a specific type.


## Pointers to functions

int (* minus)(int,int) = subtraction;

Right-Left rule

Look right, then left to see what an object is.

double * zoey[7]

zoey is an array of length seven, of pointers to doubles.


## Pointers and string literals:

As pointed out earlier, string literals are arrays containing null-terminated character sequences.

They can also be accessed directly. string literals are arrays of the propr arrray type to contain all of its characterrs plus the terminating null-character, with each
of the elements being of type `const char`.

const char* foo = "hello";

This declares an array with the literal representation of "hello";
```
/-------------------------------------\
| 'h' | 'e' |  'l' | 'l' | 'o' | '\0' |
|1702 | 1703| 1704 | 1705| 1706| 1707 |
\-------------------------------------/
  * foo = 1702
```

Foo points to the beginning of a sequence of characters

*(foo + 4) === foo[4]

these equate to 'o'.

Note: Get used to both of these formats.


## Pointers to Structures

(*pmovie).title
pmovie->title

Possible combinations of operators:
```
/-----------------------------------------------------------------\
| a.b   | Member b of object a                                    |
| a->b  |member b of object pointed to by a                       |
| *a.b  |value pointed to by member b of object a.                |
| *a->b | value pointed to by member b of object pointed to by a. |
\-----------------------------------------------------------------/
```

## Nesting Structures

Structures can be nested inside of other structures.

```c
typedef struct {
	char title[50]
	int year;
} movie

struct friend {
  char name[50];
  char email[50];
  movie favorite_movie;
} charlie maria;

struct friend * pfriend = &charlie;
```
The following expressions would be valid.
```c
charlie.name
maria.favorite_movie.title
charie.favorite_movie.year
prfriend->favorite_movie.year
```

Size of Friend is 156 bytes, as move is 56 and the arrays are 50 each.

# Examples

 - ### [Operation](%WEBPATH%/classes/cs1730/pointers/operation)

### [Back to CS1730](%WEBPATH%/classes/cs1730/)