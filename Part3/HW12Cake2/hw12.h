// ***
// *** DO NOT modify this file
// ***

#ifndef HW12_H
#define HW12_H
#include <stdlib.h>

typedef struct node {
  int value;
  struct node * next;
} ListNode;

void printListNode(ListNode * head);
ListNode * createList(int valn);
void eliminate(ListNode * head, int valk);
ListNode * deleteNode(ListNode * head, ListNode * todelete);
#endif
