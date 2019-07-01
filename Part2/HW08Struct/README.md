# Structures + Binary Files

Learning Goals
==============

* Understand structures
* Read data from a binary file using `fread`
* Write data to a binary file using `fwrite`
* Call `qsort` function to sort an array of structure 
* Write your own Makefile for testing
* Check memory error using `valgrind`


WARNING
=======

You need to write your own Makefile from now on. Some people think
they can save time by not writing Makefile. These people are wrong.
Without Makefile, you have to type many characters when you test your
program. Even though it may seem all right at the very beginning, the
wasted time will soon add to signficant.  Do not fool yourself and
believe you can learn this course well without learning how to write
Makefile.  You cannot. You will not be the first exception.

Your program must not crash and must not leak memory.  You will lose 1
point for every leaked byte. If your program leaks memory, it is very
likely that you will receive zero.  You know exactly (using
`valgrind`) how to check memory errors. If your program leaks memory,
it is like an airplane that leaks fuel. Your program *DOES NOT*
work. Don't fool yourself and claim that your program works.  Talk to
professional software developers. Everyone will tell you memory leak
is *unacceptable*.  DO NOT COMPLAIN.  If you want to become a
professional software developer, you need to meet the requirements of
the real world.


Functions Needed
================

* `int main(int argc, char * * argv)`
* `int countVector(char* filename)`
* `bool readVector(char* filename, Vector * vecArr, int size)`
* `bool writeVector(char* filename, Vector * vecArr, int size)`
* `int compareVector(const void *p1, const void *p2)`
	
Structure
=========
The structure looks like
``` 
    	#typedef struct
	{
		int x;
		int y;
		int z;
	} Vector;
```

It contains 3 integer variables, `x`, `y`, and `z`. 

Summary
========

The goal of this homework is: To read from a binary file, into an
array of `Vector` structure using the `fread` function. Then to sort,
using `qsort`, this array of structures based on the attribute of `x`
first.  If two vectors have the same `x` value, compare the `y`
values.  If two vectors have the same `y` value, compare the `z`
values.  Finally, write the sorted array of structures to the output
file, using `fwrite`.
	
WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw08.zip main.c hw08.c
```

Enter Blackboard, upload `hw08.zip`.

Please notice that you do not need to submit `Makefile`.  If you submit `Makefile, it will not be graded.

