# Who Gets the Cake (Part 2)

Learning Goals 
==============

* Insert and delete nodes in a linked list 

Changes from HW03Cake
=====================

In HW03Cake, an array is used to keep track who is still in the
game. In this assignment, a linked list is used.  The output of your
program should match the output of HW03Cake. In addition, the linked
list is printed every time one number is removed.

The files in `expected` directory have `-DDEBUG` in `Makefile` to turn
on the code printing the lists starting from the nodes to be
eliminated.  If `Makefile` does not have `-DDEBUG`, the outputs should
be the same as the files in HW03Cake.

Initialize Pointers
===================

You should *always* initialize pointers to NULL. Many students lose
points unnecessarily because they do not initialize pointers to
NULL. Uninitialized pointers can make your programs' behavior
unpredictable.  Your programs may "work" when you test and fail when
they are graded.

Some students say, "I don't want to initialize pointers unnecessarily
because I know I will assign meaningful values later." Unfortunately,
unexpected execution paths (due to `if` conditions) may have some
pointers unitialized.  Some students say, "Unnecessary initialization
slow down my program. I want my program to be really fast."  Yes, it
is true that assigning `NULL` to a pointer may slow down your
programs, by about half a nanosecond. If you run the programs on
multi-issue machines (for most desktops and laptops today), the
assignment may not take any additional time. The unpredictable
behavior of your program may take several hours to debug. It is unwise
to save half a nanosecond of machine time and spend several hours of
your personal time.

Submission
==========

```
zip hw12.zip hw12.c
```

Upload hw12.zip to Blackboard.

