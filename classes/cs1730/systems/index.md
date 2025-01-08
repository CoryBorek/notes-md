# Unix System Overview

There are multiple parts to a Unix-like system. Particularly the Kernel, the Shell, and your general Application.

There are two spaces in which processes happen, Kernel Space and User Space.

The Kernel runs in Kernel Space, whereas the Shell and Tools/Applications run in User Space.


## Kernel
  The Kernel is the core of an operating system, which allows it to handle basic low-level tasks.

  Some of these include:
 - Process scheduling
 - IO control

## Shell
The Shell is a command line scripting language and program that can interpret commands or scripts that allows a user to control a computer.

Some example Shell Programs:
 - sh
 - zsh
 - bash

## Tools and Applications
Tools and Applications are the library and programs that we typically use every day. They can have unlimited purposes, and use cases.

Often, they can be started and run from the shell.

Some examples of Applications and tools are:

 - X11 (Windowing System, desktop view)
 - Emacs
 - Vim
 - `ls`
 - cat

among many more.

## Other Operating System Information

 - [System Calls](%WEBPATH%/classes/cs1730/systems/calls/)
 - [Systems Programming](%WEBPATH%/classes/cs1730/systems/programming/)

 ### [Back to CS1730](%WEBPATH%/classes/cs1730/)