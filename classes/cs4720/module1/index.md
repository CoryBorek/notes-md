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

 - Addition operation is an instruction
 - Actual numbers are data.
 ```asm
  add r1 r2 r3
 ```

# I/O
## Input devices
Mouse, Keyboard, Microphone

## Output Devices
Display, Headphones, Printer

# Buses
Think of them as roads that connect different parts of a computer

Three types

## Address Bus
Carry CPU-generated aaddress out to memory and I/O devices

## Data Bus
DAta signals in and out of CPU

number of wires in the data bus depends on the word size that the CPU operates with

Typically 32 or 64 bits these days

## Control Bus

Consists of wires which carry data in and out of the CPU

number varies depending on the CPU

An example is read and write signals

# Cache
Faster but smaller memory on CPU

if the data is in cache (Cache hit), the access is very fast

if the data is not in cache (Cache miss), main memory will be accessed (very time consuming)

We can have a multi level cache

Main memory is much larger than cache.

## Typical cache structure
L1 is closest to cores
has data and instructions

l2 is a unified cache

l3 is shared by all cores.

### Cache coherence protocol
determines how processor cores can share memory and communicate with each other.

# Microprocessor, Microcomputer, Micro controller

## Microprocessor
CPU unit packaged in a single chip, e.g. Interl Core processors

## Microcomputer
a computer taht uses a Microprocessor as a CPU, e.g. a personal computer

## Microcontroller
Created b y packaging CPU, Memory, and I/O parts and buses in a single chip, e.g., Intel 8051, ARM Cortex-M.

Also called a SoC or System on Chip.

# Hardware
Hardware refers to the physical equipment used for the input, processing, output, and storage activities of a computer system.

It consists of the following:
- CPU
- Primary Storage
- Secondary Storage
- Input Technologies
- Communication technologies

### [Back to CS4720](%WEBPATH%/classes/cs4720/)
