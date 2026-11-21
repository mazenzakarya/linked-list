#include <iostream>
using namespace std;

#include "LinkedList.h"

int main() {
  LinkedList li;
  li.head = nullptr;
  li.count = 0;

  li.insertAtEnd(10);
  li.insertAtEnd(20);
  li.insertAtEnd(30);
  //   li.insertAfter(11, 20);

  cout << li.getcount() << endl;

  int value = li.GetDataByIndex(1);
  cout << "==========================" << endl;
  cout << value << endl;
  //   li.display();

  return 0;
}