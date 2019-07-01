// ***
// *** DO NOT modify this file
// ***

#ifndef SHUFFLE_H
#define SHUFFLE_H
#include <stdlib.h>

#define MAX_SIZE 13

typedef struct {
  char cards[MAX_SIZE];
  int size;
} CardDeck;

void divide(CardDeck origDeck, CardDeck* leftDeck, CardDeck* rightDeck);
void interleave(CardDeck leftDeck, CardDeck rightDeck);
void shuffle (CardDeck origDeck);

#endif
