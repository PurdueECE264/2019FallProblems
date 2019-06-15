# Structures + Binary Files

Learning Goals
==============

* Understand structures
* Read data from a binary file using `fread`
* Write data to a binary file using `fwrite`
* Call `qsort` function to sort an array of structure 
* Write your own Makefile for testing

WARNING
=======

You need to write your own Makefile from now on. Some people think
they can save time by not writing Makefile. These people are wrong.
Without Makefile, you have to type many characters when you test your
program. Even though it may seem all right at the very beginning, the
wasted time will soon add to signficant.  Do not fool yourself and
believe you can learn this course well without learning how to write
Makefile.  You cannot. You will not be the first exception.  

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
zip hw08.zip main.c vector.c
```

Enter Blackboard, upload `hw08.zip`.

Please notice that you must not submit `Makefile`. A penalty of 2
point will be imposed for each unwanted file.

* Q: Why do you impose penalty on unwanted files?
* A: Imagine that you fly from Chicago to London. If the plane  flies to
  Munich, you travel longer distance. What do you think? Would you complain?
  "More" is not better.  