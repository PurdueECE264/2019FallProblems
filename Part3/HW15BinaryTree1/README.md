# Build a Binary Tree from In-Order and Post-Order

Learning Goals
==============

* Understand binary tree and binary search tree
* Traverse binary trees using pre-order, in-order, and post-order 
* Construct binary trees from in-order and post-order expressions
* Validate the constructed binary is a binary search tree

This assignment is the first of two assignments for building and
traversing binary trees. Please read both Part 1 (HW15) and Part 2
(HW16). Your part 1's score will be at least 50% of the part 2's
score. Thus, if you do well in part 2, you may get some points in part
1, even though your original score for part 1 may be low.

Binary Search Tree
==================

A binary tree means each node has at most two children using two
pointers. If a child does not exist, the pointer points to `NULL`.  If
a node has no child (i.e., both pointers point to `NULL`), this is
called a *leaf node*.  Several commonly used methods visit every node
in a binary tree: they are called *pre-order*, *in-order*, and
*post-order*. Given the outputs of pre-order and in-order (or
post-order and in-order), it possible to *uniquely* construct a binary
tree. Please notice that it is not possible to *uniquely* construct a
binary tree from pre-order and post-order. One of the exam questions
will ask you to give an example.

A binary tree is a *binary search tree* if the value stored in a node
is greater than the values stored in *every* node on the left side and
smaller than the values stored in *every* node on the right side.
This rule must be true for every node.  Please notice that *every* is
important.  If a node's value is greater than the value stored in the
left child, it possible that the value in a grand child of the left
child is greater and this is not a binary search tree.

Construct Binary Tree from In-Order and Post-Order
==================================================

This assignment asks you to construct a binary tree from in-order and
post-order outputs.  The constructed binary tree should be a binary
search tree. Thus, you can validate your program by checking whether
it creates a binary search tree.

The method explained below is inspired by [this website](https://www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/).

Consider two input arrays with the outputs of in-order and post-order:

in-order: [886, 2777, 9383]

post-order: [2777, 886, 9383]

Since the root is always the last node in the output of post-order,
9383 must be the root. It is also the last element in the in-order
output; thus, the root has no right child.  Both 886 and 2777 are on
the left side.

Next, consider the post-order of these two numbers: 886 is after 2777
in post-order so 886 must be the left child of 9383 and the parent of
2777.  The pre-order ouput is [9383, 886, 2777].

Next, consider a more complex example:

in-order: [440, 1425, 4746, 7985, 8168]

post-order: [1425, 440, 8168, 7985, 4746]

From the last value in post-order, 4746 is the root.  These two arrays
are now divided into two arrays for the left and the right sides of
the root:

Left

in-order: [440, 1425]

post-order: [1425, 440]

Right

in-order: [7985, 8168]

post-order: [8168, 7985]

For the left side, 440 is the root and 1425 is the right child.

Similarly, for the right side, 7985 is the root and 8168 is the right child.


The pre-order output is [4746, 440, 1425, 7985, 8168].

For this assignment, you may assume that the inputs are valid: the
in-order and the post-order are from the same binary search tree.


Submission
==========

```
zip hw15.zip tree.c
```

Upload hw15.zip to Blackboard.

