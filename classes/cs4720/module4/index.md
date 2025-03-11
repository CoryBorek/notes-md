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

Like SR CLip Flop with Clock, but one data input, and a NOT gate into one of the AND gates

Basic memory element table 


| CLK | D | Q | !Q |
| - | - | - | - |
|0|0|Q|!Q|
|0|1|Q|!Q|
|1|0|0|1|
|1|1|1|0|

### [Back to CS4720](%WEBPATH%/classes/cs4720/)