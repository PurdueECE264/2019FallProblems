# ***
# *** Please modify this file and check what would happen
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
COVERAGE = -fprofile-arcs -ftest-coverage
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) $(COVERAGE)
# This is a comment (starting with #)
# By defining a symbol for GCC, it is not necessary typing
# the long command with flags all the time.

# Which operations to test by defining the symbols
# Please remove one or more of them and test the program
TESTFALGS = -DTEST_ADD -DTEST_SUB -DTEST_MUL -DTEST_DIV -DTEST_MAIN

# list all .c files
SRCS = add.c div.c mul.c  main.c solution.c sub.c

# object files are created by converting .c to .o
OBJS = $(SRCS:%.c=%.o)

main: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o main
	# without -c means linking to create the executable
	# the executable is after -o and is called main
	# By convention, executable in Linux has no extension
	# (no .exe)

# convert .c to .o 
.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 
	# -c means compilation only (creating object file)
	# no linking

testall: testadd testsub testmul testdiv

testadd: main
	# main here to ensure the executable is up-to-date
	./main 4 5 A > add1.out
	diff add1.out add1.correct
	./main -2 17 A > add2.out
	diff add2.out add2.correct

testsub: main
	./main 4 5 S > sub1.out
	diff sub1.out sub1.correct
	./main 7 26 S > sub2.out
	diff sub2.out sub2.correct

testmul: main
	./main 4 5 M > mul1.out
	diff mul1.out mul1.correct
	./main 7 26 M > mul2.out
	diff mul2.out mul2.correct

testdiv: main
	./main 240 5 D > div1.out
	diff div1.out div1.correct
	./main 70 26 D > div2.out
	diff div2.out div2.correct

coverage: testall
	gcov $(SRCS)

clean: # remove all machine generated files
	rm -f main *.o *.out *gcda *gcno *gcov

# DO NOT DELETE THIS LINE -- make depend depends on it.

# determine the dependence of headers

depend:
	makedepend $(SRCS)

