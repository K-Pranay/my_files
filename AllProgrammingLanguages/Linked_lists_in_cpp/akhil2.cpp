#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int N;
  cin>>N;
  static int arr[4];
  //int flag=0;
  while( N == 0 )
  {
    if(N%2==0)
    {
      N=N/2;
      arr[0]++;
    }
    else if(N%3==0)
    {
      N=N/3;
      arr[1]++;
    }
    else if(N%5==0)
    {
      N=N/5;
      arr[2]++;
    }
    else if(N%7==0)
    {
      N=N/7;
      arr[3]++;
    }
    else
    {
      std::cout << "Invalid Input" << '\n';
      reuturn 0;
    }
    int result;
    for(int i=3; i>=0; i--)
    {
      if(arr[i]==0)
         continue;
      
    }

  }
  return 0;
}
