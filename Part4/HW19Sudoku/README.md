# SudoKu 

Learning Goals
==============

* Design data structures and algorithms to solve the Sudoku problem
* Implement in a C program

Sudoku Game
===========

Sudoku is a number game with 9 rows and 9 colums (totally 81
cells). The cells are also divied into 9 regions, each has 3 rows and
3 columns.  Some cells are pre-filled by numbers between 1 and 9
(inclusive).

The goal of this game is to fill the unfilled cells with numbers
between 1 and 9 so that

- Each number between 1 and 9 appears exactly once in each row

- Each number between 1 and 9 appears exactly once in each column

- Each number between 1 and 9 appears exactly once in each 3 x 3 region

In a Sudoku game, some cells have already been filled and the player
needs to fill the other cells.  If a Sudoku game is created correctly,
each cell should have one and only one correct answer.

For easy Sudoku games, the unique values in the unfilled cells are
determined by repeating checking the three rules above for *each
individual cells*. The problem is finding the right orders of the
cells whose values can already be determined by these rules. As more
and more cells are filled, the values in the remaining cells can be
determined.

More difficult Sudoku games need to consider the values in several
cells simultaneously. After considering these rules, it is still not
possible to find a cell whose value can be uniquely determined.
Instead, every cell has several options.  These games require that
players guess the values in some cells first and fill the remaining
cells. After more and more cells are filled, the players can determine
whether the earlier guesses are correct.  If the guesses are wrong,
the guesses lead to violating one or multiple rules.  The players have
to change the guessed values.

This assignment considers only the games in which every cell's values
can be uniquely determined. The problem is filling in these cells by
finding the un-filled cells in the proper orders.

Sample Inputs and Expected Outputs
==================================

The examples in this assignments are from the book "Sudoku Collection
Volume 124" published by www.kappabooks.com.

Submission
==========

Include all necessary files and **Makefile**. The executable must be
called `hw19` and it must uses `argv[1]` as the name of the input
file.  The output should be printed on screen (during grading, the
output will be directed to a file).

This is how your program will be tested:

`./hw19 inputs/test1 > output1`

`diff output1 expected/expected1`


```
zip hw19.zip all-necessary-files
```

Upload hw19.zip to Blackboard.
