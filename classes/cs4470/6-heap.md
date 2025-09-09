# Heaps

## Binary Trees

A heap is a form of a binary tree.

There are two types, that are covered commonly

Binary trees have two children, a left, and right.

### Binary Search Tree
Binary search trees are a subset of binary trees, where every number to the left of one is smaller, and every number to the right is larger.

### Height of a Binary Tree
The height of a binary tree, is the distance from the root to the deepest leaf node.

A Leaf node is a node on a tree with no children.

### Levels of a tree
The root node has a distance of 0, as the definition is the distance from the root.

The direct children of the root are level 1, their children are level 2, so on and so forth.

## Full Tree
A full tree means that All the levels of a binary tree are full.

The shape of a full tree will look like a perfect triangle

## Complete Tree

A complete tree means that all levels prior to the last level are full, and the last level is filled from left to right.

All full trees are a subset of complete trees, as all full trees are complete trees.

## Heap
A Heap is a binary tree that satisfies these special SHAPE and ORDER properties.

 - The Shape must be a complete binary tree
 - For each note in the heap, the value stored in the node is greater than or equal to the value in each of its children.

 - 50
   - 40
     - 20
     - 10
   - 30

This is a valid Max heap.

For this to work, the parent has to be bigger than the children.

- 50
  - 40
    - 10
    - 5
  - 25
    - .
    - 30

This is not a max heap, as 30 is larger than 25, and it is not a complete tree.

### Min Heap
A Min heap is the same as a heap (or max heap) except that the parent is smaller.


## Properties of a heap
An implication is that the root node is either the maximum (or minimum in the case of a min-heap)

The maximum value is aways at the root, meaning that you can access it in constant time.

The shape property will dictate the height of the tree. This means that the height of the tree will be at max $\log n$.

For a complete tree of n=4, height = $\log n$

For a full tree, of n = 7, height = $\lfloor \log_2 7 \rfloor = 2$.


# Homework
Will be due on 9/12 @ 11:59 PM

Quiz on Monday covering homework material.

If you are following the classwork material and doing the homework on your own, you should be fine.

If we remind on Thursday, we can get an idea

Can bring 3 pages of formula sheets front and back.


# Implications of Heap Properties

In graphs, we need to find the minimum value, we use a min heap.

Ex: Djikstra's algorithm


Heaps are not unique. There are multiple ways to make them.

# Array Representation of a Heap

[70, 60, 12, 40, 30 ,8 , _] 

- 70:
  - 60
    - 40
    - 30
  - 12
    - 8
    - _

In an array representation, we start with the index 0. That will be the root. It is followed by the left child then right child.

After that, the left child's children, then the right child's children.

If the data is missing, we can put -1.

### With array representation

IF i is the index of parent, then 2i+1 is the index of left child, then 2i+2 is the index of the right child.

The parent is in $\lfloor (i-1)/2 \rfloor$.


Leaf nodes are from (n/2) to (n-1).

Half of the nodes in a Heap are going to be leaf nodes.

# Application of a Heap
# Queue
enqueue - Add something to the end of the queue

dequeue - Remove the top element from the queue.

Two parameters: front and rear.

In enqueue, you add an item from rear.

In dequeue, you remove the item from front, and iterate.

# Priority Queue
We have the same enqueue and dequeue operations as a queue, but instead of doing a first in first out system, we remove the item with the highest priority.

Dequeue will remove the maximum element.

Implementing this with a heap, will remove the head.

# Dequeue Operation
 - 50
   - 40
     - 25
       - 10
       - 7
     - 22
       - 4
       - _
   - 30
     - 15
     - 12

When we dequeue, we want to end up with a heap with the next highest number.

If we naively replace 50, we will have a broken tree, so we will need to have a replacement.

We can replace 50 with 40, then replace 40 with 25, then 25 with 10.

 - 40
   - 25
     - 10
       - _
       - 7
     - 22
       - 4
       - _
   - 30
     - 15
     - 12

This won't work, as we no longer have a complete tree.

What we can do instead, is replace the last element with the element we want to remove.

This means that we have a complete tree, so we can do that.

Replace 50 with 4, then 4 with 40, then 25 with 4, then 10 with 4.

This will give us this tree.

 - 40
   - 25
     - 10
       - 4
       - 7
     - 22
   - 30
     - 15
     - 12

## Max-Heapify Pseudocode
```
  Max-Heapify(A,i)
  l = left(i)
  r = right(i)
  if l <= A.heap-size and A[l] > A[i]
    largest = l
  else largest = i
  if r <= A.heap-size and A[r] > A[largest]
    largest = r
  if r != i
    exchange A[i] with A[largest]
    Max-Heapify(A.largest)
```

This operation is O($\log n$). We traverse one branch of the tree, and the height of the tree is log n. That means that this is O($\log n$).


We want to find the cost.

Cost of lines 1-9 : 1

The number of nodes after going to either the left, or right will discard half of the data.
T(n) = 1 + T(n/2)

Using the master theorem, a = 1, b = 2, d = 0

Here, the second case applies

a = $b^d$

So we are $O(n^d \log n)$

$O(\log n)$.

## Dequeue explained
Copy last element and swap it with the root. Then remove the root.
At that point, you call the max-heapify algorithm.

## Worst Case Analysis of Max-Heapify

Worst case: Largest is left subtgree and has one more row than right subtree.

let h = tree height

n = size of input

 - a
   - b
     - c
       - h
       - j
     - d
       - i
       - k
   - e
     - f
     - g 

The size of the two trees has a different max size.


In the worst case, we make a recursive call in the largest subtree.

If we delete the last node, the size decreases on the left, so the case improves

If we add something to the right tree, it evens out more, so the case improves.

This means that the maximum difference between the left and right subtrees is the worst.

### Full Tree
A Full tree of height $h$ has $2^{h+1} - 1$ nodes.

for a height of 2, $2^{2+1} - 1 = 2^3 - 1 = 8 - 1 = 7$.

### Finding total number of nodes in a heap.

We can create two blocks: Block A is a full tree of all but the top height

Block B is the nodes left over to make the complete tree.

Size of the complete tree = nodes in block A + nodes in block B

Height of block A = h - 1, Number of nodes = $2^{h-1+1} - 1 = 2^h -1$

number of nodes in level h of tree is $2^h$.

For our worst case, it is half full, so $\frac{2^h}{2}$

Block A + Block B = $2^h-1 + 2^h/2 = 2^h(1 + \frac{1}{2}) - 1 = \frac{3}{2}2^h -1$

Now we need to find the size of the recursive call.

We can make the left subtree block C.

Size of block C: $2^{h-1+1} -1 = 2^h-1$.

We want to calculate the ratio of block C with the size of block c divided by the size of the entire heap.

$$
\frac{2^h-1}{\frac{3}{2}2^h-1}
$$

$$
\frac{1}{\frac{3}{2}}
$$

$$
\frac{2}{3}
$$

So $T(n) = 1 + T(\frac{2}{3}^n)$

With master theorem

a = 1, b = 3/2,

$a = b^d$, $b^d = \frac{3}{2}^0$, d = 0

$T(n) = 1 + \log(n)$

$O(\log n)$

On the other hand, even though this is the worst case scenario, this will only happen on the first iteration. Every other iteration has a good scenario.

Max heapify is used to dequeue an element.
the other question is how we add something to the heap?

## Enqueuing to a Heap

```java
void ReheapUp(int root, int bottom)
{
  int parent;
  if (bottom > root)
  {
    parent = (bottom - 1) / 2;
    if (elements[parent] < elements[bottom])
    {
      Swap(elements[parent], elements[bottom]);
      ReheapUp(root, parent)
    }
  }
}
```

Bottom is the last element, in which we insert.

The root is the root of the tree (in an array, it is 0.)

With each call to ReheapUp, we discard the bottom row of the tree, and the leaf level has 50% of the data, so we discard 50% of the data.

This means that $T(n) = 1 + T(\frac{n}{2})$.

This is $O(\log n)$

```
HeapInsert(A,key)
  A.heap-size = A.heap-size+1
  i = A.heap-size
  while i > 1 and A[Parent(i)] < key
    A[i] = A[Parent(i)]
```
TODO: finish this method from slides

# Building a Heap
```
Build-Max-Heap(A)
1.  A.heap-size = A.length
2.  for i = floor(a.length / 2) downto 1
3.    Max-Heapify(A,i)
```

This function takes all of the non-leaf nodes, and calls Max-Heapify on each non-leaf node

 - 12:
   - 20
     - 5
       - 7
     - 25
   - 40 
     - 60
     - 50

First it runs on 5


 - 12:
   - 20
     - 7
       - 5
     - 25
   - 40 
     - 60
     - 50

Then 40

 - 12:
   - 20
     - 7
       - 5
     - 25
   - 60
     - 40 
     - 50

Then 20

 - 12:
   - 25
     - 7
       - 5
     - 20
   - 60
     - 40 
     - 50

Then 12


 - 60:
   - 25
     - 7
       - 5
     - 20
   - 50
     - 40 
     - 12

Cost of Max-Heapify = $\log n$

Cost of this method is $O(n)$

This is strange, so Dr. Meena will send a video later to explain it.

We can understand the math better from that.

# HeapSort
```
HeapSort(A: array of integers)
  Build-Max-Heap(A)
  for i := A.length - 1 down to 1
    Swap(A[0], A[i])
    Max-Heapify(A, i)
```

```c
void HeapSort(ItemType values[], int numValues)
{
  for (index = numValues/2 -1; index >= 0; index--)
  {
    //convert array values[0..numValues-1] into a heap
    ReheapDown(values, index, numValues - 1);
  }
    // sort the array
  for (index = numValues - 1; index >= 1; index--) {
    Swap(values[0], values[index]);
    ReheapDown(values, 0, index - 1);
  }
}
```

This is considered an in-place sorting algorithm.

We will have to figure out whether it is stable for homework.

TODO: check whether it is stable. (should not be)
