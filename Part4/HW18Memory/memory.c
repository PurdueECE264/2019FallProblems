// ***
// *** You must modify this file
// ***

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "memory.h"

#ifdef TEST_CREATEMEMORY
bool createMemory(Memory ** mem, int size)
{
  // create a memory object
  // size the number of blocks
  // please be aware that size is not necessarily
  // a multiple of 8
  //
  // * mem stores the memory of the allocated memory object
  // If creating the memory object fails, return false
  // If creating the memory object succeeds, return true
  if (size <= 1) // too small
    {
      return false;
    }
  return true;
}
#endif

#ifdef TEST_DESTROYMEMORY
void destroyMemory(Memory * mem)
{
  // release the memory allocated by createMemory
  // must not have memory leak
}
#endif

#ifdef TEST_SAVEOCCUPANCY
bool saveOccupancy(Memory * mem, const char * filename)
{
  // save the occupancy of the blocks
  // if a block is not occupied, use bit 0
  // if a block is occupied, use bit 1
  // save the bits to the file with filename
  //
  // If the number of blocks is not a multiple of 8,
  // use 0 for the unused bit (or bits)
  //
  // If n is the number of blocks, the output to the file
  // should have n / 8 bytes (when n is a multiple of 8).
  // and n / 8 + 1 bytes (when n is not a multiple of 8).
  //
  // If opening the file or saving fails, return false
  // Othersie, return true
  return true;
}
#endif

#ifdef TEST_ALLOCATEMEMORY
// This function allocates memory of the specified size
//
// The function uses *first fit* to find consecutive blocks as large
// as the needed size
//
// The function returns the index of the first block of the allocated
// memory
//
// If it is not possible finding large enough consecutive blocks,
// return -1.
//
// Please notice that return 0 means one (or several) blocks are
// allocated and the first block starts from 0. This is different from
// the malloc function in C. When malloc returns NULL (equivalent to
// 0), malloc fails
int allocateMemory(Memory * mem, int size)
{
  if (size <= 0)
    {
      return -1;
    }
  return -1;
}
#endif 

#ifdef TEST_FREEMEMORY
// release the memory block (or blocks) with
// the starting address
//
// Please notice that this function does not take an argument that
// specifies how many blocks need to be released. Your program
// has to keep track of that.
//
// If starting is invalid, this function is no effect
void freeMemory(Memory * mem, int starting)
{
  if (mem == NULL)
    {
      return;
    }
  if (starting < 0) 
    {
      fprintf(stderr, "WRONG, starting address negative\n");
      return;
    }
}
#endif
