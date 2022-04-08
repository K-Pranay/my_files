#include<iostream>
using namespace std;

void prime_check(int N)
{
  for (int i = 2; i <= (N/2); i++) //first mistake took i =0; then floating point exception that is divided or % by 0
                                  //second mistake stated from 1;  now its done correct;
  {
    if(N%i==0)
    {
      std::cout << "no it is not Prime" << '\n';
      return;
    }
  }
  std::cout << "yes it is Prime" << '\n';
  return ;

}
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  if (n==2 || n==3)
  {
    std::cout << "it is prime" << '\n';
  }
  prime_check(n);
  return 0;
}
