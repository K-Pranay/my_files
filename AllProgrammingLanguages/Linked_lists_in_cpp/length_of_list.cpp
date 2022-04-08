
//iterative
int len(Node** Head_ref)
{
  Node* temp = *Head_ref;
  int count = 1;
  while (temp->next != NULL) {
    count++;
  }
  return count;

}


//recursive;

int lenr(Node** Head_ref)
{
  if(Head_ref->next == NULL)
  {
    return 1;
  }

  else
  return (1+lenr(Head_ref->next))
}

// above two are my codes


*** down methods will also solve if the list is empty so go with them
mistakes above are do not use Node**
other than that the thing is same.
they also work fine but there will be change in head node

////////////////////////////////////////////////////////////////////////////

/* Counts no. of nodes in linked list */
int getCount(Node* head)
{
  int count = 0; // Initialize count
  Node* current = head; // Initialize current
  while (current != NULL)
  {
      count++;
      current = current->next;
  }
  return count;
}



//recursive down

/* Counts the no. of occurrences of a node
   (search_for) in a linked list (head)*/
int getCount(struct Node* head)
{
    // Base case
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + getCount(head->next);
}


//////////////////////////////////////////////////////////////////////////////
