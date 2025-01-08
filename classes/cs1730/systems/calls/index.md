# System Calls

Main job is to manage resources of a computer, and coordinate the programs running,
 and how they interact with the hardware.



## Operating System

A collection of programs, with the kernel at the heart of it.

The Kernel provides a set of functions to other programs called System calls.


### Kernel
Acts as the manager or moderator over the resources of the computer.

Each application will use a System call to connect to the kernel,
which will allow access to various tools within the OS and hardware.

Linux is based on Unix, so they have some similar tools.


## Uses
 - Request acess to resources of the machine.
 -  Communicate with other running programs.
 - Start new programs.

## API
A Collection of system calls.

## POSIX Standards
Most versons of Linux/UNIX use some same basic system calls, though not adopted by most other systems.

Example of someone who ignores it: Windows.

## Families of System Calls
Textbook lists dozens if not hundreds of system calls. We can't go over all, but can divide into families.

 - Memory Managemnt - Ask OS to manipulate memory.
 - Time management - Ask system clock or use timers.
 - File management - open, read, write, close, creat, and a few others
 - Process management - ask OS to start a program or control how it runs.
 - Signals - Used to send a message to a process - Ex: stop with CTRL+C
 - Sockets - Allow a program on one computer to communicate with a program on another computer through a network.

## Libraries vs System Calls
Many standard libary functions are built on System calls.

 - malloc, uses memrory management system calls
 - sleep - uses time managment system calls
 - fopen, fread, fwrite, etc. build on top of open, read, close, write.

Provide a simple interface that is portable to other machines, built on top of System calls.

Libraries add additional capabilities
 - Fread fwrite do bufferng, speed up execution, System calls read, write do not buffer.

Library functoins tend to be more portable
 - System calls provde direct access to the kernel which can be slightly different - depending on OS.

## Man pages
 - Section 1 are applications (shell commands and executables)
'- Section 2 are system calls
 - Section 3 are library calls

### Example commands
```bash
$ man ls
$ man 2 read
$ man fread
```

## Process System calls
Deal with starting up of new programs

n order to start a new program, a currently running program is going to make a clone of itself, then
it replaces its code with the new code.

### Family of calls:
```
fork()
exec calls
wait()
```
Bash uses forks to run.

All programs that are executing in the UNIX environment are clone-descendants
 of the first program started after the system boots (sometimes called init or systemd).

Odin/VCF nodes use systemd.

## Code vs executable vs process

### C source code
 - C statemnts organized into functions
Stored as a collecton of files (.c and .h)

### executable
 - Binary image genrated by compiler and lnker
 - Stored as a file (e.g., a.out)

### Process
 - Instance of a program that is executing
    - with its own address space in memory
    - with its own id and execution state
 - Manages by the operating system.

## Virtual Adress Spaces

Run `./a.out`

OS will take process code, place its memory in RAM, create a portion of memory for global data, heap, and stack,
then execute.

If we create another instance of .out, it will create its own separate memory allocation.

Will always be in a different location in RAM.

## Process ID
 Each running instace has a unique id (PID) a unique integer value.

To list process started in the current terminal use the `ps` command

 - -e does the full lusting (all processes in the system)
 - -f gives additional informaton

PPID is the process id of the parent.

### Homework
Run a process and answer the following questions
What is its PPID, its PID
what is the PPID of its parent
`ps -ef | grep <parent's PPID>`

Practice running other processes to get a feel for PID, PPID, and how to find these.


## Generating a new process
`fork()`
 
Creates a new process by duplcating the calling process. it creates a clone.
The orginal program and the new program run from the next lne of code after the fork() call is successful.

Original program is called parent process.

After fork is successful, two programs are running. Copies all of its data into the child process.
 Begins its execution after the line of code with the fork.

Creates an example of concurrent programs.

## Course conduct policies reminder
When you are practicing fork, do it on the VCF nodes, and only practice it a couple of times at once.

If you abuse resources on your odin account and we ban or suspend your odn account, the nyou may receive a grade of zero for any assignments you cannot submit for being suspended for abusing resources on odin.

Using anything maliciously is not allowed.

Don't forkbomb odin or the vcf nodes.

do not put a fork function call in any kind of repetition statement.
 we will consider a fork call insde a repetition statement.

A fork bomb is where forks spawn so many processes that the OS can't keep up, and hogs all resources.

You must be careful with fork.

IF you fork bomb odin or the VCF nodes, then your grade may be penalized. 


DO NOT fork bomb any OS.

## Examples
 - [Fork4 C](%WEBPATH%/classes/cs1730/systems/calls/fork4)
 - [Fork4 Makefile](%WEBPATH%/classes/cs1730/systems/calls/Makefile)

### [Back to Systems](%WEBPATH%/classes/cs1730/systems/)