# Introduction

Wenwen Wang - Assistant Professor at School of Computing

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

 - It executes instructions!
 - It fetches an instruction from memory, decodes it, and executes it!

## Example
- Add two integers
- Access a memory location
- Call a subroutine
- Return from a subroutine
- Access devices

# Schedule
## Module 1:
Intro to architecture, performance evaluation (Chapter 1)
 
## Module 2:
Combination logic design (Appendix B)

## Module 3:
Intro to Mips assembly, MIPS programming (Chapter 2)

## Module 4:
Sequential logic design (Appendix B)

## Module 5:
Computer Arithemetic (Chapter 3)

## Module 6:
CPU data path and control path (Chapter 4)

CPU Pipelining (Chapter 4)

# Lecture information
Three classes every week

Wednesday: 4:10 - 5:00 PM (Quizzes/homeworks) Plant Sci 1501

Tuesday Thursday: 3:55 - 5:10 Geog Geol 200A

Schedule: on ELC

Office Hours: By appointment

# Grading Policy - Overview
Midterm - 25%

Final - 25%

Quizzes: 20%

Homework: 15%

Programming Projects: 15%

Attendence is not manditory, but **encouraged**.

## Midterm & Final - 50%
Closed book, in person/online

Exams are coprehensive. You are expected to know all materials covered in the lectures, assignments, and programming projects.

## Quizzes - 20%
6 Quizzes (tentative)

Each one is over a module (1-6)

Should do after homework.

Will be online. Have 4-5 days to complete.

## Homework - 15%

6 homework assignments (Modules 1-6)

No time enforcement. Have a number of days to complete.

## Programming Projects

- 3 Programming Projects (Tentative)

Will be written in MIPS assembly to complete some computation tasks

Late submissions will not be accepted.

EX: find maximum value in an array of integers.

Will have a deadline. Test before submission. Submit on ELC.

Will have about a month to work on a project.

# Course Information
We will use eLC [https://elc.uga.edu/](https://elc.uga.edu/) to post course materials and information

-  Announcements
- Lecture slides
- Online Discussions
- Assignemnt Submissiosn
- Quizzes and Exams
- Scores

# Final grade calculation

$M * 0.25 + F * 0.25 + \frac{Q1 + Q2 + Q3 + Q4 + Q5 + Q6}{6} * 0.2 + \frac{H1 + H2 + H3 + H4 + H5 + H6}{6} * 0.15 + \frac{P1 + P2 + P3}{3} * 0.15$

# Academic Honesty
Don't copy/paste work from uncited sources

UGA academic honesty policy:

https://honesty.uga.edu/Academic-Honesty-Policy/

## This is a Very tough course

- Study very hard to get passed.
- Study very very hard to get a so-so grade.
- Study very very very hard to get an A.

- You still have tine to quit.

# Funded research opportunities

For undergrad

Research - Computer architectures. ISAs.

Send professor an email if you are interested. (attach a copy of your resume.)

### [Back to CS4720](https://coryborek.github.io/classes/cs14720/)
