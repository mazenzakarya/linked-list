#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
 public:
  Node* head;
  int count;

  LinkedList();

  void insertAtEnd(int value);
  void insertBefore(int value, int beforeValue);
  void insertAfter(int value, int afterValue);
  int getcount();
  void display();
  int GetDataByIndex(int index);
};

#endif