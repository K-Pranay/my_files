#include <iostream>
using namespace std;

void swap(int arr[],int fix_index)
{
  int temp;
  temp=arr[fix_index];
  for (size_t i=fix_index; i < 5; i++) {
    if (arr[i]>temp) {
      arr[fix_index]=arr[i];
      arr[i]=temp;
      break;
    }
  }
}
int fact(int n)
{
  int res=1;
  for (int i=2;i<n+1;i++)
  {
    res=res*i;
  }
  return res;
}
int main() {
  int n,i,k;
  //n digits  ith permu  kth digit in the required answer
  std::cin >> n;
  std::cin >> i;
  std::cin >> k;
  int *p = new int[n];
  for (size_t j = 0; j < n; j++)
  {
    p[j]=j+1;
  }
  int fix_index=0;
  //std::cout<<"p[k-1]";
  //cout<<fact(2);
  for (int j = 0; j < fact(n);j++)
  {
    int size = n-fix_index;
    int times=fact(size);
    if(i-times>0)
    {
      swap(p,fix_index);
      j=j+fact(size);
    }
    else
    {
      fix_index++;
    }
    //std::cout<<"here";
  }
  std::cout<<p[k-1];
  return 0;
}
