# Threads and Concurrency

## Concurrency

We have already seen several types of concurrency which typically means two or more things executing at the same time.

Two or more processes running at the same time, for example the OS, bash, emacs, user programs, etc. may run concurrently.

A Single process may call a fork, which may run concurently, which may fail

Another type of concurrency can have more than one thread of execution running concurrently, which uses pthread (POSIX thread) calls.

Threads are sometimes called lightweight units that execute within a process.

By default all processes on Linux/Unix machines have one thread of execution (typically in main in a C/C++ process) and continues until the process ends.

However, a process may spawn aditional threads of execution using pthreads.


## Threads

Threads belong to one process.

## Getting a thread's id

```c
#include <pthread.h>
pthread_t pthread_create
```

## Equal functoin
```c
#include <pthread.h>
int pthread_equal(pthread_t tid1, pthread_t tid2);
```
Returns a non-zero integer if they are equal, zero otherwise.

## Create a thread
```c
#include <pthread.h>

int phtread_create(pthread_t* thread, const pthread_attr_t *attr, void * (* start_routine) (void *), void * arg);
```
- Thread is the memory location of the newly created thread id.
- attr is used to create threads with various attributes, we will use NULL for default
- start_routine is a function pointer to where the newly created thread will start running
- arg is a single argument pointer passed to start routine.
  - if you need to pass multiple arguments, then arg should be the
    address of a struct containing multiple things.

### [Back to CS1730](%WEBPATH%/classes/cs1730/)