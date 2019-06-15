// ***
// *** DO NOT modify this file
// ***

#ifndef HW07_H
#define HW07_H
#include <stdio.h>
#include <stdbool.h>
int countInt(char* filename);
bool readInt(char* filename, int * intArr, int size);
bool writeInt(char* filename, int * intArr, int size);
int compareInt(const void *p1, const void *p2);
#endif
