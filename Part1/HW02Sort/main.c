// ***
// *** DO NOT modify this file
// ***

//This should be the master.
//Changes in branch2
//These are my changes in the issues branch

#include <stdio.h>  
#include <stdlib.h> 
#include <string.h> 
#include <stdbool.h>
#include "sort.h"

void printArray(int * arr, int size)
{
  int ind;
  for (ind = 0; ind < size; ind ++)
    {
      fprintf(stdout, "%d\n", arr[ind]);
    }
}

int main(int argc, char * * argv)
{
  // read input file
  if (argc != 2)
    {
      fprintf(stderr, "need the name of input file\n");
      return EXIT_FAILURE;
    }
  // open file to read
  FILE * fptr = fopen(argv[1], "r"); 
  if (fptr == NULL)
    {
      fprintf(stderr, "fopen fail\n");
      // do not fclose (fptr) because fptr failed
      return EXIT_FAILURE;
    }
  // count the number of integers
  int value;
  int count = 0;
  while (fscanf(fptr, "%d", & value) == 1)
    {
      count ++;
    }
  fprintf(stdout, "The file has %d integers\n", count);
  // allocate memory to store the numbers
  int * arr = malloc(sizeof(int) * count);
  if (arr == NULL) // malloc fail
    {
      fprintf(stderr, "malloc fail\n");
      fclose (fptr);
      return EXIT_FAILURE;
    }
  // return to the beginning of the file
  fseek (fptr, 0, SEEK_SET);
  int ind = 0;
  while (ind < count)
    {
      if (fscanf(fptr, "%d", & arr[ind]) != 1)
	{
	  fprintf(stderr, "fscanf fail\n");
	  fclose (fptr);
	  free (arr);
	  return EXIT_FAILURE;
	}
      ind ++;
    }
  fclose(fptr);
  ssort(arr, count);
  // call checkOrder to see whether this function correctly sorts the
  // elements
  if (checkOrder(arr, count) == false)
    {
      fprintf(stderr, "checkOrder returns false\n");
    }
  printArray(arr, count);
  free (arr);
  return EXIT_SUCCESS;
}

