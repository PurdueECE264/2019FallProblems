# Memory Management (Allocate and Free)

Learning Goals
==============

* Understand how to manage resources
* Design data structures and algorithms to keep track of usage

Resource Management
===================

Resource management is a common problem practically everywhere. There
are two types problems: (1) How much resource to acquire?  and (2) How
to allocate resources?

For the first question: How much resource to acquire. Imagine these scenarios:

- You are building a shipping company, how many boats and how many
  trucks should you buy?

- You are building a hotel, how many rooms do you need?

- You are building a restaurant, how many tables do you want?

For the first question: How to allocate resource? Imagine these scenarios:

- A customer needs six trucks for one week transporting something from
  New York to Seattle. Another customer needs two trucks for one day
  from Atlanta to Tampa. The third customers needs four trucks for
  four days from Los Angeles to Phoenix.

- One conference needs 20 rooms from August 25 to 28. Another
  conference needs 15 rooms from August 27 to September 1. Yet another
  conference needs 22 rooms from August 28 to September 2.

Memory Management
=================

This assignment is a *simplified* version of memory management by
operating systems. This assignment specifies the requirements and you
need to

- Design the algorithms and data structures to meet the requirements

- Implement your design by a C program

Inside a computer, the operating system has to keep track of which
piece of memory is used or not.  The smallest unit of memory
allocation is called a *block*. The number of *virtual* blocks is
determined by the operating system and the processor.  The number of
*physical* blocks is determined by the number of memory chips
installed on the machine. This assignment does not distinguish virtual
and physical blocks.

Consider the following example when a computer has 20 blocks.  If a
block is not used, it is marked by `-`.  If a block is used, it is
marked by `*`.

At the very beginning, no memory is used and every block is marked by
`-`. Please notice that the blocks start with 0. If there are n
blocks, the last block's number is n - 1.


|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | - | - | - | - | - | - | - | - | - | - | -  | -  | -  | -  | -  |  - | -  | -  | -  | -  |

When several blocks are needed for allocation, your program needs to
find *consecutive* blocks. If you cannot find large enough consecutive
blocks, you have to reject this allocation request.

For example, imagine that after some allocations and releases, this is how the memory is occupied:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | - | * | - | * | - | * | - | * | - | *  | -  | *  | -  | *  |  * | -  | *  | *  | -  |

As you can see, 11 blocks are occupied and 9 blocks are
unused. However, these unused blocks are scattered (called
*fragmentation* in operating systems). If two blocks are needed, then
allocation fails.

Consider another example:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | - | - | - | - | * | - | - | - | - | - | *  | -  | *  | -  | -  |  - | -  | -  | *  | -  |

Suppose three blocks are needed. There are multiple options:

- Blocks 0, 1, and 2

- Blocks 1, 2, and 3

- Blocks 5, 6, and 7

- Blocks 6, 7, and 8

- ... some more options

- Blocks 15, 16, and 17

This assignment asks you to use **first fit** to allocate. Among these options, blocks 0, 1, and 2 will be used.

Let's run through several examples:

Starting from all blocks unoccupied.

If allocation succees, the program returns the ID of the first block.
Allocate two blocks:


|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | - | - | - | - | - | - | - | - | -  | -  | -  | -  | -  |  - | -  | -  | -  | -  |

Return 0.

The first two blocks are occupied now.

Allocate five blocks:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | - | - | - | -  | -  | -  | -  | -  |  - | -  | -  | -  | -  |

Return 2.

Allocate three blocks:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | -  | -  | -  | -  | -  |  - | -  | -  | -  | -  |

Return 7.

Allocate five blocks:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |

Return 10.

Free the blocks starting from 0.


|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | - | - | * | * | * | * | * | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |


Allocate two blocks:


|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |

Return 0.

Free the blocks starting from 10.

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | -  | -  | -  | -  | -  |  - | -  | -  | -  | -  |

Allocate two blocks:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | *  | *  | -  | -  | -  |  - | -  | -  | -  | -  |

Return 10.

Allocate three blocks:

Return 12.


|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | * | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |

Free the blocks starting from 2.

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | - | - | - | - | - | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |

Allocate four blocks:

|block | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 |
|------|---|---|---|---|---|---|---|---|---|---|----|----|----|----|----|----|----|----|----|----|
|      | * | * | * | * | * | * | - | * | * | * | *  | *  | *  | *  | *  |  - | -  | -  | -  | -  |

Return 2.

Please read `memory.c` carefully and implement the needed functions.

Submission
==========

For this assignment, you need to provide all necessary files **and**
`Makefile`.  Your program will be tested using the following commands

`make`: generate an executable called `hw18`. Please remember that the
executable must be called `hw18`. Any other name will be rejected.

If `make` fails, you will receive no score in this assignment. Each
warning message has 10% penalty of the score.


```
zip hw18.zip Makefile + all necessary files
```

Upload hw18.zip to Blackboard.
