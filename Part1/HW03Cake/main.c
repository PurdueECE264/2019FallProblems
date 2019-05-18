// ***
// *** DO NOT modify this file
// ***
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h>
// only one function, no need to create .h file
void eliminate(int n, int k); 

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
      fprintf(stderr, "need two numbers greater than 1\n");
      return EXIT_FAILURE;
    }
  eliminate(valn, valk);
  return EXIT_SUCCESS;
}

