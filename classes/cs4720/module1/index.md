# Introduction to Computer Architecture and Performance Evaluation

# What is a computer architecture?
It is the science and art of selecting and interconnecting hardware components.

Designing the *hardware/software* interface to create a computing system that meets
 - functional
 - performance
 - energy consumption
 - cost, and other specific goals.

 # Introduction

 This course is all about how computers work.

 But what do we mean by a *computer*?
  - Different types: desktops, servers, embedded devices
  - Different uses: automobiles, graphics, finance
  - Different manufacturers: Intel, Apple, IBM, Microsoft
  - Different underlying technologies and different costs!

# What is a Computer
Components:
 - Input (mouse, keyboard)
 - Output (display, printer)
 - Processor
 - Memory (disk drives, DRAM, SRAM, CD)
 - Network

Our primary focus: the processor (data path and control)

Processor has a Control and Data path.

# How do Computers Work?
Need to understand abstractions such as
 - Application Software
 - Systems Software
 - Assembly Language
 - Machine Language
 - Architectural Issues: Cache, Virtual Memory, Pipelining
 - Sequential Logic, and finite state machines
 - Combinational logic and arithmetic circuts
 - Boolean Logic, 1s and 0s

 # What is a Computer

 A Data storage and Data processing device

 # Major Components of a Computer
 I/O

 MEMORY

 CPU

 connected by a System Bus

 # What is a CPU?

 ## Central Processing Unit has thre major parts

 ### Control Unit and Instruction Decoder
    Decides what computation to do

 ### Arithmetic/Logic Unit
 Does the math, and logic
 
 ### Registers
 Temporary storage


 # Two types of Registers

 Control and Status Registers
  - Program Counter
  - Flags

User-Visible Registers

 - Examples: Generl Purpose Registers


# Speed of CPU
Based on
 - Clock
 - Format of instruction
 - Parallel nature of instruction execution
 - Access time to its memory & I/O

# Memory
Two differentt types of information stored in memory
- Instruction
- Data

In order of Speed
 1. Registers (at most kb)
 2. Cache (typically MB)
 3. Memory (typically GB)
 4. Disk (typically TB)


Persistent Memory is a new type of memory, close to DRAM, but will persist.


## Example
Adding Two numbers

 - Addition operation is an instructnio
 - Actual numbers are data.


### [Back to CS4720](%WEBPATH%/classes/cs4720/)
