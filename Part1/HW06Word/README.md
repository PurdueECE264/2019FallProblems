# Read Line from File and Count Word

Learning Goals 
==============

This assignment asks you to write a program that reads lines from a file,
counts how many times a word occurs, and report the result.

You will learn to
* Read lines and store as strings
* Detect whether one string is inside another string

Read Line from File and Count Words
===================================

This assignment uses `fgets` to read strings from a file, uses
`strstr` to find whehther a word is inside the string from the file.
This assignment is a simplified version of the `grep` command in
Linux.

What To Do
==========

You need to write a function called `countWord(char * filename, char * word, char * line, int size)` 
that opens a file named `filename`, counts the number of occurences of given word in the file,
and returns it. If `fopen()` fails, return -1, and **DO NOT** fclose.
Further instructions are in the comments in the function in file `filestr.c`.

WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip hw06.zip filestr.c
```

Enter Blackboard, upload `hw06.zip`.


Test Inputs
===========

The test inputs are [famous speeches](https://www.artofmanliness.com/articles/ooda-loop/).
