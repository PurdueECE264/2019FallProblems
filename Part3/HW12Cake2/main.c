// ***
// *** DO NOT modify this file
// ***
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h>
#include "hw12.h"

int main(int argc, char * * argv)
{
  if (argc != 3)
    {
      fprintf(stderr, "need two numbers\n");
      return EXIT_FAILURE;
    }
  int valn = (int) strtol(argv[1], NULL, 10);
  int valk = (int) strtol(argv[2], NULL, 10);
  if ((valn <= 1) || (valk <= 1))
    {
      return EXIT_FAILURE;
    }
  ListNode * head = NULL;
  head = createList(valn);
  eliminate(head, valk);
  return EXIT_SUCCESS;
}

