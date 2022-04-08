#include<stdio.h>
void print_pattern(int n)
{
    int i,j,count=n-1;
    for(i=1;i<=(n*2)-1;i++,printf("\n"))
    {
        if(i<=n)
            for(j=1;j<=i;printf("%d",j),j++);
        else
        {
            for(j=1;j<=count;printf("%d",j),j++);
            count--;
        }    
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print_pattern(n);
    printf("%d ",n);
}
