#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;

};
void Print_list(Node* li)
{
  while (li != NULL) {
    std::cout << li->data << '\n';
    li=li->next;
  }
}
int main()
{

  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head->data= 1;
  head->next = second;    //Note the order;

  second->data=2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  Print_list(head);

  return 0;
}
