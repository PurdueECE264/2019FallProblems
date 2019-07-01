# Quick Sort

This is the first assignment in Part 2. That means this assignment is
*much harder* than any assignment in Part 1. In fact, you may feel
that this assignment alone is more difficult than all previous
assignments combined. The reason is that this assignment needs to
solve several problems.

Learning Goals 
==============

This assignment asks you to write a program that uses *qsort*
to sort an array of integers in the ascending order.

You will learn to
* Count the number of integers in a file
* Allocate memory (an array) to store the integers
* Read integers from the file and store them in the array
* Call `qsort` function to sort the integers
* Write the sorted array to another file
* Release memory
* Check memory error using `valgrind`

Quick Sort
==============

The [`qsort` function](https://linux.die.net/man/3/qsort) is a generic
function in C for sorting arrays. Please go to the link and read the
explanation.  For this assignment, you need to understand how to use
`qsort`. You do not need to understand the algorithm. You will learn
the algorithm later (after understanding recursion).

What You Need to Do
===================

Warning: This assignment is *much much* harder than all previous assignments combined. You must start early.

 Need to complete the following functions:
 * `int main(int argc, char * * argv)`
 * `int countInt(char* filename)`
 * `bool readInt(char* filename, int * intArr, int size)`
 * `bool writeInt(char* filename, int * intArr, int size)`
 * `int compareInt(const void *p1, const void *p2)`

WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw07.zip main.c hw07.c
```

Enter Blackboard, upload `hw07.zip`.

