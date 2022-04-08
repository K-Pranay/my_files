//find nth fibonacci number using recursion
//fib number here 0 1 1 2 3 5

#include<iostream>
using namespace std;

int fib(int n);
int main()
{
  int n;
  cin>>n;
  cout<<"the "<<n<<"th fibonacci number is :";
  cout<<fib(n-1);//-1 here because it starts with 0
  return 0;
}

int fib(int n)
{
  if (n<=1)
    return n;
  else
    return (fib(n-1)+fib(n-2));
}
