#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
    int data;
    struct node *next;
};
int max(struct node *temp)
{
    int m=INT_MIN;
    while(temp!=NULL)
    {
        if(temp->data>m)
            m=temp->data;
        temp=temp->next;
    }
    return m;
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
    printf("\n%d",max(first));
    //search(first,key) ? printf("Found") : printf("Not Found");
}
int main()
{
    create();
}