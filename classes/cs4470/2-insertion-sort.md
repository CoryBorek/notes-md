# Insertion Sort & Merge Sort

This material should be a review for all class particiapnts.

If anything is covered that looks unfamiliar, read Chapter 2 in the book.

If it looks familiar, review it to make sure that you recall all relavent material.

## Sorting Algorithms

 - Insertion Sort (today)
 - Merge Sort (today)
 - Heap Sort (chptr 6)
 - Quck Sort (chptr 7)

These are all comparison based sorting algorithms

All take Input in the form of an array.

For example:
$a[i] < a[i+1]$

There is a bound on these algorithms

Best efficiency to achieve for these comparison based algorithms is $n\log n$

- Insertion Sort $n^2$
- Merge Sort $n\log n$
- Heap Sort $n\log n$
- Quick Sort $n\log n$

Lower bound is $\Omega(n\log n)$

## Linear Based

Counting Sort

Radix Sort

Bucket Sort

These are and order of $n$.

These are not comparison-based, so the bound given does not apply.

There is no `if(a[i] < a[i+1])` type statement.

Can be linear, or a smaller number..

## Stability of a Sorting Algorithm
Duplicates should not drastically alter the complexity of a sort, though may add one or two lines.

### Stable Sorting Algorithm
Maintains the order of the data in the output. If two items are the same, the original order of the duplicate items remain.

#### Example
```
2 5 2 8 6
```

The first two would stay in front in a stable algorithm.

In an unstable algorithm, it may switch around.

To check if it is stable or unstable, look at the code

Insertion and Merge sort are stable,

Heap and Quick Sort are unstable.

## In Place sorting algorithm
Does not use extra memory.

We only use the memory of the input algorithm

Merge Sort is not an in-place sorting algorithm

It uses an extra $O(n)$ of memory.


Counting Sort, Radix Sort, and Bucket Sort are not in-place sorting algorithms

All of them use a lot of extra memory.

All comparison-based algorithms that are not Merge sort are in-place algorithms.


## What is an algorithm?

- Computational Procedure
  - Well-defined
  - Takes specified output
  - Creates specific output
- Sequence of steps from input to output.

# The Problem of Sorting

## Input
Sequence $<a_1, a_2, ..., a_n>$ of numbers.

## Output
Permutaition $<a'_1, a'_2, ..., a'_n>$ such that $a'_1 < a'_2 <  ... < a'_n$.

### Example

 - Input : 8 2 4 9 3 6
 - Output: 2 3 4 6 8 9


# Arithmetic Series

variables, a, d

such that  
$a, a+d, a+2d, ...$

## Example
a = 1, d = 2

$1, 3, 5, 7, ...$

## Uses
Nth term: $a_n = a + (n-1)d$

$S_n = (n/2)[2a + (n-1)d]$

$d = a_n - a_{n-1}$

# Insertion Sort

Works like someone who "inserts" one or more card at a time into a hand of cards that are already sorted.

`6 10 24 36`

To insert 12, we need to make room for it by moving first 36 and then 24

`6 10 12 24 36`


## Method
One by one each as yet unsorted array element is inserted into its proper place with respect to the already sorted elements.

One each pass, this causes the number of already sorted elements to increase by one.


```
for j = 2 to A.length
  key = A[j]
  /* Insert A[j] into the sorted sequence A[1 ... j - 1] */
  i = j-1
  while i > 0 and A[i] > key
    A[i+1] = A[i]
    i = i - 1
  A[i+1] = key

```
**Note:** Arrays in pseudocode / math starts at index 1. In an actual programming language, it will be 0.

**Note:** A.length = A[n] `j = 2 to n` is `A[1...n]` where `A[n]` is the last element.

We may have an assignment in where we get an item where the index starts at 1.

What happens when the data is already sorted?

With insertion sort, we only check once for each item,

so n-1 checks

The **best case scenario** is $O(n)$

Worse case is when we are ordered in reverse direction...

That will be an order of $O(n^2)$

For partially sorted data, most inputs have one comparison.

Will be a lot closer to best case.

closer to $O(n)$

Average case should be between best and worst cases

In the best case, we do 1 comparision per iteration

Worst case is n-1 comparisions per iteration

So we can guess that there are n/2 comparisions per iteration

so $\frac{n}{2} - (n-1)$ is closer to $O(n^2)$

Closer to worst case on average.

A lot of the material that we will see in future classes, will be mathematically involved.

The lecture may be easier than solving on your own.

Make sure to review the content.

# Loop Invariants

## Concepts
### Initialization
Is true prior to first iteration?

### Maintenance
If iti s true at start of iteraition, it remains true at the end of iteration

### Termination
Upon termination, it contributes to showing algorithm is correct

## What is it?
For CS Majors, we can check the algorithm by running it.

To truly prove that it works for *all* cases, we can prove it with math, using induction.

We can show the correctness of an iterative algorithm.

This does not apply to a recursive function.

All of our examples will be iterative.

Recursive functions (chapter 4) will be discussed in a different way (recursive method, tree method, master theorem, recurrence relation)

## Principle of Induction

### Principle of Mathematical Induction
To prove that $P(n)$ is true for all positive integers $n$, we complete these steps

 - *Basis Step*: Show that $P(1)$ is true.
 - *Inductive Step* Show that $P(k) \rightarrow P(k+1)$ is trye for all positive integers $k$.

 To complete the inductive step, assuming the *inductive hypothesis* that $P(k)$ holds for an arbitrary integer k, show that must $P(k+1)$ be true

 1. Show that base case is true $\implies P(1)$ is true
 2. Assume the problem is true at some k $\implies P(k)$ is true
 3. Show that problem is true at k+1 $\implies P(k+1)$ is true

$P(k)$ is trye wgeb P(k+1) is also true if step 2 and 3 holds

Show that P(1) is true

Then P(2)

Then P(3)

Then P(4)

...

then P(n)

## Examples

Show that $\sum_{i=1}^{n} = 1 + 2 + ... + n = n(n+1)/2$

1. Show that base case is true

$\sum_{i=1}^{1} = 1 = 1(1+1)/2 = 1(2)/2 = 2/2 = 1$

Base case holds.

2. Assume P(k) is true
$\sum_{i=1}^{k} = 1+2+...+k = k(k+1)/2$

3. Show that P(k+1) is true

$\sum_{i=1}^{k+1} = 1+2+...+(k+1) = (k+1)(k+2)/2$

$k(k+1)/2 + k+1 = (k+1)(k+2)/2$

$k(k+1)/2 + (k + 1)$

$(k+1)[k/2 + 1] = (k+1)(k+2)/2$

$(k+1)[k/2 + 2/2] = (k+1)(k+2)/2$

$(k+1)(k+2)/2 = (k+1)(k+2)/2 $

## Define Loop Invariant
Solution looks at step i.

A[1...n] is input

Let's look at insertion sort

`|36| 24 10 6 12`

After first iteration

`|10 24 36| 6 12`

`6` is the ith item

everything up to i-1 is sorted.

Our insertion is that A[1...i-1] is sorted.

Our key is A[i], and we can say that A[i+1...n] is unsorted

### Initilization
Before the start iteration, 

We need to show that A[1] is sorted.

i = 2 at initilization, so we will check

A[1...2-1] = A[1] is sorted.

### Maintenance.
We need to see that our loop invarient is correct at both the beginning and the end of the ith iteration

A[1...i-1] is sorted.

We need to show that the loop invarient at the end of iteration i is i.

`36 24 10 20 12`


`| 10 24 36 /* i - 1*/ | 20 /* i */ 12`

our key goes to index k.

we can assume that A[1..k-1] is sorted

A[k] is in its sorted location.

From k to i is also sorted.

From A[k+1..i] is also sorted.

We know that A[1...k] is sorted, A[k] is sorted, and A[k+1...i] is sorted

With all of that, we can assume that A[1...i] is sorted.

### Termination
When the algorithm is terminated, our i is n+1

A[1...n+1 - 1]
A[1...n] is sorted.


### [Back to CS4470](%WEBPATH%/classes/cs4470/)