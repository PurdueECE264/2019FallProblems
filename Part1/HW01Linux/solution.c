// ***
// *** Please modify this file and check what would happen
// ***

#include "header.h"
#include <stdio.h>
#ifndef TEST_ADD // please notice "ifndef", not "ifdef"
long addop(long a, long b)
{
  fprintf(stdout, "solution add is used\n");
  return (a + b);
}
#endif

#ifndef TEST_SUB
long subop(long a, long b)
{
  fprintf(stdout, "solution sub is used\n");
  return (a - b);
}
#endif

#ifndef TEST_MUL
long mulop(long a, long b)
{
  fprintf(stdout, "solution mul is used\n");
  return (a * b);
}
#endif

#ifndef TEST_DIV
long divop(long a, long b)
{
  fprintf(stdout, "solution div is used\n");
  if (b == 0)
    {
      fprintf(stderr, "divided by zero\n");
      return 0;
    }
  return (a / b);
}
#endif
