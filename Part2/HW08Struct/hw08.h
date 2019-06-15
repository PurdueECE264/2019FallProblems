// ***
// *** DO NOT modify this file
// ***

#ifndef HW08_H
#define HW08_H
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
  int x;
  int y;
  int z;
} Vector;


int countVector(char* filename);
bool readVector(char* filename, Vector * vecArr, int size);
bool writeVector(char* filename, Vector * vecArr, int size);
int compareVector(const void *p1, const void *p2);
void printVector(Vector * vecArr, int size);
#endif
