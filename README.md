# 0x1D. C - Binary trees

## Description

This project focuses on understanding and implementing binary trees in C programming. It covers various concepts related to binary trees, such as traversal methods, tree types (complete, full, perfect, balanced), height, depth, and more. It is intended to solidify knowledge about these data structures and their applications.

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain what a binary tree is
- Differentiate between a binary tree and a Binary Search Tree
- Understand the time complexity advantages compared to linked lists
- Define the depth, height, and size of a binary tree
- List different traversal methods for navigating a binary tree
- Identify complete, full, perfect, and balanced binary trees

## Requirements

- Allowed editors: vi, vim, emacs
- Code compilation on Ubuntu 20.04 LTS using gcc with specific options
- Files should end with a new line
- Use of Betty style and adherence to specified style checkers
- Avoidance of global variables
- Limited to 5 functions per file
- Utilization of the standard C library

## Data Structures

This project utilizes the following data structures:

- **Basic Binary Tree**

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

- **Binary Search Tree**

```c
typedef struct binary_tree_s bst_t;
```

- **AVL Tree**

```c
typedef struct binary_tree_s avl_t;
```

- **Max Binary Heap**

```c
typedef struct binary_tree_s heap_t;
```

## Files Included

- The project includes various C files with functions for handling binary trees.
- A header file named `binary_trees.h` contains function prototypes related to binary trees.

## GitHub Repository Rules

- Each group should have a single project repository. Duplicating or forking repositories with the same name before the deadline might result in a 0% score.
- Ensure proper version control and commit your changes to the designated repository.