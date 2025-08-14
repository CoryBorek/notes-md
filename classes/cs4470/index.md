# CS 4470 - Algorithms

## Introduction
Office Hours: 12:30 - 1:30 PM Monday/Tuesday Boyd 622B.

If time conflict, send an email and ask to meet at another time.


If you see a mistake with a grade, start appealing it. Some TAs can be clueless.

### Prerequisites
- CSCI 2720 or CSCI 2725 - Data Structures (heavily important)
- CSCI 2670 - Theory of Computation (only one chapter is related)

If you do not have all prereqs, drop the class.

### Course Descritpion
Covers basic analysis (Big O, Small O, Big $\Omega$, small $\omega$ notations), basic design techniques (Divide and conquer, dynamic programming, greedy algorithms), graph algorithms (BFS, DFS, MST, shortest path, max flow min cut), basics of NP completeness theory

### Course Topics

### Text
Introduction to Algorithms by Cormen, Leiserson, Rivest, and Stein, 4th edition

1. Insertion Sort
2. Asymptotic notations (big O, etc.)
3. Reccurence Relatnio, Substitution Method, Tree method, MAster theorem
4. Review Basics statistics, probabilistic algorithms
5. Heap, Heap sort, Priority Queue
6. Quick sort
7. Linear time sorting algorithm (counting sort, radix sort, bucket sort)
8. Median and order statistics
9. Elements of Dynamic Programming (matri chain multiplication)
10. Elements of Greedy Strategy (Knap Sack Problem, Huffman Code)
11. Graph Algorithms (BFS, DFS, Topological Sort)
12. Minnimum Spanning Tree (Prims and Kruskal Algorithms)
13. Single Source Shortest PAth algorithms (Bellman-Ford, Djikstra's algorithm)
14. All-Pairs Shortest PAth algorithms (Floyd-Warshall, Johnson's Algorithm)
15. Max-flow Problem (Ford-Fulkerson algorithm)
16. NP-Completeness

## Exams
Two exams in course.
Midterm: Tues, Oct 7th (in-class)

Final: Thurs, Dec. 4, 12:00 PM - 3:00 PM in same classroom

Closed Book Closed notes, can bring a three-formula shees (three pages, front and back)

Does not need to be hand written, can be printed.

Example Partition Function on cheat sheet.

Make up exams are not possible.


## Math based
We will talk more math-based in the concepts.

Lots of information in syllabus.

This class is **difficult**. More difficult than Data Structures.

Heavily math-based.

It is a different kind of math needed.

We will start with Chapter 2, Insertion Sort.


## Slides
All slides are in eLC.

Pace is fast.

If you feel that you are falling behind, meet with Dr. Meena after class.

## Sorting Algorithms

### Comparison Based
Counting Sort O($n^2$)

Merge Sort, Quick Sort, Heap Sort O($n\log n$)


Quick sort best for general use case. No extra memory, and only is O($n^2$) if already sorted. Generally we already know if it is pre-sorted.


### Linear Time Sorting Algorithm
Counting Sort, Radix Sort, Bucket Sort, O($n$)

They never involve comparison at all. It's a little bit of a hack.

First new material in chapter 8.

Problems: Often use extra memory


## Median and Order Statistics

min - First order statistics

Max - nth order statistics

7, 5, 10, 8 ,12

Can use a heap and deques to get ~O(N) but Nlogn on avg

Can also sort at O(nlogn) and gather at O(1)

Could also use partition function from QuickSort for O(n)

## Homeworks
Homeworks are always followed by a quiz.

Chapter 1-9 is midterm

14-34 is on final.

Final is only on post-midterm content.


## Dynamic Programming / Greedy Algorithms
Dynamic Programming and Greedy Algorithms are ways of solving problems.

Merge Sort / Quick Sort are Divide and Conquer Algorithms

Greedy Algorithms typically involve sorting of the data.

Lies near $n\log n$

## Graph Based Algorithms
Some review from Data Structures, but in more detail.

### Single Source Shortest Path Algorithms

Starts with a vertex, calculates shortest distance from one source to each vertex.

SSSP (Djikstra's Algorithm)

### All-Pairs Shortest Path Problem

Calculates shortest path from the each item to every other vertex.

Not just from source, but to all pairs.

Naive solution: Iterate through each vertex, and apply Djikstra's Algorithm

### Max-flow problem
Sending informaton between vertices

### NP-Completness
Non-polynomial solution based problems

For example (O(n)) is polynomial,

$n\log n$ is also considered polynomial,as it is less than $n^2$.

non polynomial is $2^n$, $n!$, $n^n$ If a solution is non-polynomial, not typically practical.

Example: Travelling Salesman Problem
A Salesman is visiting N cities, and is visiting cities that the total distance is minimized.

Has an exponential real-world solution.

For the travelling salesman problem, there is no polynomial solution available.

Theory states that we won't discover one in the future.

You may need to modify the problem, or result to another method.

## Homeworks
Will have a two-week period

Make sure to start on time.

One or two problems for each chapter.

5 homeworks / quizzes.

Example: Homework due on tuesday, quiz on Thursday.

Review material at same time as homework.

Key will be released on Wednesday.

No late submissions for homework.

Don't do it at the last moment. Finish ahead of time.

## Grading
Final: 25%
Midterm: 25%
Quiz: 25%
Homework: 20%
Attendance: 5%.


| Number | Letter |
| - | - |
| 93+ | A |
| 90-92.9 | A- |
| 86 - 89.9 | B+ |
| 82 - 85.9 | B | 
| 78 - 81.9 | B- |
| 74 - 77.9 | C+ | 
| 71 - 73.9 | C |
| 68 - 70.9 | C- |
| 60 - 67.9 | D |
| 59.9- | F |

Nothing is curved.

If you have a problem at any time, ask the professor at any time.

If there is a curve it's due to the professor's error, it will affect everyone.

Everything taught in class will affect homework, quizzes, and exams.

If there is something you don't understand, go to office hours for help.

If you do the work, you will most likely do well.

If you don't do the homework on your own, you will struggle.

Most students who ask for help when needed generally do well.

## Attendance

You can miss four classes without missing attendance.

Should not be more than 10 minutes late.

Missing more than 40% of the class

## Grade Appeals

Grades can be appealed within 7 days of a class ending

## Honesty Policy
Do your work yourself.

Be honest

Don't make up data. Being honest will help you learn the material better.

Do not use AI such as ChatGPT.

## honors option

There is an honors option for this course.



### [Back to Classes](%WEBPATH%/classes/)