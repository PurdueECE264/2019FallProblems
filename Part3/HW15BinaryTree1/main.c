// ***
// *** DO NOT modify this file
// ***
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

static bool readArray(const char * filename, int * * array, int * size)
{
  FILE * fptr = fopen(filename, "r");
  if (fptr == NULL)
    {
      return false;
    }
  int numint = 0;
  int value;
  while (fscanf(fptr, "%d", & value) == 1)
    {
      numint ++;
    }
  if (numint == 0)
    {
      // no integer to read
      return false;
    }
  * size = numint;
  int * arr = malloc(sizeof(int) * numint);
  fseek (fptr, 0, SEEK_SET);
  int ind = 0;
  while (ind < numint)
    {
      if (fscanf(fptr, "%d", & arr[ind]) != 1)
	{
	  fprintf(stderr, "SOMETHING WRONG\n");
	  free (arr);
	  * size = 0;
	  return false;
	}
      ind ++;
    }
  fclose (fptr);
  * array = arr;
  return true;
}

int main(int argc, char * * argv)
{
  // argv[1]: inorder (input)
  // argv[2]: postorder (input)
  // argv[3]: preorder (output)
  if (argc < 4)
    {
      return EXIT_FAILURE;
    }
  int * inArray = NULL;
  int * postArray = NULL;
  int insize;
  int postsize;
  bool rtv;
  rtv = readArray(argv[1], & inArray, & insize);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  rtv = readArray(argv[2], & postArray, & postsize);
  if (rtv == false)
    {
      free (inArray);
      return EXIT_FAILURE;
    }
  if (insize != postsize)
    {
      // mismatch
      free (inArray);
      free (postArray);
      return EXIT_FAILURE;
    }
  Tree * tr = buildTree(inArray, postArray, insize);
  preOrder(tr, argv[3]);
  freeTree (tr);
  free (inArray);
  free (postArray);
  return EXIT_SUCCESS;
}
