# Unions
Unions allow one portion of memory to be accessed as different data types.

Not popular, but useful in certain contents.

Kind of obscure.

Not in Java, but in C/C++.

Declaration is similar to one of structures, but functionality is totally different.


```c
union type_name {
  member_type1 member_name1;
  member_type2 member_name2;
  member_type3 member_name3;
} mytypes
```


## Example

```c
union mytypes_t {
  char c;
  int i;
  float f;
} mytypes;
```

Declares an object (`mytypes`) of type (`mytypes_t`) with three members.

mytypes.i
mytypes.c
mytypes.f

Each of these are going to take 4 bytes of memory, which are shared by c, i , and f.
Each member is a different data type, but as all of them refer to the same location in memory, modifying one member, modifies all of them.

If you wanted all values to be separate, then use a struct.

# Other uses
 One of the uses of a union is to be able to access a value either in its entirety or as an array or structure of smaller elements.

```c
union mix_t {
  int l;
  struct {
    short right;
    short left;
  } s;
  char c[4];
} mix;
```

If we assume that the system where this runs, has an int type of size 4 bytes, short of 2 bytes,
the union will allow for access to the same group of 4 bytes.
mix.l, mix.s and ix.c, which we can use according to how we want to access these bytes:
as if they were a single value of type int or as if they were two values of type short.
or as an array oc char elements respectively. The example mixes types, arrays, and structures in the union to demonstrate different ways to access the data.

If there was a double or long, it would take up 8 bytes.


# Anonymous union.

If there is a union in a struct, it doesnt't need a name, as the members can be accessed by the member name.

```c
struct {
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    };
} book;
```
You can access it with book.dollars, or book.yen.

```c
struct {
    char title[50];
    char author[50];
    union {
        float dollars;
        int yen;
    } price;
} book;
```
That is a regular union within a struct,
Can be accessed with book.price.dollars. or book.price.yen.

Remember that dollars and yen share memory.

## Examples
 - [IPV4 C source](%WEBPATH%/classes/cs1730/unions/ipv4)
 - [Lorem Ipsum](%WEBPATH%/classes/cs1730/unions/Makefile)


### [Back to CS1730](%WEBPATH%/classes/cs1730/)