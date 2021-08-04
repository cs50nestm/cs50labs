# Tree, Binary Tree and Binary Search Tree

In this lab you will learn about:

- The definition of a Tree, Binary Tree and Binary Search Tree data structure
- How to implement a binary search tree

## What is a Tree?

A tree is a data structure in which each node is comprised of some data as well as node pointers to child nodes.  Just like a family tree, the name is a bit of a misnomer because when we diagram the "root" of the tree is at the top and the "leaves" (end points) at the bottom of the structure.

![Tree](https://raw.githubusercontent.com/csbaxter/tutorials/2020/binarytree/tree.jpg)

We'll refer to node 1 as the **root node**, and external nodes like 5, 6, 7, 8, and 9 as **leaves**.

It's also convention to use the following terms to describe relationships between nodes:

- nodes 2 and 3 are **siblings** of each other
- nodes 5, 6, and 7 are **children** of node 3
- node 2 is the **parent** of node 4

## Binary Tree

A **binary tree** is a type of tree in which each node is comprised of some data as well as node pointers to at most two children.

Here's an example of a binary tree node implementation.

![Binary Tree Example](https://raw.githubusercontent.com/csbaxter/tutorials/2020/binarytree/btreesample.jpg)

Note how each node in a binary tree is comprised of two node pointers and some data.

`n` is the data stored in this node, and `left` and `right` are pointers either to the node's children (or to `NULL` if no children exist).

## Binary Search Tree

A **binary search tree** is a special type of binary tree that simplifies searching.

![Binary Search Tree](https://raw.githubusercontent.com/csbaxter/tutorials/2020/binarytree/binarysearchtree.jpg)

For each node in a binary search tree, every value on its left child's side is less than its own value, and every value on its right is greater. Notice how all values to the left of the root (55) are less than 55, and all the values to the right are greater than 55.

## What to do

In the code panel you will see a `main` function that calls `insert` to place new values in the tree and `search` to look for values in the tree.  There is some pseudocode written in the `insert` and `search` functions to guide you in what to write.  Implement the functions, test your program, ask questions if you get stuck!

Once completed and you are ready to submit use the following command:

`submit50 csbaxter/problems/2021/x/binarytree`
