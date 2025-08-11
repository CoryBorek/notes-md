# Introduction

## What happens when a program runs?
It executes instructions.

Lots of them.

Every second, millions of them can happen.

There is a cycle of fetching, parsing, executing, and writing back to memory every cycle.

This happens over and over again until the program completes.

This describes the basis of a Von Neumann Model of computing.

### Is that so?
Not exactly, while a program runs, a lot of other wild things are going on with the processor in order to make things **easy to use**.

This body of software makes programs easy to run, and allows you to run many at the smae time. This is called the **Operating System**

## The Operating System
 - Makes sure a system is correct and efficient.
 - Uses Virtualization
 - Takes a physical resource, and transforms it
   - More general
   - More Powerful
   - Easier to use.
 - Sometimes we call the operating system a virtual machine.

In order to do things, an OS provides an interface.
This uses a special type of API called a System Call.

Because of these system calls, we sometimes call them a standard library. to applications

Allows many programs to run, so also called a resource manager.

## cpu.c
```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <assert.h>
#include "common.h"

int
main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }
    char *str = argv[1];
    while (1) {
        Spin(1);
        printf("%s\n", str);
    }
}
```
### What does this program do?
Not much at all, just calls `Spin()` which checks the time and returns after one second, on and on and on.

Let's run it.

```bash
gcc -o cpu cpu.c -Wall
./cpu "A"
```

The output would look something like:

```bash
A
A
A
A
A
^C
```

Pressing Control+C will terminate the program.


### Many programs at once
```bash
$> ./cpu A & ./cpu B & ./cpu C & ./cpu D &
[1] 7353
[2] 7354
[3] 7355
[4] 7356
A
B
C
D
A
B
C
D
A
...
```

If we run this multiple times, we somehow can get the data to run at the same time, even with only one processor. How?

### A magical illusion
We can virtualize the CPU!

That will be the first focus.

## Memory
### mem.c
```c
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int
main(int argc, char * argv[])
{
    int *p = malloc(sizeof(int));
    assert(p != NULL);
    printf("(%d) address pointed to by p: %p\n",
        getpid(), p);
    *p = 0;
    while(1) {
        Spin(1);
        *p = *p + 1;
        printf("(%d) p: %d\n", getpid(). *p);
    }
    return 0;
}
```

Let's consider memory.

Physical memory is very simple, just an array of bytes, to read memory, you must specify and address to access, to write (or update) memory, one must also specify the data to be written at a given address.


Accessed all the time when a program is running.

It keeps all of its data structures in memory and access through instrucions like load or store.

Each instruction is also in memory!

When we run the proram, each program has the same memory address instead of the physical address.

This is called virtual memory. Each process has its own virtual address space.

## Concurrency
Some programs may have multiple things that need to be worked on at once, this means that we can create multi-threaded programs.

There are a few details on how it works that are a little more complex, so that will be covered later.

## Persistence
In system memory, values are volatile. 

When the machine powers off, all of it is lost.

We can store memory with I/O or input/output

Commonly, this is a hard drive or SSD.

Managing this data is using something called a file system.

That is responsible for storing any files you may create reliably.

This is not abstracted into a provate disk for each application, as this is often shared.

There's many ways and apporaches to this, so we'll talk about that in the third part of the book.

## Design Goals

Now you know what an OS does. One of the most basic goals is to create abstracitons in order to make a system convenient and easy to use.

You should provide high-performance and minimize overheads.

We also want to provide protections between applications, and between the OS and applications.

## Some History

### Early Operating Systems
Just simple low-level I/O libraries and APIs to ease development

Sometimes would allow you to put in a string of applications called a "batch" to process.

### Protection
We don't want machines to access everything constantly, we needed something a little more secure. This led to the creation of the system call.

Instead of making it an OS library, we make a systemc call that changes a hardware privilege level.

User applications run in user mode, which restricts what applications can do.

Can't typically request IO to a disk for example.

When a Syscall is made, it is called through hardware like a trap, which is sent to a trap handler and raises the priviledge level to kernel mode.

This lets all of that happen, and runs a special return from trap instruction, reverting back to user mode, exactly where the program left off.


### [Back to Projects](%WEBPATH%/projects/ostep/)
