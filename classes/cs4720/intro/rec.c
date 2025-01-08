#include <stdio.h>
#include <stdlib.h> // not in professor's notes, but needed to function

// pointer 
struct rec {
    int i; // integer
    float PI; // floating point integer
    char A; // character
};

/**
 * Main Program
 */
int main() {
    // create a struct, and store it on the heap.
    struct rec * ptr_one;
    ptr_one = (struct rec*) malloc (sizeof(struct rec));

    // set the values
    ptr_one->i = 10;
    ptr_one->PI = 3.14;
    ptr_one->A = 'a';

    // print the values as a integer, float, and char.
    printf("First value: %d\n", ptr_one->i);
    printf("Second value: %f\n", ptr_one->PI);
    printf("Third value: %c\n", ptr_one->A);

    // free the memory from the heap
    free(ptr_one);

    // return as a success.
    return 0;
}
