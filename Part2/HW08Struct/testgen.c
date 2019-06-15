// ***
// *** test generator, for your reference
// ***
// *** You do not need to do anything with this file
// *** You MUST NOT submit this file. If you submit this file,
// *** you will receive 2 point penalty.


#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include <time.h>
#include "hw08.h"

int main(int argc, char * * argv)
{
  // argv[1]: number of vectors
  // argv[2]: name of output file (binary)
  if (argc != 3)
    {
      return EXIT_FAILURE;
    }
  int numElem = (int) strtol(argv[1], NULL, 10);
  if (numElem <= 0)
    {
      return EXIT_FAILURE;
    }
  Vector * vecArr;
  vecArr = malloc(sizeof (* vecArr) * numElem);
  if (vecArr == NULL)
    {
      return EXIT_FAILURE;
    }

  // assign the attributes
  srand (time(NULL));
  int ind;
  for (ind = 0; ind < numElem; ind ++)
    {
      // set the values between -49 and 50
      vecArr[ind].x = (rand() % 100) - 49; 
      vecArr[ind].y = (rand() % 100) - 49; 
      vecArr[ind].z = (rand() % 100) - 49; 
    }
  // print vector in text (to display)
  printVector(vecArr, numElem);
  bool rtv = writeVector(argv[2], vecArr, numElem);
  if (rtv == false) // read fail
    {
      free (vecArr);
      return EXIT_FAILURE;
    }
  free (vecArr);
  return EXIT_SUCCESS;
}

