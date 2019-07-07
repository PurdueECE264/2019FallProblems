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
------------|----------
6 + 3 - 5   | 6 3 + 5 -
6 + 3 * 5   | 6 3 5 * +
(6 + 3) * 5 | 6 3 + 5 *

Example 1
---------

A stack of operators is used to keep track of the order


Consider the input A * B + C (A, B, C are numbers).


Data Structure| Content
--------------|-------------
Operator Stack| `[]` (empty)
Output        | `[]` (empty)

First, A is a number and it is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[]` (empty)
Output        | `[A]` 

Next, the operator * is seen. It is pushed to the operator stack.


Data Structure| Content
--------------|-------------
Operator Stack| `[*]` 
Output        | `[A]` 

The operand B is seen. B is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[*]` 
Output        | `[A B]` 

Data Structure| Content
--------------|-------------
Operator Stack| `[*]` 
Output        | `[A B]` 

Next, read the operator +. **Since it has lower precedence, pop * and add it to the output.**  Push + to the stack.

Data Structure| Content
--------------|-------------
Operator Stack| `[+]` 
Output        | `[A B *]` 

The operand C is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[+]` 
Output        | `[A B * C]` 

Nothing is left in the input. Pop the stack and append it to the end of the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[]` 
Output        | `[A B * C +]` 

Example 2
---------

Consider the input A + B * C 


Data Structure| Content
--------------|-------------
Operator Stack| `[]` (empty)
Output        | `[]` (empty)


A is a number and it is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[]` (empty)
Output        | `[A]` 

Next, the operator + is seen. It is pushed to the operator stack.

Data Structure| Content
--------------|-------------
Operator Stack| `[+]` 
Output        | `[A]` 

The operand B is seen. B is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[+]` 
Output        | `[A B]` 

Next, read the operator *. **It has a higher precedence than + in the
stack and push it to the stack.**

Data Structure| Content
--------------|-------------
Operator Stack| `[+*]` 
Output        | `[A B]` 


The operand C is added to the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[+*]` 
Output        | `[A B C]` 

Nothing is left in the input. Pop the stack and append it to the end of the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[+]` 
Output        | `[A B C *]` 

Keep popping and appending to the end of the output.

Data Structure| Content
--------------|-------------
Operator Stack| `[]` 
Output        | `[A B C * +]` 
