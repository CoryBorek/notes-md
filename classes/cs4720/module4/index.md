# Module 4

## Midterm
Next Tuesday, similar to quizzes.

No class for next 4 sessions

# Gates

## NOR Gate

NOT OR

## SR Latch

2 inputs, and 2 outputs

S = Set
R = Reset

Q = Output
~Q = NOT Output

2 NOR gates, in which the output of one is an input to the other

| S | R | Q | !Q |
| - | - | - | - |
| 0 | 0 | latch | latch |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 0 |

Q = 0 and ~q = 0 is not defined

S = 0 and R = 0 is memory state

## SR Flip FLopp with Clock

S and R are with AND gates, as well as a clock going into each AND gate


## D Flip Flop

SR Latch with a few different inputs

D and CLK

AND Gate

Like SR Flip Flop with Clock, but one data input, and a NOT gate into one of the AND gates

Basic memory element table 


| CLK | D | Q | !Q |
| - | - | - | - |
|0|0|Q|!Q|
|0|1|Q|!Q|
|1|0|0|1|
|1|1|1|0|

# Finite State Machine

A Sequential syste, cannot be described within a truth table

Instead, a sequential system is described as a finite-state machine (or often just a state machine)

A finite-state machine has a set of states and two functions, called the next-state function and the output function


# Example

Control of a traffic light at an intessection of a north sourth rote, and an east west route


Two inputs:
 - NScar a car is over the detector placed in the front of the light on the north-sourth road
 - EWCar: a car is over the detector placed in the front of the east-west road

Two outputs:
 - NSLite: when this signal is asserted, the light on the north-south road is green; when this signal is deasserted, the light on the north-south road is red
 - EWLite: when this signal is asserted, the light obn the east-west road is green; when this signal is deasserted, the light on the east-west road is red.


## Sample State Machine

A finite state machine can be implemented with a register to hold the current state and a block of combinational logic that computes the next-state function and the output function


### [Back to CS4720](%WEBPATH%/classes/cs4720/)