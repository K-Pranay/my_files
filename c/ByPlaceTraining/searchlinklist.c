#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int search(struct node *ptr,int key)
{
    while(ptr!=NULL)
    {
        if(ptr->data==key)
            return 1;
        ptr=ptr->next;
    }
    return 0;
}
void create()
{
    int key=20;
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
    search(first,key)?printf("Found"):printf("Not Found");
}
int main()
{
    create();
}