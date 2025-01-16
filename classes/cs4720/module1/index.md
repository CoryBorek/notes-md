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
### L1
 - is closest to cores
    - has data and instructions

### L2
 - is a unified cache

### L3 
 - is shared by all cores.

## Cache coherence protocol
determines how processor cores can share memory and communicate with each other.

# Microprocessor, Microcomputer, Micro controller

## Microprocessor
CPU unit packaged in a single chip, e.g. Interl Core processors

## Microcomputer
a computer that uses a Microprocessor as a CPU, e.g. a personal computer

## Microcontroller
Created by packaging CPU, Memory, and I/O parts and buses in a single chip, e.g., Intel 8051, ARM Cortex-M.

Also called a SoC or System on Chip.

# Hardware
Hardware refers to the physical equipment used for the input, processing, output, and storage activities of a computer system.

It consists of the following:
- CPU
- Primary Storage
- Secondary Storage
- Input Technologies
- Communication technologies

## Some Primary Storage

### Registers
part of the CPU with the least capacity
storing extremely limited amounts

### RAM
Random Access Memory, lowest level of primary storage. usually on a separate chip. Most common form is in DRAM, (DDR3,4,5, etc.)

### Cache Memory
part of the CPU packaging. Can have multiple tiers. Slower than registers, but faster than RAM.


## Secondary Storage
Memory capacity that can store very large amounts of data for extened periods of time.

It is non-volatile

It takes much more time to retrieve data

It is cheaper than primary storage

It can take place on a variety of media

Examples: disk, tape

# Computers are used in different classes of applications

## Desktop computers
 designed for use by an individual

## Servers
 used for running larger programs for multiple users, and typically accessed via a network

## Supercomputer
 high-end scientific and engineering calculations
  - Highest capability but represent a small fraction of the overall computer market

## Embedded computers
 hidden as components of systems. A computer inside another device used for running one predetermined application.

# Eight great ideas in computer architecture

1. Design for Moore's law
2. Use abstraction to simplify design
3. Make the common case fast
4. Performance via Parallelism
5. Performance via pipelining
6. Performance via prediction
7. Hierarchy of memories
8. Dependability via redundancy

# Layers of Software
## System Software
Software that provides services that are commonly useful
  - Operating Systems
  - Compilers

  Operating System interfaces between a user's program and the hardware and provides supervisory functions such as:
  - Handling basic I/O
  - Allocating storage and memory

## Hardware and Software Layers

- Hardware
- System Software
  - I/E Unix, Windows, OS/2.
- Application Software
  - most programs are here

## list of layers
- Algorithm + Data Structures
- Language
- OS
- Compiler
- ISA
- Architecture (ALU, MUX, etc.)
- Boolean Logic Design

# Instruction Set Architecture (ISA)
A very important abstraction

Interface between hardware and software

Advantage: different implementations of the same architecture

Disadvantage: sometimes prevents using new innovations

Modern instruction set architectyres:
 - x86
 - ARM
 - RISC-V
 - PowerPC
 - MIPS
 - SPARK
 - others

# Instruction Set
kind of like the CPU's API.

We will be using the MIPS instruction set for this course.

If you compile binary code for one instruction set, it will function on any machine that recognizes that instruction set (i.e. x86 compiled binaries will run on x86 machines)

Instruction set can also prevent innovation in a computer architecture

Instead of changing instructions, you have to add on to the set instead of changing the instruction set.

# Hardware and Software revolution

- Hardware
  - Personal Mobile Devices instead of PC
  - Cloud Computing
- Software
  - Software as a Service (SaaS)

# Post Mobile Devices
Small wireless devices that connect to the internet

They rely on batteries for power

Software is apps

Examples are smartphones and tablets

# Cloud Computing
 - Instead of traditional servers

 Relies on giant data enters that are now known as *Warehouse scale computers (WSCs)*

 Amazon and Google build these WSCs

 Let companies rent portions of them so that they can provide software services to users without having to build WSCs of their own.

 (hosting in a datacenter is cheaper than them though lol)

 # Delivery modes of cloud computing

 Software as a Service

 Platform as a Service

 Infrastructure as a Service

## Function as a Service

Developers only need to provide the function of the microservice to the cloud.

When the user uses it, they only call the function.

Cloudflare has a service for this.

## SaaS
 - Deployed via the Cloud

 - Delivers software and data as a service over the Internet, usually via a thin program such as a browser

 Examples: web search and social networking

## PaaS
Programming languages an OS are provided by vendor, System developers use PaaS

## IaaS
Resources including data storage and servers are provided by vendor

System admins are using IaaS.


# Number Manufactured by Year (2012)

 - Smart phones are the fastest
 - Cell phones were the largest in 2012
 - PC is a slower growth
 - Tables are growing too.


# What is Performance?

 - Capacity , range, and speed for a number of commercial airplanes

| Airplane | Passenger Capacity | Cruising Range | Cruising Speed | Passenger throughout |
 | --- | --- | --- | --- | -- |
 | Boeing 777 | 375 | 4630 | 610 | 228,750 |
 | Boeing 747 | 470 | 4150 | 610 | 286,700 |
 | Concorde | 132 | 4000 | 1350 | 178,200 |
 | Douglas DC-8-50 | 146 | 8720 | 544 | 79,424 |

 Which one is the fastest?

 Different ideas based on definition of fastest.

 Concorde has highest speed 

 # Throughput and response time

- They are the computer measure of performance

- **Response time** or **execution time** total time required for the computer to complete a task (in seconds)

- **Throughput** or **bandwith**: the total amount of work done during a given time period

- **Decreasing response time almost always improves throughput**

- **We focus on response time.**

When we are talking about a computer being faster than another, we are talking about response time or execution time. (Latency)

# Example
Do the following changes to a computer system increase throughput, decrease response time, or both?

1. Replace the processor in a computer with a faster version.
2. Adding additional processors to a system that uses multiple processors for separate tasks, for example - searching the web.

# Performance

$Performance_x = \frac{1}{executiontime_x}$

$Performance_x > Performance_y$

$\frac{1}{execution time_x} > \frac{1}{execution time_y}$

$execution time_y > execution time_x$

Suppose we have two computers, how to we find out which one is faster?

 - Run the same code on two different computers, whichever one takes longer is slower.

# Relative Performance

Computer $A$ runs a program in $10$ seconds, and computer $B$ runs the same program in $15$ seconds, How much faster is $A$ than $B$?

$\frac{Performance_A}{Performance_B} = \frac{Execution time_B}{Execution time_A} = n$

Performance Ratio is $\frac{15}{10} = 1.5$

A is therefore $1.5$ times as fast as $B$

Computer B is $1.5$ times slower than computer $A$.

# CPU time

Is divided in two:
1. User CPU time
2. System CPU time

We use user CPU time as CPU performance metric.

This happens because we need to run this program on the operating system. 

The execution of the UNIX `open` syscall is part of the system time.

The User time only accounts for how long the program itself runs.

We can't control the OS (per se)

# CPU clocking

Operation of digital hardware is governed by a constant-rate clock.

Clock period: duration of a clocksycle

e.g., $250 ps = 0.25 ns = 250 * 10^{-12} s$

Clock frequency (rate): cycles per second

e.g. $4.0 GHz = 4000 Mhz = 4.0*10^9 Hz$

# CPU time

$time_{cpu} = cycles * cycleTime = \frac{clockCycles}{clockRate}$

Clock rate is clock frequency

Cycle time = $\frac{1}{clockRate}$

unit of CPU time is in seconds.

## Improve Performance
- Reduce number of clock cycles
- Increase clock rate
- Hardware designers must often trade off clock rate against cycle count

## Example
Computer A: 2Ghz clock, 10s CPU time

Designing Computer B

Aim for 6s CPU time

Can do faster clock, but causes 1.2* clock cycles

- How fast must computer B clock be?

$rate_b = \frac{cycles_b}{time_b} = \frac{1.2 * cycles_a}{6s}$

$cycles_a = time_a * rate_a = 10s * 2GHz = 20 * 10^9$

$rate_b = \frac{1.2*20*10^9}{6s} = \frac{24 * 10^9}{6s} = 4GHz$

## Performance Equation II

Number of clock cycles required for a program can be written as

clock cycles = instructions * avg cycles per instruction (CPI)

$cycles = instructions * avg(cpi)$


## Classic CPU perfomance equation

Execution Time = clock cycle time * instruction count * CPI


CPU time = $\frac{instruction count * CPI}{clockrate}$

These equations separate the three key factors that affect performance.

Instruction count for a program
 - Determined by program, ISA, and compiler

 Average cycles per instruction
 - Determined by CPU hardware
 - If different instructions have different CPI
   - Average CPI affected by instruction mix.

## CPI Example
Computer A: cycle time = 250ps, CPI = 2.0

Computer B: Cycle Time = 500 ps, CPI = 1.2

Same ISA

Which is Faster, and by how much?

$cputime_a = IC * CPI_A * CTime_A$

$=I*2.0*250ps = I * 500ps$

$cputime_b = IC * CPI_B * CTime_B$

$=I*1.2*500=I*600ps$

$\frac{cputime_b}{cputime_a}=\frac{I*600ps}{I*500ps}=1.2$

$A$ is $1.2$ times faster than $B$, because it takes less time to complete instructions.

## CPI in more detail
If different instruction classes dake different numbers of cycles

$cycles = \sum_{i=1}^{n}(CPI_i * IC_i)$

## Comparing Code Segments

Selecting two code sequences

### CPI for each instruction class
| | A | B | C |
| - | - | - | - |
| CPI | 1 | 2 | 3 |

### Instruction counts
| Code Sequence | A | B | C |
| - | - | - | - |
1 | 2 | 1 | 2
2 | 4 | 1 | 1 |

### Sequence 1
Instruction count = 5

Clock Cycles = 
$2*1 + 1 * 2 + 2 * 3 = 10$

$Avg = 10/5 = 2$

### Sequence 2
IC = 6

$Clock Cycles = 4 * 1 + 1 * 2 + 1 * 3 = 9$

$Avg = 9/6 = 1.5$

### Comparing

$T_1 = 20, T_2 = 13.5$

Smaller is better, T_2 wins.

$\frac{\frac{1}{20}}{\frac{1}{13.5}} = \frac{13.5}{20}$

$T_2$ is 1.48 times faster.

## Side-note
An important compiler optimization is stress reduction. Replace complex instructions with instructions that take less time to finish.

# Performance Summary
**The BIG PICTURE**

$CPU TIME = \frac{instructinos}{program} * \frac{clockcycles}{instruction} * \frac{seconds}{clockcycle}$

Performance Depends on
 - Algorithm: affects IC, possibly CPI
 - Programming Language: affects IC, CPI
 - Compiler: affects IC, CPI
 - Instruction set architecture: affects IC, CPI, $T_C$

# Energy Consumption
The primary source of energy consumption in integrated circuit (IC) is so-called dynamic energy - that is, energy that is consumed when transistors switch states from 0 to 1 and vice versa

The dynamic energy depends on the capacitive loading for each transistor and the voltage applied:

$Energy \varpropto capacitive laod * voltage^2$

This equation is the energy of a pulse during the logic transition of 0 -> 1 -> 0 or 1 -> 0 -> 1. The energy of a single transition is then

$Energy \varpropto 1/2 * capacitive laod * voltage^2$

The power required per transistor is just the product of energy of a transition and the frequency of transitions:

$Power \varpropto 1/2 * capacitive load * voltage^2 * frequency switched$

varpropto is an estimation, not exact. (accurator formula)

## Power Trends

## Reducing Power
Suppose a new CPU has

85% of capacitive load of old CPU

15% of voltage and 15% frequency reduction

$\frac{P_{new}}{P_{old}} = \frac{C_{old} * 0.85 * (V_{old} * 0.85)^2 * F_{old} * 0.85}{C_{old}*{V_{old}^2 * F_{old}}} = 0.85^4 = 0.52$

The power wall
 - We can't reduce voltage further
 - We can't remove more heat

 How else can we improve performance?

## Multicore Processors

Multicore Microprocessors

More than one processor per chip

Requires explicitly parallel programming

 - Compare with instruction level parallelism

   - Hardware executes multiple instructions at once

   - Hidden from the programmer

Hard to do
 - Programming for performance
 - Load balancing
 - Optimizing communications and synchronization


## Multicore example
Increasing an integer counter by 1000 times.

```c
// this is a simple single-threaded loop. Just have the main thread execute it.
for (int i = 0; i < 1000; i++) {
  counter++;
}
```

If we have two cores, we can distribute this loop into two cores, or threads, happening at the same time.

Theoretically, we would split the time in half by dividing it, but practically, it is more complicated

if we run both, we would have a race condition, which causes problems.

Instead, we will have to use a mutex to lock and unlock the variable, so it only modifies it once. This adds extra delay, but is accuate.

The best-case scenario is when there is no shared data, though in most real-world applications, we will need to share some data, which will have some costs, so we most likely will not get the maximum performance improvememnt.

If you don't use a mutex, you will get a nondeterministic result, which will be very difficult to debug.

These are some of the issues with parallelism.

When writing with a high-level language like Java, there are still some manual syncronization things that have to be done.

Employing a multicore processor is not a simple task, and writing an efficient, scalable multiprocessor program is not an easy task. This is still an area that is heavily researched.

Parallel computing is an interesting course. Lots of interesting topics (according to Professor Wang.).

# SPEC CPU Benchmark

Programs used to measure performance
 - Supposedly typical of actual workload

 Standard Performance Evalulation corp (SPEC)
  - Develops benchmarks for CPU, I/O, web...

SPEC CPU 2006
 - CINT2006 (integer) and CFP(floating-point)
 - Elapsed time to execute a selection of programs
   - Negligible I/O, so focuses on CPU performance
 - Normalize relative to reference machine
 - Summarize as geometric mean of performance ratios

# Homework for Module 1

Available 1/15/25 on [eLC](https://elc.uga.edu/)

Due Wed. Jan 22, 2025, 11:59 PM

### [Back to CS4720](%WEBPATH%/classes/cs4720/)
