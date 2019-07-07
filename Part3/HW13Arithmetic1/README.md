# Evaluate Arithmetic Expressions

Learning Goals
==============

* Understand postfix expressions
* Use a stack to evaluate postfix expressions

This assignment is the first of two assignments for building a
calculator. The program reads in operations from a file and outputs
the result of the computation to another file. This assignment will
use a *stack* to implement its calculator, and the next assignment
will use a *binary tree* to make your calculator more useable.

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

Stacks
======

A *stack* is a container (a data structure that holds items) that implements a
*last in first out* (LIFO) policy: you can only retrieve items from the data
structure in the reverse order that you put them in. Stacks can be easily implemented by linked lists by restricting how you add and remove elements:

* *Adding* an element always places it at the front of the linked list (i.e., the `head` pointer will point to the new element). This operation is called a **push**.
* *Removing* an element always removes the first element in the linked list (i.e., whatever `head` points to). This operation is called a **pop**

Note that we've seen these terms, since a *program stack* is exactly
this type of stack. When you call functions you *push* new frames on
to the stack, and when you return from functions, you *pop* those
frames off the stack, in the reverse order that you called the
functions.  The call stack is managed by compilers and operating
systems. In this assignment, you need to manage a linked list using
your code.

Using stacks to evaluate postfix expressions
============================================

To evaluate a postfix expression, a commonly used method uses a stack
to hold the *operands* (the numbers). The algorithm starting with an
empty stack and scans the expression from left to right:

* If an operand (a number) is seen, *push* it onto the stack.

* If an operator (addition, subtraction, etc.) is seen, *pop* two
  operands off the stack, perform the opeartion on them, then *push*
  the result onto the stack.

* Continue until you have processed the entire expression and there is
exact one operand (number) left in the stack.

* When an operator is seen and there are not two operands on the
  stack, the expression is incorrect. For example, `7 +` or `*` are
  two incorrect expressions. After all operators have been seen, the
  stack should have exactly one number left.  For example, `2 8 3 +`
  is incorrect.  For this assignment, you do not need to consider
  these problems.

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

You can assume that every line in the input is either a number of a
valid operator.

Submission
==========

```
zip hw13.zip list.c calculate.c
```

Upload hw13.zip to Blackboard.
