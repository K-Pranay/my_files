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
struct node *insert(struct node *p,int pos,int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    struct node* first=p;
    for(int i=0;i<pos-1;i++)
        p=p->next;
    if(pos==0)
    {
        temp->next=first;
        first=temp;
    }
    else
    {
        temp->next=p->next;
        p->next=temp;
    }
    return first;
}
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
    first=insert(first,4,200);
    display(first);
}
int main()
{
    create();
}
