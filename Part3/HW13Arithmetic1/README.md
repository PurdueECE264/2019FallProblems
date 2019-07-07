# Evaluate Arithmetic Expressions

Learning Goals
==============

* Understand postfix expressions
* Use a list to evaluate postfix expressions
* Handle incorrect expressions

This assignment is the first of two assignments for building a
calculator. The program reads in operations from a file and outputs
the result of the computation to another file. This assignment will
use a *list* to implement its calculator. The next assignment
asks you to convert infix expression to postfix expression.

Please read both Part 1 (HW13) and Part 2 (HW14). Your part 1's score
will be at least 50% of the part 2's score. Thus, if you do well in
part 2, you may get some points in part 1, even though your original
score for part 1 may be low.

Postfix Expressions
===================

Arithmetic calculations are usually written in *infix* expressions,
such as `3 * 5 + 6` or `3 + 5 * 6`.  It is called *infix* because the
operators (`*` and `+`) are between the operands (the numbers).  The
infix expression has a problem about *precedence*: Multiplication and
division have higher precedence than addition and subtraction.  In the
first case, `3 * 5` is performed first to get `15`. Then, `6` is added
to get `21`.  In the second case, `5 * 6` is performed first to ge
`30`. Then, `3` is added to get `33`.  One way to solve this problem
is the *postfix* expression: putting the operators after the
operands. The previous two examples can be written as `3 5 * 6 +` and
`3 5 6 * + ` respectively. In this assignment, we consider only
*binary* operators: each operator that needs exactly two operands.

The postfix expression does not need parentheses to express
orders. Consider an infix expression `(3 + 5) * 6`. This means `3 + 5`
should be performed first to get `15`. Then, it is multiplied with `6`
to get `90`. The postfix expression is `3 5 + 6 *`.  Please notice
that it is different from the earlier expression when parentheses were
not used.

You may ask, "Why bother using postfix?" Infix is easier for humans
but postfix is easier for machines.  



Using list to evaluate postfix expressions
============================================

To evaluate a postfix expression, a method uses a list to hold the
*operands* (the numbers) and *operations*. The method scans the list
from the beginning.

* If an operator (addition, subtraction, multiplication) is seen, take
  the previous two operands, perform the opeartion on them, then store
  the result back to the list.

* Continue until the entire expression has been processed and there is
exact one operand (number) left in the list.


Example
-------

Let us see how this algorithm lets us evaluate `3 4 7 * + 2 -`. The stack starts out empty: `[ ]`.

1. Read a `3` and push it onto the stack, which now looks like `[3]`.
2. Read a `4` and push it onto the stack: `[4 3]`.
3. Read a `7` and push it onto the stack: `[7 4 3]`.

4. Read a `*`. This is an operator, so pop two elements off the stack
(`7` and `4`) and multiply them (`28`), pushing the result onto the
stack: `[28 3]`.

5. Read a `+`. Pop two elements off the stack (`28` and `3`) and add them (`31`), pushing the result onto the stack: `[31]`.

6. Read a `2` and push it onto the stack: `[2 31]`.

7. Read a `-`. Pop two elements off the stack (`2` and `31`) and
subtract the first from the second to get `29`, pushing the result
onto the stack: `[29]`.

Now we're done with the expression and there is only one operand left
on the stack and the answer is `29`.

Handle Errors
=============

You can assume that every line in the input is either a number of a
valid operator.

You must not assume, however, that the input expression is
valid. There are many possible invalid scenarios of invalid
expressions.  When an operator is seen and there are not two operands
before this operator on the list, the expression is incorrect. For
example, `7 +` or `*` are two incorrect expressions. After all
operators have been seen, the list should have exactly one number
left.  For example, `2 8 3 +` is incorrect because the result is `2
11` and two numbers are left.

If an expression has only a single number, it is consider valid.

Submission
==========

```
zip hw13.zip list.c calculate.c
```

Upload hw13.zip to Blackboard.
