# Method Calls, and Stack

After a method call finishes, all values are removed from stack.


Methods pass all parameters by value.

Primitives just pass values, gets more complicated with pointers.

Means that when values are passed, it's a copy, not the original.

Can simulate pass-by-reference by passing other variables like pointers.


## Prototypes

Functions should always have a prototype. (except for main.)

Happens to appease the compiler, so earlier methods can use it.

For good styling purposes, have prototypes in all C/C++ functions, and comment all prototypes.

Example Prototype:

```c
/**
 * Example method
 * a - An integer argument that does something.
 */
int example(int a);
```

### [Back to CS1730](%WEBPATH%/classes/cs1730/)