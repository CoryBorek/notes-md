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
## Queue
enqueue - Add something to the end of the queue

dequeue - Remove the top element from the queue.

Two parameters: front and rear.

In enqueue, you add an item from rear.

In dequeue, you remove the item from front, and iterate.

## Priority Queue
We have the same enqueue and dequeue operations as a queue, but instead of doing a first in first out system, we remove the item with the highest priority.

Dequeue will remove the maximum element.

Implementing this with a heap, will remove the head.

### Dequeue Operation
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

