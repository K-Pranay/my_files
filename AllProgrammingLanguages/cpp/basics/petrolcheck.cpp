#include<iostream>
using namespace std;
int main()
{
  int num,arr[100],i=0;
  std::cout << "enter numbers with spaces" << '\n';
  int ch;
  cin>>ch;
  std::cout << ch << '\n';
  while(true)
  {
    cin>>num;
    if(num==0)
    {
      break;
    }
    arr[i]=num;
    i++;

  }

  std::cout << "hi" << '\n';
  return 0;
}
