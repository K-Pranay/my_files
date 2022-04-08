#include <iostream>
using namespace std;


int fib(int n, int arr[])
{
  if(n==0)
  {
    return 0;
  }
  if (n<3) {
    return 1;
  }
  else if (arr[n]!=0) {
    return arr[n];
  }
  else

    arr[n]= fib(n-1,arr)+fib(n-2,arr);
  return arr[n];
}
//implement memonisation in it ..
int main(int argc, char const *argv[]) {
  int N;
  int arr[50];
  for (size_t i = 0; i < 50; i++) {
    arr[i]=0;
  }
  std::cin >> N;
  std::cout << fib(N,arr) << '\n';
  return 0;
}
