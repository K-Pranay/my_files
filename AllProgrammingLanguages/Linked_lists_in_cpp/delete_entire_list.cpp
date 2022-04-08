

void(Node** head_ref)
{
  Node* temp = (*head_ref);
  Node* temp2;
  while (temp != NULL)
  {
    temp2=temp->next;
    delete temp;
    temp=temp2;
  }
}

// above is my code almost same

///////////////////////////////////////////////////////////////////


/* Function to delete the entire linked list */
void deleteList(Node** head_ref)
{

/* deref head_ref to get the real head */
Node* current = *head_ref;
Node* next;

while (current != NULL)
{
   next = current->next;
   free(current);
   current = next;
}

/* deref head_ref to affect the real head back
   in the caller. */
*head_ref = NULL;
}
 /////////////////////////////////////from geeks for geeks
