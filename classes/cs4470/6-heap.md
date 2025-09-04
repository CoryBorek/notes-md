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

