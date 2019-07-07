// ***
// *** DO NOT modify this file
// ***

#ifndef LIST_H
#define LIST_H

#define WORDLENGTH 5
// assume each numbers use at most 4 digits
// the fifth character stores '\0'

#include <stdbool.h>

typedef struct Node
{
  char word[WORDLENGTH];
  // word is a string and one element must be '\0'
  struct Node * next;
  struct Node * prev;
  // doubly linked list
} ListNode;

typedef struct
{
  ListNode * head;
  ListNode * tail;
} List;

bool readList(char * filename, List * arithlist);
void deleteList(List * arithlist);
void addNode(List * arithlist, char * word);
bool deleteNode(List * arithlist, ListNode * ln);

#endif
