# Introduction

Wenwen Wang - ASsistant Professor at School of Computing

Boyd 806

Researching in Cross-architecture system emulation/virtualization

Program analysis for security vulnerability detection

Software performance regression testing

Reliability and debugging of parallel programs.

Will talk about research after


## Overview: the internals of computers
 - How does a Processor work?
 - How is a computer organized?
 - How to build a CPU?

##  Goals
 - To understand the internal mechanism of a procesor
 - To get familiar with the design of a computer
 - To be prepared to work on computer architecture-related project in the future.

# Sample Course Topics
We will focus on the key concepts of modern computer architecture

 - Computer performance evaluation
 - Instruction Set architectures
 - Logic Design basics
 - Computer Arithmetic
 - CPU data path and control path
 - CPU pipelining

 Will learn assembly. Will write loops, algorithms, etc

 will use MIPS architecture, which is a RISC architecture (Reduced instruction set computer) versus a CIS architecture (complex instruction set).

 We will also talk about the logic that connects is, boolean logic, sequention logic. Computer arithemetic. Print an integer using binary.

 # Basic Knowledge requirements

  - CSCI 2670 - Theory of Computing
  - Fundamentals of Logic Design

  - Some experience in low level programming languages: C/C++: coding, testing, debugging.
  - we will use MIPS assembly for our projects.

# C Example
```c
#include <stdio.h>

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
```

# What does a compjuter program do when it runs?

 - It executes instructions1
  - It fetches an instruction from memory, decodes it, and executes it!

## Example
- Add two integers
- Access a memory location
- Call a subroutine
- Return from a subroutine
- Access devices

### [Back to CS4720](https://coryborek.github.io/classes/cs14720/)