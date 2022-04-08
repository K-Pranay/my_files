//iterative

// Takes head pointer of
// the linked list and index
// as arguments and return
// data at index
int GetNth(Node* head, int index)
{

    Node* current = head;

    // the index of the
    // node we're currently
    // looking at
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return (current->data);
        count++;
        current = current->next;
    }

    /* if we get to this line,
    the caller was asking
    for a non-existent element
    so we assert fail */
    assert(0);
}



// recursive
/* Takes head pointer of the linked list and index
    as arguments and return data at index*/
int GetNth(struct Node* head, int n)
{
    int count = 0;

    // if count equal to n return node->data
    if (count == n)        // or n==0    and also helpful if add another condition to check edge case that is if(n<0) then return -1   or assert(0)
        return head->data;

    // recursively decrease n and increase
    // head to next pointer
    return GetNth(head->next, n - 1);
}
