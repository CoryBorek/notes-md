# Dynamic Programming

Similar to a Divide and Conquer Solution

 - Solve a problem by combining solutions to subproblems.
 - In divide and conquer, we condider non-overlapping subproblems
 
In dynamic programming, solutions to subproblems may overlap.

 - i.e. subproblems share subproblems.
 
Dynamic programming is typically applied to *optimization problems*

 - Need to either maximize or minimize some function.
 

# Optimization Problems

Many solutions
 - Not all possibilities are valid
 
Solution Value
 - The value is found using an objective function
 
Goal

 - Find a valid solution that has an optimal (min or max) value
 
We examine two strategies

 - Dynamic Programming
 - Greedy algorithms
 - Other strategies exist as well
 
# The importance of Sub-structure

Optimal sub-structure (principle of optimality): For the global problem to be solved optimally, each sub problem must be solved optimally.

## Small number of sub-problems: Many NP-hard problems can be formulated as DP problems

These formulations are not efficient, because the number of sub-problems is exponentially large.

Ideally, the number of sub-problems should be at most polynomial in the length of the input.

# Example, Knapsack Problem

## Givens

 - A Knapsack with a weight limit $W$
 - A set of items $I=\{x_i | 1 \le i \le n \}$ with weight $w_i$ and value $v_i$

## Find
 - A set of items $M$ that the knapsack can carry such that $\sum_{x_i \in M} w_i \le W$
 - $\sum_{x_i \in M} v_i$ is maximized.
 
 
# Dynamic Pgorgramming

## Break problems into smaller problems
 - Solutions to smaller problems are used when finding a solution to the larger problem
 - Similar to divide-and-conquer
 
## DP is applicable when the sub-problems are **not independent**.

 - Solutions to larger problems contain solutions to sub problems
 - Different sub-problems overlap.
 
# Steps for using Dynamic Programming

## Characterize Solution Structure
 - What is the best solution of all possible solutions?
 - What makes a solution valid?
 - What is the objective function?
 
## Recursively define the value
 - Best solution defined in terms of sub-problems
 - This step helps you determine how to compute your objective function

## Compute Solution
 - Bottom up: Start with the smallest possible sub-problems and build up.
 - Top down: Start with final solution and use recursion.
   - Use "memoization" i.e. keep interim values in a table.
   
### Bottom up vs Top Down
 - Reduces number of computations required
   - Many "holes" in top down table

 - Top down computation can be more complex
   - Recursive vs nested loops
   - Recusion also adds to space complexity.

# Example: Chain Operations
Determine the optimal sequence for performing a series of operations: This class of problem is important in compiler design for code optimization and in databases for query optimization.

## Example
Given a Series of Matricies $A_1,...,A_n$, we can "parenthesize" this expression however we like, since matrix multiplication is associative.


Say that we have 3 matricies of dimensions 5x4, 4x6, and 6x2.

Different ways and orders that we will multiply this will make the number of multiplications larger or smaller.

## Matrix-Chain-Order


A = $A_1, A_2, ..., A_n$, with each A being a dimension to be multiplied,

ex: 5, 4, 6, 2


s tracks placement of parenthesis

m is the min number of multiplications needed to compute $A_{i...j}$

```
Matrix-Chain-Order(p)
  n = p.length -1
  for i = 1 to n
    m[i, i] = 0
  for L = 2 to n
    for i = 1 to n - L + 1
      j = i + L - 1
      m[i,j] = infinity
      for k = i to j - 1
        q = m[i, k] + m[k+1, j] + p[i-1] * p[k] * p[j]
        if q < m[i, j]
          m[i,j] = q
          s[i, j] = k
  return m and s
```
# Common DP Problems

 - Rod Cutting
 - Matrix-Chain Multiplication
 - Longest Common Subsequence
 - Optimal Binary Search Trees
 
