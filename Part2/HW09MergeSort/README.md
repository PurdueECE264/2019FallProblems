# Recursion

Learning Goals
==============

* Understand recursion
* Use transitivity to reduce redundant computation
* Sort numbers using the merge sort algorithm

Merge Sort
==========

Merge Sort is a Divide and Conquer algorithm. You can read more about [the algorithm](https://medium.com/basecs/making-sense-of-merge-sort-part-1-49649a143478).

The function has three phases:

* If the input array has only one or no element, it is already sorted
  and do nothing. This is the terminating condition.

* If the input array has two or more elements, divide the array into two non-overlapping arrays and these two arrays include all elements in the input array. Send the two arrays to the sort function.

* After the two arrays are individually sorted, merge them into one
array. Here, *transitivity* is used. Consider the two arrays [x1, x2,
..., xn] and [y1, y2, ..., ym].  Each array is already sorted: x1 <=
x2 <= ... <= xn and y1 <= y2 <= ... <= ym.  If x1 < y1, then x1 < y2,
x1 < y3 ... It is unnecessary to compare x1 with y2, or y3, ...,
ym. Transitivity is important avoiding unnecessary comparisons.


WARNINGS
========

Be very very careful about the indexes. Go through your programs very
carefully to ensure that you programs do not miss any element or have
an index beyond an array's size.  Create a lot of test cases to help
you catch different scenarios.

	
WHAT TO SUBMIT
==============

```
zip hw09.zip main.c hw09.c
```

Enter Blackboard, upload `hw09.zip`.


