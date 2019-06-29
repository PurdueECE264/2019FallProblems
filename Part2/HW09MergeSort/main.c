// ***
// *** You must modify this file
// ***

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include "hw09.h"

#ifdef TEST_MAIN
int main(int argc, char * * argv)
{
  // argv[1]: name of input file (binary)
  // argv[2]: name of output file (binary)
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }


  // create a pointer to store the elements read from the input file
  int * arr;
  // size of the array
  int size;

  bool rtv;
  rtv = readData(....); // read the input file, allocate memory
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }

  // call mergeSort
  // be careful about the arguments
  mergeSort(....);


  // write results to the output file
  rtv = writeData(....);
  free (arr);

  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  return EXIT_SUCCESS;
}
#endif
