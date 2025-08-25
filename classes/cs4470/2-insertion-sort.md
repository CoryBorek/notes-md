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

How does showing these three steps mean that the algorithm is correct?

Initialization is the equivilent of showing that the base case is true.

Maintenance shows that i is correct, and the solution at i+1 is correct.

Same as $P(k) = True \implies P(k+1) = True$

Termination does not affect it, just an extra step to make sure that it works.

# Another Example (homework)
1. Write the pseudocode to find the maximum number in an array (iterative function)
2. Use loop invariant to show the correctness of the algorithm.

# Loop invariant problem

```
prodecude max(A[]: array)
maximum = A[1]
for (i = 2 to n)
{
    if (A[i] > maximum)
        maximum = A[i]
    return maximum
}
```

For insertion sort, A[1.....i-1] is sorted.

maximum = max(a[1.......i-1]);

### Initialization

i = 2, max(A[1...2-1], A[1]) = max(A[1]) = A[1].

### Maintenance
At the beginning of the the ith iteration, maximumm = max(A{i...i-1})

At the end of the ith iteration, maximum = max(A[1...i])

At the end of the ith iteration, 

If A[I] is bigger than max, then maximum = max(A[i], maximum)

maximum = max(A[i], max(A[1...i-1])).

= max(A[1....i])

# Designing Algorithms
Insertion sort uses an incremental approahc.

## Divide and conquer approach
 - Divide the problem into a number of subproblems that are smaller instances of the same problem

 - Conquer the subproblems by solving them recursively. If the subproblem sizes are small enough, however, just solve the subproblems in a straightforward manner

 - Combine the solutions to the subproblems into the solution for the original problem

 - Example: Merge Sort algorithm

### Example
Say we are trying to sort an array that is of n= 100.

We can only solve it in $n^2$ time. $n^2 = (100)^2 = 10,000$

We can divide it into size fifty, and then sort it.

Then we can sort it using the same algorithm

We merge it in the most efficient way possible.

Keep a pointer at the first element in either array,

Compare the smallest one, and copy the smallest into it and move the pointer up in the array.

Keep doing that until both arrays are empty.

This is called the combine step.

The cost of the merge step is n-1 comparisons.

Sorting the original is $50^2 + 50^2 + 100 = 2500 + 2500 + 100 = 5100$

This reduces the cost of the algorithm by nearly half.

Each divide step will help reduce it.

## Merge Sort

Merge sort divides until we have multiple arrays of size 1.

As soon as that happens, we start merging the data together.

Each of these will get the array to be merged all the way back.

If we can divide and conquer, our implementation is generally going to be a recursive function.

```java
// Recursive merge sort algorithm

void MergeSort(ItemType[] values, int first, int last)
// Pre: first <= last
// Post: Array values[first...last] sorted into
// ascending order.
{
  if (first < last)
  {
    int middle = (first + last) / 2;
    MergeSort(values, fist, middle);
    MergeSort(values, middle+1, last);

    // bnow merge two subarrays
    // values[first ... middle] with
    // values[middle + 1 ... last]

    Merge(values, first, middle, middle+1, last);
  }
}
```

How do we find the time?

Write the recurrence relation and use substitution method, tree method, and master theorem.

Complexity of a recursive function is the same as the number of recursive calls.

### What is a recurrence relation?
This wil be discuessed more during Chapter 4

$5! = 5*4*3*2*1$

$5! = 5*4!$

Each of these is a case.

For example

```c
void factorial(int n) {
  if (n == 0)
    return 1;
  else
    return n*factorial(n-1);
}
```

T(n) is the cost complexity.

The number of recursive calls.

We generally say that at the top, it is T(n).

It's the cost of the base case + the cost of the recursive case.

$T(n) = 1 + T(n-1)$

This is our recurrence relation. It is a mathematical notation for a recursive function.

We will learn in chapter 4 that there is

 - Substitution Method,
 - Tree Method
 - Master Theorem

 which we can use to solve this recurrence relation.

 For that to work, we want to find a value for T(n) that is not recursive.

 This will be on a future exam.

 Recursive functions will be used in all chapters.

 Whenever we try to analyze this function, we will use this.

 In Data Structures, we always used master theorem. We can do the same here.

 ### Merge Sort's Recurrence Relation

 Cost at the top is $T(n)$

 Our base case is not explicit, When the first number = last number, we will return. This is implied with the if statement.

 In each of the calls, we are making two recursive calls that are half of the amount

Our recurrence relation is $T(n) = 2T(n/2) + n + 1$

When we solve this, it will be $O(n\log n)$.

In the merge case we will put the result into a temporary array, and copy it back to the original array.

We want to know the complexity of the code, but don't know everything.

We write the recurrance relation, and use either the substitution method, tree method, and master theorem to find it.

Substitution method, Tree method use math.

Master Theorem can estimate by looking at constants.

Further discussion in chapter 4.

We can create a trial problem to test it.

1(8) -> 2(4) -> 4(2) -> 8(1)

When we merge our item, our cost of the function at each level is n.

Number of levels are n -1.

in our case 8 cost, 3 levels

total cost is 8 * 3, 3 is $\log 8$, so $8 \log 8$ or $n \log n$.

With merge sort, best case for cost is $n/2$, worst case is $n$.

best case is an order of $\frac{n}{2}\log n$ worst case is $n\log n$

average case is $\frac{3n}{4}\log n$ or $n\log n$.

This means that our performance will not change in time.

The only drawback is that we use a lot of extra memory.

If memory is not a constraint for this, then use merge sort.


### Implementation for merge function

```cpp
template<class ItemType>
void Merge(ItemType values[], int leftFirst, int leftLast, int rightFirst, int rightLast)
{
  ItemType tempArray[MAX_ITEMS];
  int index = leftFirst;
  int safeFirst = leftFirst;

  while ((leftFirst <= leftLast) && (rightFirst <= rightLast))
  {
    if (values[leftFirst] < values[rightFirst])
    {
      tempArray[index] = values[leftFirst];
      leftFirst++;
    } else {
      tempArray[index] = values[rightFirst];
      rightFirst++;
    }
    index++;

  }

  while (leftFirst <= leftLast)
  {
    leftFirst++;
    index++;
  }


}
```

# Homework 1

First homework is posted, no due date given yet.

Homework should be done in LaTeX.

The homework is written in LaTeX. 

A Tutorial is posted on eLC.

A template is also given in there.

You will be able to write research papers / thesis


Dr. Meena doesn't make slides nowadays, but usually writes it in LaTeX.

There will be a 5% bonus for writing the homework in LaTeX.





### [Back to CS4470](%WEBPATH%/classes/cs4470/)