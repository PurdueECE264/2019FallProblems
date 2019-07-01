# Card Shuffling using  Riffle Shuffling (Part 2)

This is the second part of two assignments.  This part asks you to
shuffle a deck of cards multiple times.

Learning Goals
==============

* Use recursion to solve a problem.
* Understand how to modify a program (you wrote) for a slightly different problem

	
WHAT TO SUBMIT
==============


```
zip hw11.zip shuffle.c
```

Enter Blackboard, upload `hw11.zip`.

Count Unique Outputs
====================

The previous assignment tells you to use `sort` to order outputs so
that they can be compared.  You can extend this further by going
through multiple programs. After `sort`, you can use `uniq` to keep
only unique lines.  

`./hw11 4 2 | sort | uniq`

gives you the unique lines. You need to use `sort` before `uniq`
because `uniq` merge agencent identical lines.  If two identical lines
are not adjacent, `uniq` does not merge them.

You can add `wc` to count the number of lines.

`./hw11 6 2 | sort | uniq | wc`

tells you how many unique lines are generated.

Check how many unique orders ./hw11 8 2 can generate. Do they cover
all possible orders of 8 cards?

Why is there no `ifdef` and `endif` in shuffle.c?
=================================================

This assignment requires only one function `shuffle`. Thus, there is
no need using `ifdef` and `endif`. It is likely that you need to add
additional functions called by `shuffle`.