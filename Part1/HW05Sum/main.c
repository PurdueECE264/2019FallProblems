// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include "hw05.h"

int main(int argc, char * * argv)
{
  // argv[1] is the input file name
  // argv[2] is the output file name
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }
  int sum; // not initialized
  bool rtv;
  rtv = addFile(argv[1], & sum);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  rtv = writeSum(argv[2], sum);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}

