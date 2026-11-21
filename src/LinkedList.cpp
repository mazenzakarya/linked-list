#include "LinkedList.h"

#include <iostream>

LinkedList::LinkedList() {}

void LinkedList::insertAtEnd(int value) {
  Node* newNode = new Node(value);
  if (head == nullptr) {
    head = newNode;
  } else {
    Node* current = head;
    while (current->next != nullptr) {
      current = current->next;
    }
    current->next = newNode;
  }
  this->count++;
}

void LinkedList::insertAfter(int value, int afterValue) {
  Node* newNode = new Node(value);
  Node* current = head;
  while (current != nullptr && current->data != afterValue) {
    current = current->next;
  }
  if (current != nullptr) {
    newNode->next = current->next;
    current->next = newNode;
  }
  this->count++;
}

void LinkedList::insertBefore(int value, int beforeValue) {
  if (head == nullptr) return;

  Node* newNode = new Node(value);
  Node* current = head;
  Node* prev = nullptr;

  while (current != nullptr && current->data != beforeValue) {
    prev = current;
    current = current->next;
  }
  if (current != nullptr) {
    newNode->next = current;
    if (prev == nullptr) {
      head = newNode;
    } else {
      prev->next = newNode;
    }
  }
  this->count++;
}
int LinkedList::getcount() { return this->count; }

void LinkedList::display() {
  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << std::endl;
    current = current->next;
  }
}
int LinkedList::GetDataByIndex(int i) {
  Node* current = head;

  int index = 0;

  while (index < i) {
    current = current->next;
    index++;
  }
  return current->data;
}