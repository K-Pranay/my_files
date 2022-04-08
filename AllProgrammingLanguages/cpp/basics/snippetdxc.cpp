#include<iostream>
using namespace std;
int fun ()
{
  static int num=16;
  return num--;
}
int main()
{
  for (fun();fun();fun())
  {
    cout<<fun()<<" ";
  }
  // if (1)
  // std::cout << "true" << '\n';
  // if (-1)
  // std::cout << "false" << '\n';//why this got printed
  // if (0)
  // std::cout << "false2" << '\n';
  return 0;
}
//if (-1)== is also true
//if (0) is flase
