// ***
// *** Please modify this file and check what would happen
// ***

#ifndef PA01_H
#define PA01_H
// Every header file (ending with .h) starts with
// #ifndef [the file's name (conventionally, uppercase)
// #define [the file's name (conventionally, uppercase)
// and ends with
// #endif
#include <stdio.h>
// The purpose of a header is to declare functions and new types.
// New types will be explained later this semester

// In the exercise, four functions are declared (not defined) here.
// A function declaration has
// 1. the return type (such as int)
// 2. the function's name
// 3. the list of arguments
// ends with a semicolon (i.e., no implementation)
// Functions should be defined (i.e., implementated) in C files,
// not header files.
long addop (long a, long b);
long mulop (long a, long b);
long subop (long a, long b);
long divop (long a, long b);
#endif
