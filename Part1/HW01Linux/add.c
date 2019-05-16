// ***
// *** Please modify this file and check what would happen
// ***

#include "header.h"
#ifdef TEST_ADD
// The code between
// #ifdef TEST_ADD
// and
// #endif
// appears only if TEST_ADD is defined after gcc
// If TEST_ADD is not defined, the code is ignored by gcc
// (even if there is a syntax error).
long addop(long a, long b)
{
  return (a + b);
}
#endif
