#include<iostream>
using namespace std;

bool isprime(int N)
{
  if (N<=1)
  {
    return false;
  }
  if(N<=3)
  {
    return true;
  }
  if(N%3==0 || N%2==0)  //next five numbers is taken care
  {
    return false;
  }
  for (int i = 5; i*i<N; i=i+6)    //////////////i think we have to use i*i<=N
  {
    if(N%i==0 || N%(i+2)==0)
    {
      return false;
    }
  }
  return true;

}
int main(int argc, char const *argv[]) {
  int N;
  cin>>N;
  if (isprime(N))
  {
    std::cout << "The given number is Prime Number" << '\n';
  }
  else
  {
    std::cout << "The given number is not Prime Number " << '\n';
  }
  return 0;
}

// here time complexity is O(sqrt(n))
//there are many optimised solutions for primality tests which has O(log(n))
//check out: https://qr.ae/pNkxnS
