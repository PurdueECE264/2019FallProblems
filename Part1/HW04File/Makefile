# ***
# *** DO NOT modify this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_COUNTCHAR -DTEST_PRINTCOUNTS

SRCS = main.c filechar.c
OBJS = $(SRCS:%.c=%.o)

hw04: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o hw04

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

testall: test1 test2 test3 test4

test1: hw04
	./hw04 inputs/2016 > output16
	diff output16 expected/expected16

test2: hw04
	./hw04 inputs/2017 > output17
	diff output17 expected/expected17

test3: hw04
	./hw04 inputs/2018 > output18
	diff output18 expected/expected18

test4: hw04
	./hw04 inputs/2019 > output19
	diff output19 expected/expected19

clean: # remove all machine generated files
	rm -f hw04 *.o output??


