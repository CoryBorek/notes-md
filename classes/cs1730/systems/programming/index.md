# Unix Systems Programming

Programs make system calls (primitive) or library subroutine (special purpose) calls to invoke kernel.

## Types of System Calls:

- File I/O

- Process Management

- Inter-Process communication (IPC) - pipe, signals, sockets...

- Signal handling

## System calls

### lseek
retval = lseek(fd, off_t offset, whence)

move file pointer to new location

fd: file descriptor

offset: number of byte

whence: SEEK_SET - offset from beginning of file
SEEK_CUR - offset from current offset location

- SEEK END - offset from end of file

returns offset from beginning of file or -1


### UNIX fie io system file

open
close
read
write
creat - create an empty file
lseek - move to specific byte in file
unlink - remove a file
fnctl - fcntl - control attributes assoc. w/ file

### [Back to Systems](%WEBPATH%/classes/cs1730/systems/)