#include<stdio.h>

void stringLower(char *str)//converts a string to lower case
{
  int index;
  for(index=0;str[index]!=NULL;index++)
    if(str[index]>='A' && str[index]<='Z')//character is upper case
      str[index]=str[index]+32;
}

int stringCompare(char *str1,char *str2)
{
  //str1 should be greater than str2
  //str2 should be lesser than str1
  //string 1 is lesser=>0
  //string 2 is lesser=>1
  int index;
  for(index=0;str1[index]==str2[index];index++);
  if(str1[index]<str2[index])
    return 0;
  else
    return 1;
}

void stringCopy(char *dest,char *src)
{
  int index;
  for(index=0;src[index]!=NULL;index++)
  {
    dest[index]=src[index];
  }
  dest[index]=NULL;
}



int main()
{
  int n,itr;
  scanf("%d",&n);

  for(itr=1;itr<=n;itr++)
  {
    int num[100],index=0,size,count;
    char ch,word[10][100];
    while(1)
    {
      //scanf("%s",str);
      scanf("%s %d%c",word[index],&num[index],&ch);
      stringLower(word[index]);
      index++;
      if(ch=='\n')
        break;
    }

    size=index;

    for(count=1;count<=size-1;count++)
    {
      for(index=0;index<=size-2;index++)
      {
        if(num[index] > num[index+1])
        {
          int temp=num[index];
          num[index]=num[index+1];
          num[index+1]=temp;
        }
      }
    }

    for(count=1;count<=size-1;count++)
    {
      for(index=0;index<=size-2;index++)
      {
        if(stringCompare(word[index],word[index+1])==1)//str1 is greater
        {
          char temp[100];
          stringCopy(temp,word[index]);
          //int temp=num[index];
          stringCopy(word[index],word[index+1]);
          //num[index]=num[index+1];
          stringCopy(word[index+1],temp);
          //num[index+1]=temp;
        }
      }
    }

    for(index=0;index<size;index++)
      printf("%s %d ",word[index],num[index]);
    printf("\n");
  }
  return 0;
}
