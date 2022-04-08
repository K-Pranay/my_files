#include<iostream>
// #include<cmath>
using namespace std;

//
int facto(int r) {
   int fact = 1;
   while(r>1) {
      fact = fact * r;
      r--;
   }
   return fact;
}
bool is_strong(int n)
{
  int temp=n;
  int sum=0;

  while (temp) {
    sum=sum+facto(temp%10);
    temp=temp/10;
  }
  if (sum==n) {
    return true;
  }
  return false;
}
int main(int argc, char const *argv[]) {
  int N;
  cin>>N;
  if (is_strong(N)) {
    printf("it is Strong Number\n");
  }
  else
  {
    std::cout << "it is Not strong Number" << '\n';
  }
  return 0;
}
