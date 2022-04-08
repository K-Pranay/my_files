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

//inserting 4 ways
//1.at the begining
//2.at the end
//3.at the given location (after the given node)

void insert_beg(Node** head_ref, int new_data)
{
    /* 1. allocate node */
    Node* new_node = new Node();

    /* 2. put in the data */
    new_node->data = new_data;

    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;
}

void insert_end(Node** head_ref, int data1)
{
  Node* new_node = new Node();
  new_node->data = data1;
  Node* temp;
  temp = (*head_ref);  //temp or last name

  //**important solve the edge cases that is if the linked list is empty
  if((*head_ref) == NULL)
  {
    (*head_ref) = new_node;
    return;
  }


  while (temp->next != NULL)
  {
    temp=temp->next;
  }
  temp->next = new_node;
  //new_node->next = NULL;   may or may not be returned
}

void insert_random(Node** Pos,int data)
{

   //complete this
   //https://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/
}

int main()
{

  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head->data= 1;
  head->next = second;    //NOte the order;

  second->data=2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  Print_list(head);

  int x;
  cin>>x;
  //Node** ptr = &(head);
  switch (x)
  {
    case 1:
    {
      std::cout << "after inserting" << '\n';
      insert_beg(&head,0);  //prt instead of &head
      break;
    }
    case 2:
    {
      std::cout << "after inserting" << '\n';
      insert_end(&head,4);
      break;
    }
    case 3:
    {
      std::cout << "after inserting" << '\n';
      //insert something after second position
      insert_random(&(head->next),10);
      break;
    }
    default:
      std::cout << "invalid input" << '\n';
  }
  Print_list(head);

  return 0;
}
