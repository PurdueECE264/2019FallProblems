// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#define NUMCHAR 256
bool countChar(char * filename, int * counts, int size);
void printCounts(int * counts, int size);

int main(int argc, char * * argv)
{
  // read input file
  if (argc != 2)
    {
      return EXIT_FAILURE;
    }
  int counts[NUMCHAR] = {0}; // initialize all elements to zero
  bool rtv;
  rtv = countChar(argv[1], counts, NUMCHAR);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  printCounts(counts, NUMCHAR);
  return EXIT_SUCCESS;
}

