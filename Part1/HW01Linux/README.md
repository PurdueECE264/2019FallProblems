# Welcome to ECE 264

This assignment is mostly reading (and little coding). You will answer
questions in Blackboard.

It is extremely important that you read this assignment very very
(very) carefully.  This assignment is the foundation for the entire
semester.  You will need to refer to this assignment often throughout
the semester.  It is common that students make careless mistakes even
though this assignment clearly warns students to avoid these mistakes.
It is advised that you read this assignment again and again.  **It is
your responsibility fully understanding the requirements and follow
the rules precisely.** If you do not follow these rules precisely, it
is very likely that you will lose many, possibly all, points.

You will find this course challenging and rewarding.  Some recruiters
and hiring managers specifically ask candidates "Have you taken ECE
264?"  You will learn many concepts, skills, and tools useful in
industry.  ECE264 can be a turning point in your career. If you pay
attention to **details** and follow the instructors' advice, you may
find software development a rewarding experience.  If you insist
keeping the old (and wrong) way of doing things, you will feel
frustrated and even angry.  This course is designed for professionals
and you must accept that professionals do things differently from
amateurs.  The assignments in ECE 264 are too large for you (or
anyone) to start coding without a good plan.  It is critical to plan
before typing any code.  When writing small programs, many people
adopt the "coding and then debugging" approach.  This will not work in
ECE 264. The programs in ECE 264 are too complex and too many places
can be wrong.  Without a good plan, it is extremely difficult to write
correct programs.

You need to understand that computers are "designed to be completely
stupid".  Computers were invented during the Cold War to control
weapons and computers must do precisely what programmers instruct to
do.  Computers do not understand "small" mistakes or "big"
mistakes. For computers, all mistakes are big mistakes.


A general rule in ECE 264 is **the sooner you start coding, the more
time you spend and the lower score you get**.  Many (millions) people
have learned programming and become professional software
developers. They understand the importance of planning before coding.
You will not be the first exception.  DO NOT EVEN TRY. You must plan
before coding.

ECE 264 is "Advanced C Programming". It is designed for the students
that consider to pursue careers in software development.  Many former
students say this course is helpful in interviews for summer intern
positions, or regular positions.  ECE 264 is not designed for the
general public and it is not an introductory course.  ECE 264
emphasizes understanding and discourages *memorization without
understanding*.

# DO NOT REINVENT WHEEL 

It is important to understand the difference between "learning" and
"re-inventing" (or "re-discovery"). Some students think
"trial-and-error" is learning.  This is wrong.  You do not have to
throw your computer out of the window of a tall building and break it
in order to rediscover gravity. 

You can find the electronic version of Dr. Lu's book (Intermediate C
Programming by CRC Press,
https://www.safaribooksonline.com/library/view/intermediate-c-programming/9781498711647/?ar).
Please go to Purdue Library web and search the book.  If you prefer a
physical copy, please go to WALC (Wilmeth Active Learning Center) to
check it out.  You should read the book before attempting to write any
code.  You can save a lot of time by reading the book and learning
what is correct without making common mistakes.  You should also
attend **every** lecture because the instructors have seen many common
mistakes and will tell students how to avoid these mistakes.

There are many well-understood principles writing better programs.
These principles have been discovered and tested for decades. You
should following these principles. Do not imagine that you would be an
exception. Do not imagine that you will reinvent the software industry.
You will not. At least, not yet. You need to know how things are done
before you can make any improvement.  If you do not follow these
principles, you will certainly encounter unnecessary difficulty.

You need to write many more programs in addition to required
assignments. To be successful, you should write code that is not
needed for homework for the purpose of practice.  Consider a
basketball team in which the players touch basketballs only during
games. They never practice before any game.  That would sound crazy,
right?  If you write code for the homework only and nothing else,
isn't it the same as touching a basketball only when you have a game?

There is no definite rule about how much additional code you need to
write.  A rule of thumb would be 1-5 ratio: for every line of code you
write for homework, you write 5 lines that are not submitted.  The
most difficult part of writing a complex program is integration, i.e.,
putting pieces together.  Before you integrate multiple parts, you
must ensure that each part is correct.  Doing so requires writing
additional code for testing each part.

Each homework gives you *some* test cases. It is very likely that
these test cases do not cover all possible scenarios.  It is very
likely that your program passes all given test cases and fails some
additional test cases.  Thus, **you must write additional test cases**
to cover scenarios that are not covered by the given test cases.
Observations suggest that

* If you want to get A, you have to write at least twice more
  test cases than the given ones.

* If you want to get B, you have to write several more test cases.

* If your program passes all given test cases, you will likely get C.

* If your program fail one or two given test cases, you will likely
get D.

* If your program fail three or more given test cases, you will likely
get F.

# Learn Tools to Help You 

Imagine that you walk into a hospital and the doctors diagnose by
their eyes without any medical instruments, no ultrasounds, no x-ray,
no MRI.  Imagine that an observatory has no telescope.  Imagine that
an electronic lab has no oscilloscopes.  Without these tools, how can
one know what is going on?  The same applies to software development.
This course will cover a wide variety of tools that will make writing
correct large programs easier.  You need to learn these tools.  Do not
intend to debug using your eyes.  Before you learn any tool, you need
to understand the purposes of these tools.  These tools can help you
improve your programs and detect potential problems.  Even though
learning these tools takes time, these tools can save you much more
time. Some students skip learning these tools hoping to save time, but
they spend much more time debugging their programs.

If you think you can save time by not learning tools, you are wrong.
Some students refuse to learn tools and use `printf` as the only way
for debugging.  These students usually get C or lower grades.  Do not
fool yourself.  You will not be the first exception. Do not try.

 This following story may help you understand why it is so important
 using the right tools. Imagine that two Purdue students want to
 attend a conference in Seattle (latitude 47.6062N). West Lafayette's
 latitude is 40.4259N. In other words, Seattle is north of West
 Lafayette. Student A drives along I-65 North. Student B drives along
 I-65 South to the Indianapolis Airport.  After one hour, A is closer
 to Seattle than B.  After two hours, B is still waiting at the gate
 and A is even closer to Seattle than B.  B will land in the Seattle
 Airport several hours later and A is still driving.  Why can B reach
 Seattle earlier than A?  Because B uses a better tool called
 *airplane*.  A thinks driving north will make progress sooner but A
 will spend several days driving to Seattle.  The point is that you
 **need to learn tools and when to use the right tools**.


Learn touch typing (typing without looking at keyboard). If one types
2 keystrokes per second and another needs 3 seconds per keystroke, it
is likely the former can finish correct programs faster.  Learn using
hotkeys, instead of mouse.  When you use a mouse, your hand has to
move from keyboard and move back. This takes time. Learning touch
typing and remembering hotkeys will take several hours, you will save
thousands of hours in the coming years.

# Understand Yourself 

Should everyone become professional athletes? Lawyers? Police?
Medical doctors? Truck drivers? Pilots?  The answer is probably no.
Why should everyone become software developers?  Maybe you think you
want to be a professional software developer.  This course is an
opportunity for you to understand yourself.  Maybe you would enjoy
software development; maybe you would not. Failing a programming class
is not a failure in life. Maybe you will find another career path that
is more rewarding and fulfilling.

# Partial Credits

This class will give as many partial credits as possible for the
purpose of encouraging learning.  However, you must understand that
**partial credits do not exist in the real world.**
Many students think "If I have done 90% work, I should get 90%
points." This is completely wrong.  Imagine that you want to buy a car. It has
everything except windshield wipers. A car dealer says, " I will sell
you the car with $30 discount." Would you buy that car?  Imagine that
you want to buy a computer and the keyboard misses one key (out of 100
keys). Would you pay 99% of the price to buy this computer? You would
not, right?

Another common misunderstanding is how scores are assigned.  Some
students think "amounts of efforts" or "amounts of time spent" should
be part of the grade. Some students go to instructors and say, "I
spent a lot of time on this. Can I get some points?"  Some students
also get confused between personal preference and grades. Some
students tell instructors, "I really like this class. Can you give me
a higher score?" Is that reasonable?  The question is "How is it
possible to grade by effort, time, or personal preference
**objectively**?"  Who can measure it?  If you think about a question in
homework when you walk, does that time count? If you come out a
solution after a good night of sleep, should the sleeping time be
counted?  If you have a dream that is not related to the question,
should the time during that dream be excluded?  It is impossible to
count effort or time.  It is also unfair to grade based on how much a
student has learned.  Imagine two students: One spends a lot of time
writing a program but the program does not work. Another student
spends little time but the program works.  Should the first student
gets a higher score than the second one?  It is not possible measuring
effort or time. Thus, this class (and all other classes) measures by
"output": does your program work or not.  This is the only objective
way for measurement.

The instructors do not make these rules.  These are the rules in the
real world.

The instructors *want* to give you partial credits for the purpose of
encouraging you to learn. However, in many cases, it is not possible
to give you partial credits.  If your C program misses a semicolon,
the program may fail to compile and there is no possibility giving any
partial credit because the program cannot run.

Please understand that this is a large class and students' submissions
are graded by computer programs.  Your submissions must meet the
specification precisely. Any "trivial" differences (you think it is
trivial but computer programs may disagree) can make you lose points.

If you want to get partial credits, you need to understand how your
submissions are graded. This assignment intends to provide the
information.  Please read this assignment carefully.

Never say, "If you make that change, my program works perfectly."  The
teaching staff is strictly prohibited from making any change to
students' submissions before grading.  Your score depend on what is
submitted by you, nothing else.

After fully understanding the current grading systems, you are welcome
to suggest better ways to give partial credits.  Your suggestions must
be scalable: It must be able to grade the submissions from several
hundred students within several hours.  Asking teaching assistants to
read each student's code, understanding and correcting errors, would
not be an acceptable solution.  


Learning Tools
==============

This assignment will help you learn some most widely used tools:
`git`, `gcc`, `gcov`, and `make`.

You will learn to
* Manage source code using the git version control tools
* Detect likely mistakes using gcc warnings
* Write a program that has multiple files
* Understand how programming assignments are graded
* Build a program and run multiple tests at once
* Use conditional compilation to turn on and off sections of code
* Use gcov to find untested code


Video Lectures
==============

Please watch "Linux and C Programming" at
[this website](https://engineering.purdue.edu/HELPS/ResearchAdvice/index.html).

Version Control
===============

Have you ever spent hours writing code (or a report) only to realize,
when your computer crashes, that you haven't saved your progress? Have
you ever spent an hour making a change to a program only to realize
that the new features did not work and you had to go back to the way
the code was an hour ago? Version control helps solve these problems.

Every non-trivial program is written in stages. To write a good
program, you need to divide it into stages and finish one stage at a
time. After you finish one stage, test it to ensure that it works
and then **commit** a version so that you have a record. Version
control provides many advantages. One of them is a simple way to back
up your code.  If, for any reason, you want to go back to a previous
version, it is very easy. Version control does many more things than
backing up your code.

Please understand that you must commit changes often if you want to
use version control. If you do not commit, version control cannot help
you.  It is common to commit everyday or every hour.  You can even
`commit` buggy code, as long as you do not `push`.


Some people send their programs to themselves as email
attachments. Some other people create zip files called v1.zip, v2.zip,
.... If you are one of them, it is time to change.  Version control
provides *line-by-line* comparison of different versions.  This
feature is unavailable when you use email attachments or zip files.

This class uses `git` for version control. Git is a distributed
version control system. That means there are two repositories: local
and remote. When you **commit** changes, only the local repository is
changed. This makes commits fast without network connections.  If your
computer is damaged, you still lose the local repository.

To change the remote repository, you need to **push** the changes.  If
your computer is damaged, you can retrieve the code from the remote
repository.

Github is a cloud-based service for remote repositories.

Please read the guide at github about how to use version control.

https://guides.github.com/

In this class, homework assignments are distributed using a *public*
repository in github: everyone can see the files but only the teaching
staff can modify the files.

You are *encouraged* but *not required* to use version control
managing your own code. If you do use version control (in particular
github), it **absolutely critical** that your repository is
**private**.  You can request *free* [private
repositories](https://education.github.com/) by using your Purdue
account.  You **must** keep your repository for ECE 264 private.  If
your repository is public, everyone can see your solutions.  If anyone
copies your solutions, you will receive penalty because you give away
your solutions.  "I do not know that my repository is public" is not
an acceptable excuse because this paragraph already explains to you
how to make it private.

Since you are advised to use version control, the instructors will not
accept any excuse like "I accidentally deleted my code" or "my
computer crashed" for an extension.  **Do not ask because such
a request will never be accepted.**

If there is any doubt about academic dishonesty, your commit history
would be an important piece of evidence proving your innocence.
Version control can demonstrate that you make small and steady
progress (instead copying a large chunk of code at once).  This is
another reason why you must commit and push often.

`gcc` warnings
==============


Before you write any program, you must assume that the program will
have many mistakes and develop strategies to prevent, detect, and
remove the mistakes.

When you write a program, you create text files. These text files are
not computer programs.  To convert the text files from human-readable
to machine-readable format, you need to use a *compiler*. This class
uses `gcc` for the compiler.

`gcc` takes one or several `.c` files as input.

You can  specify the output file's name by adding

`-o name`

If you do not specify the name, the default name is called `a.out`

Please be careful **not** to use the file you write as the output's name, 
for example

`> gcc myprogram.c -o myprogram.c`

This will **erase** `myprogram.c`.  You definitely do not want to do this.

Also, do not use `test` as the name of the output because `test` is a
command in Linux.  When you run `test`, is it your program or the
Linux command? The answer depends on your *path* settings.  If you do
not understand what *path* means, that's all right for now.  Just do
not use `test` as the output of `gcc`.

If you read the manual (also called the "man page") of `gcc`, you can
find many options.  In this class, you should **always** use `gcc` in the
following way.

`> gcc -std=c99 -g -Wall -Wshadow -pedantic -Wvla -Werror`

* `>` is the command prompt
* `-std=c99` means using the C standard announced in 1999
* `-g` means enabling debugging
* `-Wall` means enable warning messages
* `-Wshadow` means detecting shadow variables
* `-pedantic` means restricting standard C
* `-Wvla` means detecting variable length array
* `-Werror` means treating warnings as errors 

You should create an *alias* in Linux (or use `make` as explained
below) so that whenever you use `gcc`, all these options are
automatically added.  If you do not know how to create an alias in
Linux, look it up on the Internet.  If you do not create an alias, it
is very likely that you forget some parts of the long command.  It is
very important to use `gcc` this way to detect mistakes. In almost all
cases, the warnings by `gcc` indicate serious problems.  This is your
first "line of defense" writing good programs.  There were many cases
when students forgot to use these options, failed to detect these
problems early, and spent many hours later debugging.

Here are some common warning messages:

* create a variable but never use it (most likely it is mistyped)
* create a function but never use it (most likely it is mistyped)
* read a variable before a value is assigned (C does not initialize
   variables. If a variable is not assigned, its value is garbage, not
   necessarily zero.)  Please be aware that `gcc` does not *always* detect
   uninitialized variables. You cannot rely on `gcc` completely.
* write code that can never be reached (for example, after `return`)
* assign a value to a wrong type
* create two variables that have overlapping scopes (called *shadow variables*)

You must remove all warning messages. In grading, you lose 5% for **each** 
warning message.  If your program has 20 warning messages, you get zero.

Why is ECE 264 so strict about warning messages? They are very easy to
use (simply by adding these flags after `gcc`) and they detect many
bugs.
  
Conditional Compilation
=======================

In some cases, you want to turn on or off sections of code. For
example, you may want to print messages showing the progress and
status of your programs, such as

`printf("The value of x is %d\n", x);`

Such a message should not occur after you finish the
programs. Deleting these messages manually can be tedious and
dangerous. When you delete the messages, you may *accidentally* delete
other lines and the program does not work any more. (This occurs quite
often in ECE 264.)

Fortunately, there is an easy solution: enclose the message by
conditions using `ifdef` and `endif`:

```
#ifdef MESSAGE
printf("The value of x is %d\n", x);
#endif
```

If you add `-DMESSAGE` after `gcc`, this line is included in the program.
If you do not add `-DMESSAGE` after `gcc`, this line is excluded in the
program. What does `-DMESSAGE` mean? `-D` means defining the `MESSAGE`
symbol.  If `MESSAGE` is defined, the `#ifdef` condition is true and that
line is included.

You can define multiple symbols. For example, if you want to test two
different solutions of the same function, you can do the following:

```
#ifdef SOLUTION1
void func(....) // solution 1
{
	....
}
#endif

#ifdef SOLUTION2
void func(....) // solution 2
{
	....
}
#endif
```

If you have `-DSOLUTION1` after `gcc`, the first solution is included.
If you have `-DSOLUTION2` after `gcc`, the second solution is included.

If you have neither, neither solution is included.  You will get an error message
because `gcc` does not know how to handle the call of `func`.

If you have both `-DSOLUTION1` and `-DSOLUTION2`, you will get another
error message because `gcc` has two options and does not know which
one to use.

You can also use `ifndef` (notice `n` between `if` and `def`).


```
#ifndef MESSAGE
do something
#endif
```

This program will "do something" if `MESSAGE` is *not* defined in `gcc`.

If you add debugging messages, please make sure the messages are
enclosed by `ifdef` and `endif` using a symbol that is different from
the program's requirement. If your program prints anything that is not
required, you will lose points.

Multiple Files
==============

Every non-trivial system is composed of multiple components.

C uses two types of files: header (`.h`) and source (`.c`). Header
files contain declarations of functions and types. Source files
implement functions. Header files are "included".
If `header.h` is created by you, use

`#include "header.h"`

If a header file is available from the
C language, use

`#include <header.h>`

Please notice the difference using `""` and `<>`.  Source files are
"compiled" and "linked".  To link source files, simply put the list of
source (.c) files after `gcc`.

You should
**never** put a .h file after `gcc`.  You should **never** include a .c file.

As your programs become even larger, compiling every source file after
only a few changes becomes problematic.  Imagine that you need to
spend an hour compiling a large program (such as an operating
system) if you have changed only one line.  To solve this problem, C
adopts a two-stage process:

1. Source files (.c extension) can be converted (called *compilation*) into an intermediate format called
*object files* (.o extension).

2.  Object files are *linked* to create the program (also called *executable*).

By convention, an executable file in Linux has no extension (no `.c`,
no `.h`, no `.exe`).  If only one line in one source file is changed,
only this source file needs to be compiled.  Then, the object files
are linked.  Compilation has done a lot of work already and linking
object files can be much faster (maybe only a few seconds).

`make`
======

By now, you may feel that there is a lot of work to do before you
write any code.  If you feel that you need to type a lot of things
after `gcc`, you are correct.  Fortunately, many tools have been
created to greatly simplify things.

All you need to do is five keystrokes: `make [Enter]`.

`make` is a Linux command.  You need to write a file telling `make` what
to do. This file, by convention, is called `Makefile`.

`Makefile` can also specify the sets of tests to run.

`Makefile` may contain multiple sections.  Each section has three parts:

```
target: dependence
[TAB] action
```

For example

```
testgen: testgen.c testgen.h
	 gcc testgen.c -o testgen
```

This means the program `testgen` depends on `testgen.c` and
`testgen.h`. If either `testgen.c` or `testgen.h` is changed, `gcc`
will be called to compile `testgen.c` and generate `testgen`. Note
that it is important that a TAB character is before the action (not
spaces).

You can define symbols in `Makefile`. For example,

`GCC = gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror`

defines the flags mentioned earlier.

Please carefully study the `Makefile` included in this
assignment. Note, especially, the first few lines of the
`Makefile`. These define symbols that can be used elsewhere to avoid
typing the same thing over and over again. We use `GCC` in the rest of
`Makefile` to make sure that whenever we invoke `gcc`, we use the
command line flags specified above.

You can use symbols for symbols, for examples:

```
DEBUGFLAGS = -DTEST_FUNC1 -DTEST_FUNC2 
CFLAGS = -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror
GCC = gcc $(CFLAGS) $(DEBUGFLAGS)
```
This is equivalent to

`GCC = gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror -DTEST_FUNC1 -DTEST_FUNC2`

**Warning** Your learning experience of this class to great extend depends on
  whether you can take advantage of `Makefile` or not. Some students
  do not pay attention to `Makefile` and spend much more time than
  necessary on homework assignments. Some students do not take
  advantage of `Makefile` for testing and fail many test cases.  If
  you are familiar with `Makefile`, learning ECE 264 is much more
  pleasant.


Test Coverage
=============

You would not write code for no purpose. You would think every line of
code does something meaningful. However, sometimes, a program's
conditions make certain portions of code unreachable. This is called
"dead code". Here are two examples of dead code.

```
if ((x > 1) && (x < 0))
{  
   // cannot reach here
}

int func(...)
{
    return ...;
    // whatever after return cannot be reached
}
```

Sometimes, the program's execution flow is not expected. Consider the
following example.

```
if (x > 0)
{
    // do something 
}
else
{
    // do something else
}
```

You may expect that `x` is greater than zero and the program should
"do something".  However, `x` is actually not greater than zero and
the program does "something else".  You can use many methods to detect
such an unexpected program execution flow. One of the methods is
called *test coverage*.  If `x` is not greater than zero, then the
code `do something` within the braces is not tested.

To use `gcov`, add

`-fprofile-arcs -ftest-coverage`

after `gcc`.

Then, execute the program as normal.  To see the coverage of a particular
source file type

`> gcov filename.c `

If any line is marked `#####`, this line is not tested.

How to Write High-Quality Software
==================================

If you ask the students that have taken ECE 264, many will tell you
that ECE 264 "transformed" them from casual programmers to serious
software developers.  To put it another way, in ECE 264, you learn how
to develop serious software that may be used by others.

Do you notice the selection of words? Programmer and Software
Developer?  Are they different? Yes, they are different.

Developing software is much more than writing code (i.e.,
programming).  As a rough analogy, developing software is like
building a house and writing code is like laying bricks. Building a
house is much more than laying bricks.  Before laying down bricks, you
need to design the house. How many floors? Is there a basement?  How
many rooms? Is there a garage?  How would electrical wires, air flow,
and water pipes be connected?

Imagine laying bricks for a house before you have a design. It would
be a total disaster.  Many students, however, want to start writing
code before they have designed the software.  The results would be
predictable failures.

Many students mistakenly believe that they should spend most time
debugging.  They want to write code quickly and then debug. This is
completely wrong.  This is like building a house first, demolish some
parts, rebuild, demolish some other parts, and rebuild.  Imagine that
a house has been built and the owner discovers that there is no
electric sockets for the kitchen. How much effort (and money) would be
needed to correct this mistake?  This is crazy and, frankly, stupid.
**You should spend most time designing, not debugging.**

Design before writing code. This is the rule. You will not be the
first person to break this rule. Do not try.

Many students think developing software is about creativity and they
cannot be restricted by rules.  This is also wrong.  Every creative
person must fully understand their tools and the boundaries of these
tools.  A musician must know many melodies. A painter must know how
colors interact. A gymnast needs to follow the law of gravity.  An
interior designer must understand sunlight and seasons.  A software
developer needs to understand the process of creating software.

Remember: spend time on design, not on debugging.  

Another common mistake is to start coding without reading and
understanding the entire assignment's requirements.

Every software developer needs to know debugging process.  The best
strategy, however, is to prevent bugs through careful design. Then, it
is important to detect bugs *automatically* by writing testing code.

Testing and 1-5 Rule
====================

When you design software, you need to think about how to test. 

Software developers frequently write code that is *never* shipped to
customers.  Why? The software developers write code to test the
functionality that is actually shipped to the customers.  The testing
code ensures that the customers get correct programs.

How to write testing code?  There are a few rules.  First, **do not
embed testing code inside the functional code**. What does this mean? Suppose
you need to write a function called `func`, **do not** write it this way

```
... func(...)
{
   // do some work
   // test whether everything is correct so far
   // do some more work
   // test whether everything is still correct
   ...
}
```

*Why is this bad?* It mixes real work and tests. When you need to ship
the finished program to your customers (or submit for grading), your
program will be full of testing code that can potentially slow down
your program and make it unusable.  Some 264 students print debugging
messages but submit the programs with these additional messages and
lose points.  Remember, the grading programs are very stupid. If your
program does anything different (such as printing unwanted message)
from the specification, you lose points.

Some students say they should not lose points by printing *additional*
  message. This is wrong.  Imagine that you want to attend a friend's
  wedding in London and take a flight from Chicago.  The plane does
  not land in London and instead lands in Frankfurt.  The captain
  says, "We fly longer than what you wanted. Do not complain."  Would
  you be unhappy when this occurs and you miss the wedding?  If so,
  you should not be surprised when you lose points when your program
  prints additional, unwanted, messages.  

Some students said that they would remove the testing code. They
(almost) always forgot. Worse, they often deleted additional code and
made the programs incorrect. 

Some books encourage readers to use `assert`. **THIS IS WRONG. DO NOT
USE `assert` in production code**.  Here, production code means the
code you submit for grading. The problem of `assert` is that the
program stops immediately without any chance of correction.  Imagine
that flight control software uses `assert` and stops when a plane is
flying!  Some people say "I use `assert` because I know it must be
right." This sentence is self-contradictory.  A programmer puts
`assert` because the programmer *thinks* it should be right but is not
completely sure.  If this programmer is 100% certain it is right, the
programmer would not put `assert` there (because there is no need).
Thus, putting `assert` inside a program is a really bad idea.

If putting testing code inside a function is bad, what is the correct
way of testing code?  The correct way is to **create another function
(or several functions)** and call the function being tested, for example,

 ```
... func(...)
{
   // do some work
   // do some more work
   ...
}

... test_func(...) // in another file, do not put it into the same file
{
   // prepare data needed by func
   // call func and get the result
   // check whether the result from func is correct
   // you can use assert here
}
```

When you ship the finished software (or submit an assignment), you can
simply remove the file for `test_func` without touching `func`.

"This is a lot of work.", you may say. Of course. Who said writing
good software would be easy?  Please name one thing that is worth
doing and requires no hard work.

Welcome. Wake up. Grow up. Writing good software is not easy.  If you
want an easy class, ECE 264 is not for you.

Some people in software industry would tell you the "1-5 rule": for
every line of code that produces the final software shipped to
customers, software developers write another five lines of code for
testing and are never shipped to customers. 

Limit Core
==========

Coredump may be generated when your program terminates abnormally.
Coredump can be a very large file and use up your disk quota.  It is
unlikely that you would debug using coredump. Thus, it is recommended
that you limit the size of coredump to zero.

If you encounter out of disk quota, it is almost certain that you have
a core file somewhere.  Use the following commands to find the core file:

```
cd # go back to the home directory
du -s * | sort -n # list directories and order them by sizes
```

`cd` to the last directory (the one using the most space) and repeat

```
ls  # is a core file here? if not, du again as shown below
du -s * | sort -n # list directories and their sizes
```



Additional Tools to Learn
=========================

Please learn the following tools:

* A good editor. You are encouraged to learn how to use *hot keys*
  (for example, for copy-paste) without using a mouse. Using hot keys
  can *dramatically* reduce the time you spend on editing.

* shell commands, such as `grep`, `awk`, `find`, `mkdir`, `cd`, `mv`,
  `ssh`, `scp`, `diff`, `sort`, `rm`, `cp`, `cat -n`, `man`, `head`,
  `tail`, `more`, `less`.

* Touch typing. If you use only one or two fingers in typing and need
  to look at the keyboard, you will spend a lot of time on
  typing. There are many on-line tutorials about touch typing. Spend a
  few hours learning touch typing and save many thousand hours in the
  coming years.

Grading
=======

In **absolutely no circumstance can the teaching staff modify your
program for grading**.  You cannot say, "If you change this, my
program works." If your program misses a semicolon and cannot compile,
you will receive zero.  Your score depends on what is submitted,
nothing else.

The teaching staff is strictly prohibited checking what is stored in
your computer (or your ECN account) for grading.  Your score depends
on what is submitted.  **NEVER** say "I finished before the deadline
but I forgot to submit".  **NEVER** say "I have not made any change
after the submission deadline." because the teaching staff is not
allowed to look at your files that have not been submitted through
Blackboard.  If a file is not submitted, it cannot be graded. There is
no exception in any case.

It is possible (and likely) that additional test cases will be used
for grading.  If your program fails any of the additional tests, you
will lose points.  It is your responsibility to create additional test cases.

Submitting Your Code through Blackboard
====================

**This assignment (HW01) is not a programming homework. You need to
answer questions in Blackboard.**

All the other homework assignments are submitted through Blackboard.
Before the submission deadline, you can withdraw and submit new
versions. Please understand that once you withdraw a submission,
**there is no record of prior submissions**.  You must submit as soon
as possible.  It is your responsibility submitting before the
deadlines. Blackboard automatically marks submissions as late based on
the clock of the machine that runs Blackboard (not your own watch).

The **only** way to submit homework is through Blackboard.

The instructors will **never** accept any request for exception "*my
submission is only one minute late*".  It is your responsibility to
meet the deadline.  You are strongly encouraged to submit at least ten
minutes before the deadline because submission may take time.

**You must be really careful in submission.** If you fails to submit a
needed file, you will likely get zero.  It is your responsibility
checking whether you submit correctly.  

**DO NOT** send your code by email. Your code will not be graded if it
  is sent by email.  The only way getting scores is submitting code to
  Blackboard.  No exception.

OFFICE and LAB HOURS
====================

It is strongly encouraged to go to the office or lab hours for your
questions. Face-to-face discussion is  much more
efficient than writing long emails.

The teaching staff will NOT answer your questions by email, unless the questions are personal. 

DO NOT SEND YOUR CODE TO TEACHING STAFF
=======================================

Under absolutely no circumstance will the teaching staff (instructors
and teaching assistants) debug your programs without your presence.
Such email is **ALWAYS** ignored.   

If you need help, go to office or lab hours.

CAMPUS EMERGENCY OR EXCEPTION
=============================

If there is a campus-wide situation (such as severe weather or power
outage), the instructors will extend submission deadlines for the
entire class.  If the problem is specific to yourself (for example,
your computer crashes), the deadline will not be extended for you.

If your dog eats your computer, please send your dog to an animal
hospital and ask the doctor to write a document saying that your
computer is inside your dog's body. Without such a document, you still
need to submit assignments before deadlines.

If you encounter an exceptional situation (such as injury in a traffic
accident or serious illness), the instructors will grant extensions
based on the recommendations of the proper authorities (such as
medical doctors or police).  You are responsible providing proper
documents requesting the extensions.

**DO NOT ASK FOR AN EXTENSION** because you will not get it. Do not
  waste your time asking a question whose answer is already known. It
  is **extremely rare** that a particular student receives an
  extension. A general principle is that if you *can* ask for an
  extension, you will *not* get it. If you truly need an extension
  (and can receive one), you are probably in a situation (such as a
  traffic accident) where asking for an extension is not your first
  priority. DO NOT WASTE YOUR TIME AND ASK FOR AN EXTENSION.

It is possible that an extension is given to the entire class, not a
specific person.

The instructors reserve the right to reject any request of
extension. Students have the right to request to the department, the
college, or the university to examine the instructor's decision.

FAIRNESS
========

Before you ask the instructors for any special treatment, please ask
yourself the following question:

*"If the instructors do this to another student but not me, would it be fair?"*

If the answer is no, then do not ask.

SPECIAL SITUATIONS
==================

If you need special consideration, please contact [the Office of Dean
of Students](https://www.purdue.edu/odos/) or [the Student Resource
Center](https://www.purdue.edu/drc/students/index.html). The offices
will evaluate your situation and recommend appropriate accommodation
to the instructor.  


DIFFICULTY OF HOMEWORK
======================

The first several homework assignments are intentionally easier than
the others. The purpose is to give you time to set up your programming
environment, familiarize yourself with the tools, and review the
topics from CS 159 (if necessary).  Later assignments are considerably
more difficult.  It is important that you do well at the beginning of
the semester.  If you do poorly at the beginning, it would be almost
impossible to gain enough points later and get a good grade.

ECE 264 IS "ADVANCED" C PROGRMMING
==================================

If you want to become a professional software developer, ECE 264 is
for you.  If you want an easy course getting a good grade without much
effort, ECE 264 is not for you.

