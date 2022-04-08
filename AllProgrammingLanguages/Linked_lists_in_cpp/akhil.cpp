#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int N;
  int *ptr;
  cin>>N;
  if(N<2)
    cout<<"Invalid Input";
  ptr = new int[N];

  for(int i=0;i<N;i++)
  {
    cin>> ptr[i];
  }

  sort(ptr,ptr+N);
  if(N==2)
  {
    cout<<ptr[0]<<" "<<ptr[1];
    return 0;
  }
  if((ptr[0]==ptr[1] && ptr[0]==ptr[2]) || (ptr[0]==ptr[1] && ptr[1]==ptr[2]))
  {
    cout<<"Equal";
    return 0;
  }
  cout<<ptr[0]<<" "<<ptr[1];
}
