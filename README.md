# 2019 Fall Problems for Purdue ECE 264 "Advanced C Programming"

**DRAFT**

This class is going through major restructuring to reflect the needs
of students, new technologies in software engineering, and
expectations from industry.

The problems are classified into four parts:

* Part 1: Each focuses on a narrowly defined problem.

* Part 2: Each requires integration of the knowledge and skills for solving several related problems.

* Part 3: Advanced materails that may not be completely covered in this class.

* Part 4: Experiment create a large program by students across multiple semesters


Tentative Schedule
==================

|Week | Monday | Tuesday | Wednesday | Thursday | Friday     |
|-----|--------|---------|-----------|----------|------------|
| 01  |        |         |           |          |  01        |
| 02  |        |         |    02     |          |            |
| 03  |        |   03    |           |          |            |
| 04  |  04    |         |           |          |  05        |
| 05  |        |         |    06     |          |            |
| 06  |  07    |         |           |          |  08        |
| 07  |        |         |           |   09     |            |
| 08  |        |         |   10      |          |            |
| 09  |        |   11    |           |          |            |
| 10  |  12    |         |           |          |   13       |
| 11  |        |         |           |   14     |            |
| 12  |        |         |   15      |          |            |
| 13  |        |   16    |           |          |            |
| 14  |  17    |         |           |          |            |
| 15  |        Thanksgiving                                  |
| 16  |        |  18     |           |          | 19 (bonus) |

Part 1 Basic
============

* HW01Linux: Linux commands, `gcc`, `make`
* HW02Sort: Selection Sort. Array. Testing.
* HW03Cake: Who gets the cake? Array, Makefile. Testing.
* HW04File: Read characters from a file and count the occurrences. `fopen`, `fclose`, `fgetc`
* HW05Sum: Read integers and add them, pointer. `fscanf`, `fprintf`
* HW06Word: Read lines and count a word's occurrences, string. `fgets`, `strstr`

Part 2 Integration
==================

The second part is more difficult than the first part.  These assignments are more complex and need to integrate more pieces.

* HW07QSort: use `fscanf` to read integers from a file, `malloc` to allocate memory,  `qsort` to sort numbers , `fprintf` to write results to another file, `free` to release memory
* HW08Structure: Read binary file, sort, write results to another file
* HW09MergeSort: Use merge sort to sort an array of integers. Recursion 
* HW10Shuffle1: Shuffle cards once. Recursion.
* HW11Shuffle2: Shuffle cards multiple times. Recursion.


Part 3 Dynamic Structure
========================
* HW12Cake2: Who gets the cake? Use linked list.
* HW13Arithmetic1: Perform arithmetic calculation using postfix expression.
* HW14Arithmetic2: Convert an infix expression to postfix.
* HW15BinaryTree1: Build a binary tree from in-order and post-order
* HW16BinaryTree2: Print the path from a node to the root

Part 4 Applications
===================

* HW17Maze: find the shortest distances between the source to all reachable locations
* HW18Memory: allocate and free memory blocks and bit operations
* HW19Sudoku (bonus): solve Sudoku problems


How are Programming Assignments Graded?
=======================================

Programming assignments are graded by computer programs. Thus, your programst must follow the instructions *precisely*. You must understand that computers are not tolerant. Any "small" (small for you) mistake can lead to significant loss of points.

More is not better. If the assignment does not ask you to print anything, your programs must not print anything.  Printing debugging messages will likely cause significant loss of points.  Some students say, "My programs print everything needed, and more. Isn't more better?"  The answer is No. More is not better. Your programs must follow the specifications precisely.

Why is this course so strict in meeting specifications? Because that
is the expections of professional software developers.  Computer
software is used in many systems that might cause injuries or loss of
lives (such as flight control). It is critical to follow the
specifications precisely. If you want to pursue engineering as your
career, you must understand the needs of following specifications.


How to Write Correct Programs Efficiently
=========================================

Many people have learned to write programming and become professional
software developers. In fact, many people enjoy writing computer
programs. Many people find programming extremely difficult. What are
the differences between different people? Many factors contribute to
the differences. Here are a few:

* Professional software developers read to learn. Some students do not
  read and prefer the "trial and error" approach: do random things and
  hope to magically make their programs work. These students claim
  that this approach is their way of learning. That makes no
  sense. The foundation of human civilization is to learn from what is
  already discovered by others.

* Professional software developers pay attention to
  details. Professional software developers understand computers
  cannot tolerate "small" mistakes. Some students think they should
  get 99% points if 99% of their program works.  Unfortunately, this
  is not true for computers. Computers are designed to be stupid:
  computers cannot tolerate small mistakes.

* Professional software developers assume their programs have problems
  and thus carefully design their programs to prevent, detect, and
  remove mistakes.  Some students believe that their programs are
  always correct and have no plan to prevent, detect, and remove
  mistakes.  

* Professional software developers write small pieces of code each
  time, test thoroughly, before writing another piece of code.  Some
  students write a lot of code and expect everything to work smoothly
  when these pieces are put together.  


* Please read the entire assignments before you ask any question. In
  many cases, your questions have already been answered. If you still
  have questions, please post them in Blackboard.

Email Policy
============

The teaching staff will *NOT* answer emails that ask questions
applicable to other students.  Your email must be used for questions
specifically to you individually.

The teaching staff will *NOT* answer any question marked "Emergency"
or "Urgent". If you have emergency, please dial 911. 


Structures of Assignments
=========================

At the top of every file, there is clear indication whether you should modify the file or not.  You must follow the instruction.

Everything you write must be enclosed within

`#ifdef`

and

`#endif`

The reason is that we may replace the functions to give you partial credits by turning on or off specific blocks.  If you write anything outside `#ifdef` and `#endif` and your code happens to have mistakes, the mistakes cannot be removed.  As a result, your program cannot receive partial credits.


If You Find Mistakes
====================

The teaching staff takes significant efforts making these assignments. Despite the efforts, mistakes are
still possible. If you suspect any mistake, please post in Blackboard. The more details, the better.
Please include the following information (and any additional information you may have). Thank you.

* Assignment Number
* What do you expect
* What do you see
* The type of computer you are using (please remember that the assignments are designed for Linux)
* Procedure to reproduce the problem
* Suggestions for correction

If You Have Suggestions
=======================

Software development is fast-moving technologies. The teaching staff
takes significant efforts keeping up with recent and proven
technologies. However, it is possible that some technologies are
better than what is used in this class.  If you have any suggestions
about how to improve the class, please share your thought.  Thank you.

Frequently Asked Questions
==========================

* Q: Is there any assignment during a week when there is also an exam?
* A: Yes, for midterm exams.

* Q: Why?
* A: The assignments help you understand the materials and answer exam questions.

* Q: Why are there more assignments than the past semesters?

* A: Computers are not forgiving. A "small" (small to humans) may make
  a computer program non functional. In the past semesters, some
  students made careless mistakes (such as failing to submit all
  needed files) and lost most or all points. As a result, one careless
  mistake may have too much impact in the final grade.  This semester
  breaks the assignments into smaller ones so that each assignment has
  fewer points. Careless mistakes have less impact on the final
  grades.  The covered topics are the same.

* Q: Many assignments have restrictions, such as data types or
  function signatures (return type, argument types). Why? I want total
  freedom because I am very creative. I do not want any restriction at
  all.

* A: The restrictions are needed for grading, in particular, giving
  partial credits when your programs do not work completely. It is
  wrong that total freedom is needed for creativity. True creativity
  is to create within the boundaries of appropriate (and in many cases
  necessary) restrictions. Musicians use the same notations. Painters
  have to understand light and interactions of pigments. Dancers have
  to create with the presence of gravity.

* Q: I don't care about the restrictions. It is not possible to write
  my answers when these restrictions are imposed. 

* A: It is certainly possible writing answers with these restrictions
**because the teaching staff has already written the answers.** If you
think it is not possible, you do not understand the materials.

* Q: I do not care. I must change the files that say, "DO NOT modify
  this file".

* A: You will probably receive zero if you change these files.

* Q: What is the most importance advice you would give?

* A: This course is harder than most students expect. It is extremely
  unlikely that you can finish an assignment quickly. Start homework
  as soon as possible.

* Q: What is your second most important advice?

* A: Understand: "Spend time to save time." Many students want to
  rush. They start coding without studying or thinking. They do not
  spend time learning debugger.  If you rush, it will take longer.


WARNINGS: Your Programs Must Not Crash and Must Not Leak Memory
===============================================================

Your program must not crash and must not leak memory in any case.
Memory management is an essential part of writing good C programs.  If
you cannot manage memory, you cannot write good C programs.

You will lose 1 point for every leaked byte. If your program leaks
memory, it is very likely that you will receive zero.

You know exactly how to check memory errors: using `valgrind` . If
your program leaks memory, it is like an airplane that leaks fuel.
Would you take a flight if the plane leaks fuel?  Your program *DOES
NOT* work. Don't fool yourself and claim that your program works.
Talk to professional software developers. Everyone will tell you
memory leak is *unacceptable*.

Keep An Open Mind: It is possible that your programs are wrong
==============================================================

Do not say, "My program works fine when I test it. I am 100% sure my
program is correct.  My program is absolutely perfect."  Many people
have said that and so far all of their programs have bugs.  The
teaching staff accepts the possibility that the grading programs may
be wrong. Please also open your mind and accept the *possibility* that
your program *may* be wrong.  Before you get angry and think you are
not treated fairly, understand what happens.  The teaching staff
provides all information you need to test your programs.

Computers are Stupid, By Design
===============================

Computers are designed during the second World War and Cold War to
control weapons. As a result, computers are stupid by design.
Computers do exactly what programs tell them to do.  Computers cannot
guess your mind. Computers cannot tolerate "small" mistakes.

Know Your Friends: Everyone in Class
====================================

The teaching staff and your classmates are your friends.  They want to
work with you and help you become a professional software developer.
Many studies have demonstrated that people learn more effectively in
friendly environments.  There is a worldwide severe shortage of good
software developers.  When everyone helps everyone become a better
software developer, everyone benefits.


Regrading Requests
==================

The only way to request regrading is to fill a regrading request in
Blackboard. The regrading request needs detail information to help
understand what is wrong.  This is a large class. Things must be
handled systematically.  If you do not provide the information, it is
not possible for the teaching staff to understand what happens.

*DO NOT TALK* to the teaching assistants or the instructor and demand
regrading.  Filling the regrading request is the only way.

The regrading request will be processed approximately once a
week. Your patience is appreciated.

Your Rights
===========

ECE 264 is a large class and unintentional mistakes are possible.  It
is unlikely that these mistakes are targeting any specific students.

If you think you are treated unfairly, you can report to the associate
head of ECE for education.  If you are unsatisfied at the results, you
can report to the associate dean of Engineering for education.  If you
are unsatisfied at the results, you can report to the Dean of Students
or the associate provost of education.  

Special Considerations
======================

If you need special considerations, Purdue has several offices
evaluating each student's needs. Please contact Purdue Testing Center
or Office of the Dean of Students. The professionally trained experts
can help you identify the best resources meeting your needs.

The ECE 264 teaching staff will accommodate students based on the
recommendations of the relevant offices.  The teaching staff is not
trained to handle students with special needs.




