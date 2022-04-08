// C program to check whether a given number is a perfect number or not

#include<iostream>
using namespace std;
struct Node* DeleteNodes(struct Node* head, int x)
{
  if(head==NULL)
  {
    return NULL;
  }
  struct Node* temp = head;
  while(temp !=NULL)
  {
    if(x-(temp->data)<0)
    {
      return temp;
    }
    else
    {
      x = x - temp->data;
      temp = temp->next;
    }
  }
  return NULL;
}

int main()
{
   int n;
   printf("\nEnter a number : ");
   scanf("%d",&n);
   //cin>>n;
   if (is_perfect_number(n))
   printf("%d is a perfect number\n",n);
   else
   printf("%d is not a perfect number\n",n);

   return 0;
}
