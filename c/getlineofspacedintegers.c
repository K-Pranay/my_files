#include <stdio.h>
int main(int argc, char const *argv[]) {
  int arr[100];
  int x,size;
  printf("%d\n", scanf("%c",&x));
  int i=0;
  while (getchar() != '\n')
  {
      scanf("%d",&x);
      arr[i]=x;
      i++;
      size=i;
  }
  //make sure last char is not space
  //another method is using srings and vector.
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", arr[i]);
  }
  return 0;
}
