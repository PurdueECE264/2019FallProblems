# Card Shuffling using  Riffle Shuffling (Part 1)

This is the first part of two assignments. You need to implement the
riffle shuffling algorithm of cards.  This part asks you to shuffle a
deck of cards only once. The next assignment shuffles a deck multiple
times.

This assignment considers only cards' numbers (between A,1,2,..,T,J,Q,K) [where, 'T' represents 10] and
does not distingish Hearts, Diamonds, Clubs, or Spades.

Learning Goals
==============

* Use recursion to solve a problem.
* Make copies of structures using `memcpy`.
* Understand the mathematics calculating the number of outputs


Please read both Part 1 and Part 2
==================================

This assignment (part 1, HW10) asks you to shuffle cards only
once. The next assignment (part 2, HW11) asks you to shuffle cards multiple
times.  Please read both parts so that you can reuse part 1 as much as
possible.

Your part 1's score will be at least 50% of the part 2's score. Thus,
if you do well in part 2, you may get some points in part 1, even
though your original score for part 1 may be low.


Shuffling Method
================

The purpose of shuffling is to make the result difficult to predict.
Riffle shuffling is one of the most widely used shuffling methods.
Riffle shuffling has the following steps:

1. Divide a deck of cards into two groups, called the left deck and right
deck (because they are held by the left hand and the right
hand). Each group has at least one card. The two groups may have
different numbers of cards. This is one reason why the shuffling
results is hard to predict.

The following explains the division step with two examples.

## Example 1

Suppose the original deck is ordered as (number 2 is at the top and number 8 is at the bottom).

|2|3|4|5|6|7|8|
|-|-|-|-|-|-|-|

The deck is divied into two groups. There are many different possibilities. For example, the left group can be

|2|
|-|

and the right group is

|3|4|5|6|7|8|
|-|-|-|-|-|-|

## Example 2

Another possible way can be

|2|3|
|-|-|

and the right group is

|4|5|6|7|8|
|-|-|-|-|-|

To generalize, if the original deck has k cards, there are k - 1
different ways to divide the deck because the left can have 1, 2, ...,
k - 1 cards. Correspondingly, the right group has k - 1, k - 2, ..., 1
cards.

2. Interleave the cards. Typically, the cards are released by the thumbs of the two hands. It is possible (in fact, likely) that the two thumbs are not "perfect" and more than one cards are released at once.  This is the reason why the suffling result is hard to predict. The interleaving step is illustrated with the following examples.

## Example 1

Let us consider the simplest example: the original deck has only two cards:

|2|3|
|-|-|

This is divided into two groups:

|2|
|-|

and

|3|
|-|

Interleaving them can produce two possible results: If the right thumb releases the card first, then number 3 will be at the bottom and number 2 is above.

|2|3|
|-|-|

If the left thumb releases the card first, then number 2 will be at the bottom and number 3 is above.

|3|2|
|-|-|

## Example 2

The next example has three cards:

|2|3|4|
|-|-|-|

The cards can be divided in two ways. The first division has only one card in the left group and two cards in the right group:

|2|
|-|

and

|3|4|
|-|-|

There are three possible results:

a. Number 2 is above 3

|2|3|4|
|-|-|-|

b. Number 2 is between 3 and 4


|3|2|4|
|-|-|-|


c. Number 2 is below 4

|3|4|2|
|-|-|-|

The second division has two cards in the left group and one card in the right group:

|2|3|
|-|-|

and

|4|
|-|

There are another three possible results:

a. Number 4 is above 2

|4|2|3|
|-|-|-|

b. Number 4 is between 2 and 3


|2|4|3|
|-|-|-|


c. Number 4 is below 3

|2|3|4|
|-|-|-|

Totally, there are six possible results when shuffling 3 cards.  Please notice
that 

|2|3|4|
|-|-|-|

appears twice and

|4|3|2|
|-|-|-|

does not appear.

The order within the left group and within the right group **cannot change**.  Why can it not appear?
If the left group has 2 cards, then 2 is always above 3, regardless where 4 is inserted.
If the left group has 1 card, then 3 is always above 4, regardless where 2 is inserted.
It is not possible to get

|4|3|2|
|-|-|-|

because it requires that the order of 2-3 and the order of 3-4 are changed.  This is not possible.

## Example 3

The next example considers 4 cards:

|2|3|4|5|
|-|-|-|-|

There are 14 possible results by shuffling these cards:

The left group has only one card (2) and the right group has three cards (3, 4, 5). There are four possible results:

|2|3|4|5|
|-|-|-|-|

|3|2|4|5|
|-|-|-|-|

|3|4|2|5|
|-|-|-|-|

|3|4|5|2|
|-|-|-|-|

The left group has two cards (2, 3) and the right group has two cards (4, 5). There are six possible results:

|2|3|4|5|
|-|-|-|-|

|2|4|3|5|
|-|-|-|-|

|2|4|5|3|
|-|-|-|-|

|4|2|3|5|
|-|-|-|-|

|4|2|5|3|
|-|-|-|-|

|4|5|2|3|
|-|-|-|-|

The left group has three cards (2, 3, 4) and the right group has only one card (5). There are four possible results:

|2|3|4|5|
|-|-|-|-|

|2|3|5|4|
|-|-|-|-|

|2|5|3|4|
|-|-|-|-|

|5|2|3|4|
|-|-|-|-|


How many possible orderings can the new deck have?
==================================================

* If there are *k* cards in the original deck, there are *k - 1* different ways to divide the original deck to two decks:
	* the upper deck has 1 card, the lower deck has *k - 1* cards
	* the upper deck has 2 cards, the lower deck has *k - 2* cards
	* the upper deck has 3 cards, the lower deck has *k - 3* cards
	* the upper deck has 4 cards, the lower deck has *k - 4* cards 
	* till, the upper deck has *k - 1* cards, the lower deck has 1 card
* If the upper deck has *n* cards and the lower deck has *m* cards, there are *((n+m)!)/(n! m!)* ways to interleave the two decks, while keeping the orders in the original upper deck and the original lower deck. (Remember that both *n* and *m* must be one or larger.)
* If the original deck has k cards, then n + m is k and n can be 1, 2, ..., n - 1. Adding the together 

  ```k!/(1! (k-1)!) + k!/(2! (k-2)!) + k!/(3! (k-3)!) + ... + k!/((k-1)! 1!)```
* Please be aware that if a new deck appears multiple times, it is counted multiple time. In the previous example, `2` `3` `4` is counted twice.

* For a deck of *k* distinct cards, there are *k!* possible orders (i.e., permutations).

|k|2|3|4|5|6|
|-|-|-|-|-|-|
|2<sup>k</sup> - 2|2|6|14|30|62|
|k!|2|6|24|120|720|

* As you can see, *2<sup>k</sup>- 2* is equal to *k!*, when *k* is 2 or 3. *2<sup>k</sup>- 2* is smaller than *k!*, when *k* is 4 or larger. Thus, shuffling once cannot generate all possible orders, except for only k is 2. Actually, *2<sup>k</sup>- 2* counts the same output multiple times; in the previous example, `2` `3` `4` is counted twice and `4` `3` `2` is not generated. For simplicity, ECE 264 does not ask you to determine which orders are missing.

If an order may be generated multiple times, your program should print it multiple times.
	
WHAT TO SUBMIT
==============


```
zip hw10.zip shuffle.c
```

Enter Blackboard, upload `hw10.zip`.

Make Test More Flexible
=======================

It is possible that your program's output and the expected output are
different in some negligible ways. For example, your program's output
may have different orders from the expected output. This can be easily
handled if your program's output is sorted.  The following command
sorts your program's output before storing the result in the filled
called `output4`.

`./hw10 4 | sort > output4`

Another negligible difference is additional space. For example,

The `diff` command will report

`2 3 4 A`

and

`234A`

as different. Adding `-w` (ignore white space, including space and
tab) tells `diff` to ignore the differences caused by space only.
After adding `-w`, these two lines are considered the same.







