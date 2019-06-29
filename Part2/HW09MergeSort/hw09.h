// ***
// *** DO NOT modify this file
// ***

#ifndef HW09_H
#define HW09_H
#include <stdio.h>
#include <stdbool.h>
bool readData(char * filename, int * * arr, int * size);
bool writeData(char * filename, const int * arr, int size);
void mergeSort(int * arr, int l, int r);
#endif 
