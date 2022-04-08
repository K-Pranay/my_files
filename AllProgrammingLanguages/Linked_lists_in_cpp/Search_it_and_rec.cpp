//iterative

bool Search(Node* Head_ref , int key)

{
  //if empty return false
  if(Head_ref== NULL)
  {
    return 0;
  }
  while (Head_ref->next == NUll) {
    if (Head_ref->data == key) {
      return 1;   //or return true;
    }
    Head_ref = Head_ref->next;
  }
}

//Recursive

bool Search(Node* Head_ref,key)
{
  if(Head_ref==NULL)
  {
    return 0;
  }
  if(Head_ref->data == key)
  {
    return 1;
  }
  Search(Head_ref->next,key);
}


//My solutions are fine
 // down just written

 /////////////////////////////////////////////////////////////////////////////


 /* Checks whether the value x is present in linked list */
 bool search(Node* head, int x)
 {
     Node* current = head; // Initialize current
     while (current != NULL)
     {
         if (current->key == x)
             return true;
         current = current->next;
     }
     return false;
 }


//recursive
 /* Checks whether the value x is present in linked list */
bool search(struct Node* head, int x)
{
    // Base case
    if (head == NULL)
        return false;

    // If key is present in current node, return true
    if (head->key == x)
        return true;

    // Recur for remaining list
    return search(head->next, x);
}
