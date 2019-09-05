# Read Numbers from File

Learning Goals 
==============

This assignment asks you to write a program that reads numbers from a file,
adds the numbers, and saves the sum into a file.

You will learn to
* Read integers from file, add them, write the result to file
* Use pointer to pass information to caller

Read Data from File and Write Data to File
==========================================

The previous assignment uses `fgetc` to read one character at a time.
This assignment asks you to use `fscanf` to read numbers. To write a
number, you can use `fprintf`.

What You Need To Do
===================

You need to write a function called `addFile(char * filename, int * sum)` that opens a file named filename. If it fails, return false, and **DO NOT** `fclose()`. You have to read the integers in given file, and store the sum. Further instructions are in the comments in the function in file `fileint.c`.

You also need to write a function called `writeSum(char * filename, int sum)` that writes the sum as an integer which name is `filename`. Further instructions are in the comments in the function in file `fileint.c`


WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw05.zip fileint.c
```

Enter Blackboard, upload `hw05.zip`.



