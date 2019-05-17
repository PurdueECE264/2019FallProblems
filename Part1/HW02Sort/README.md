# Selection Sort

Learning Goals 
==============

This assignment asks you to write a program that uses *selection sort*
to sort an array of integers in the ascending order.

You will learn to
* Implement selection sort
* Learn how to write code to check the correctness
* Use Makefile to test a program

Selection Sort
==============

Sorting is widely used in computing. When you use a map to find a
route, the program finds several options and orders them by the
estimated travel time.  When you search a product online, a search
engine looks for good matches and orders them by relevance.  When you
decide which homework to do, you order them by difficulty and the due
days.  If you own several stores, you may want to reward store
managers by the amounts of sales.  When a professor gives grades, the
professor sorts the scores and gives A+ to the student who receives
the highest score.

Many sorting algorithms have been invented for different situations.
Some sorting algorithms have fewer data movements; some others have
fewer comparisons.  Some are better if the data can fit in memory;
some are designed for data scattered in different geographical
regions.

Selection sort (for the ascending order), operates on the following
principle:

1. find the smallest number
2. move it to the beginning of the list
3. exclude the number, and sort the rest of the data


Structure of the Files
======================


* The expected files are in `expected` folder
*  run `make` to make your binary for running
* `make test(x)` will run `x` test case
* output from your code will be save in `output(x).txt`


Write Self-Checking Code
========================

Many students do not know how to write programs that are
"self-checking".  As a result, the students rely on their eyes to
check whether their programs are correct.  The problem is that doing
so restricts small test cases.  This assignments explains how to write
self-checking code.

Checking the correctness of a sorting program is easy: is the result
sorted?  This assignment gives an example showing how to use a
function to check whether an array is sorted. You should write
self-checking code in future assignments.

Use Makefile to Test
====================

Makefile can be used for testing.  It is particularly helpful running
multiple tests at once.  This is *critical* to your success of
learning programming.  Some students do not learn how to run multiple
test cases using Makefile; instead, they run one test case at a
time. This can be tedious and, as a result, these students do not test
their programs well.  Their programs may fail test cases during
grading.  In fact, some students' programs fail even the test cases
given to them.

Create More Test Cases
======================

Do not create test cases by hand and sort them by hand.  Two programs
in Linux may be helpful for you creating larger test cases:

* `shuf`: generate random permutations. `shuf -i 1-100` shuffles the numbers between 1 and 100.

* `sort`: sort lines of text. If you want to sort numbers, please add `-n`.  


WHAT TO SUBMIT
==============

You **must** follow the instructions precisely. Failing to follow
these instructions will likely make you receive zero in this
assignment.  Your score **is determined by your submission**, nothing
else.  The teaching staff is strictly prohibited seeing anything on
your computer for grading.

```
zip sort.zip sort.c
```

Enter Blackboard, upload `sort.zip`.

Please copy `sort.zip` to another directory and

```
unzip sort.zip
```

to check whether you get the correct `sort.c` file.

You **must not** change the order and do the following

```
zip sort.c sort.zip 
```
Doing so will **erase** your `sort.c`.

It is your responsibility submitting the correct file to the correct
homework.  If you want to be successful, you must take responsibility.
Do not waste time asking the instructor to accept your mistake.  The
instructor will not accept **any** excuse for your mistake.




