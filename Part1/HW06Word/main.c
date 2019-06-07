// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include "hw06.h"
#define LINELENGTH 80

int main(int argc, char * * argv)
{
  // argv[1] is the input file name
  // argv[2] is the word to be counted
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }
  int sum = 0;
  char * line = malloc(sizeof(* line) * LINELENGTH);
  sum = countWord(argv[1], argv[2], line, LINELENGTH);
  if (sum < 0)
    {
      return EXIT_FAILURE;
    }
  printf("%d\n", sum);
  free (line);
  return EXIT_SUCCESS;
}

