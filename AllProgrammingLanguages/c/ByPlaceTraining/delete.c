#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void delete(struct node **head,int pos)
{
    struct node *current=*head;
    struct node *prev=NULL;
    while(pos)
    {
        prev=current;
        current=current->next;
        pos--;
    }
    if(current==*head)
    {
        *head=current->next;
        free(current);
    }
    else
    {
        prev->next=current->next;
        free(current);
    }
}
// void insert(struct node **ptr,int data,int pos)
// {
//     struct node *temp=(struct node *)malloc(sizeof(struct node));
//     temp->data=data;
//     struct node *first=*ptr;
//     for(int i=0;i<pos-1;i++)
//         first=first->next;
//     if(pos==0)
//     {
//         temp->next=ptr;
//         ptr=temp;
//     }
//     else
//     {
//         temp->next=first->next;
//         first->next=temp;
//     }
// }
void create()
{
    int key=30;
    struct node *first,*last;
    first=(struct node *)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    first->data=x;
    first->next=NULL;
    last=first;
    scanf("%d",&x);
    while(x!=-1)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        last->next=temp;
        last=temp;
        last->next=NULL;
        scanf("%d",&x);
    }
    display(first);
    delete(&first,2);
    display(first);
}

//driver code

int main()
{
    create();
}
