# ***
# *** DO NOT modify this file 
# ***

WARNING = -Wall -Wshadow --pedantic
ERROR = -Wvla -Werror
GCC = gcc -std=c99 -g $(WARNING) $(ERROR) 

TESTFALGS = -DTEST_COUNTWORD # -DDEBUG

SRCS = main.c filestr.c
OBJS = $(SRCS:%.c=%.o)

# diff -w means do not care about space

hw06: $(OBJS) 
	$(GCC) $(TESTFALGS) $(OBJS) -o hw06

.c.o: 
	$(GCC) $(TESTFALGS) -c $*.c 

testall: test1 test2 test3 test4 test5 test6

test1: hw06
	./hw06 inputs/input1 "on" > output1
	diff -w output1 expected/expected1

test2: hw06
	./hw06 inputs/input2 "t" > output2
	diff -w output2 expected/expected2

test3: hw06
	./hw06 inputs/input3 "ly" > output3
	diff -w output3 expected/expected3

test4: hw06
	./hw06 inputs/input4 "ss" > output4
	diff -w output4 expected/expected4

test5: hw06
	./hw06 inputs/input5 "the" > output5
	diff -w output5 expected/expected5

test6: hw06
	./hw06 inputs/input6 "aa" > output6
	diff -w output6 expected/expected6


clean: # remove all machine generated files
	rm -f hw06 *.o output*


