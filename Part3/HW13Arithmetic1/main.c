// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "calculate.h"

void printList(List * arithlist)
{
  if (arithlist == NULL)
    {
      return;
    }
  ListNode * ln = arithlist -> head;
  ListNode * p;
  printf("from head: \n");
  while (ln != NULL)
    {
      p = ln -> next;
      printf("%s", ln -> word); // no need to add '\n'
      ln = p;
    }
  printf("from tail: \n");
  ln = arithlist -> tail;
  while (ln != NULL)
    {
      p = ln -> prev;
      printf("%s", ln -> word);
      ln = p;
    }
}

int main (int argc, char ** argv)
{
  if (argc != 2)
    {
      // argv[1] is the name of input file
      return EXIT_FAILURE;
    }
  List * arithlist;
  // allocate memory for arthlist
  // the memory has only two pointers, no space to store nodes yet
  arithlist = malloc(sizeof(List));
  arithlist -> head = NULL;
  arithlist -> tail = NULL;
  if (readList(argv[1], arithlist) == false)
    {
      return EXIT_FAILURE;
    }
  printList(arithlist);
  if (calculate(arithlist) == true)
    {
      printList(arithlist);
    }
  else
    {
      printf("invalid\n");
    }
  deleteList(arithlist);
  return EXIT_SUCCESS;
}
