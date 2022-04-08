#include<iostream>
using namespace std;

// 1 1 2 3 5 8 ....

//in python it worked but failed in cpp
// it will also work in java 

int main()
{
  unsigned long long int arr[100];
  arr[0]=1;
  arr[1]=1;
  int N=10;
  for (int i = 2; i < N ; i++)
  {
    arr[i] = arr[i-1] + arr[i-2];
    //std::cout << arr[i] << '\n';
  }

  for (int i = N-1; i >= 0; i--)
  {
    cout << arr[i] << "\n";
  }
  std::cout << "reached" << "\n";
  return 0;
}
