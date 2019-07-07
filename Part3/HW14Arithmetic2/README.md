# Convert Infix Expression to Postfix Expression

Learning Goals
==============

* Understand stack
* Implement stack using linked list
* Convert Infix to Postfix

Infix and Postfix
=================

One advantage of postfix is that the precedence of operations is already
in postfix expression. Consider the following examples:

Infix       | Postfix
------------+----------
6 + 3 - 5   | 6 3 + 5 -
------------+----------
6 + 3 * 5   | 6 3 5 * +
------------+----------
(6 + 3) * 5 | 6 3 + 5 *

Algorithm
=========

A stack of operators is used to keep track of the order

Consider the input A * B + C (A, B, C are numbers).


Data Structure| 
--------------+-------------
Operator Stack| `[]` (empty)
--------------+-------------
Output        | `[]` (empty)

First, A is a number and it is added to the output.

Data Structure| 
--------------+-------------
Operator Stack| `[]` (empty)
--------------+-------------
Output        | `[A]` 

Next, the operator * is seen. It is pushed to the operator stack.


Data Structure| 
--------------+-------------
Operator Stack| `[*]` 
--------------+-------------
Output        | `[A]` 

The operand B is seen. B is added to the output.

Data Structure| 
--------------+-------------
Operator Stack| `[*]` 
--------------+-------------
Output        | `[A B]` 

The operator is popped from the stack and appended to the output.

Data Structure| 
--------------+-------------
Operator Stack| `[]` 
--------------+-------------
Output        | `[A B *]` 


