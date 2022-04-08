#include<iostream>
using namespace std;
//this is the fastest one that i found
//another best method is accepting input as string and then comparing, many predefined functions also available.
bool is_pal(int n)
{
    if (n % 10 == 0)
    {
      return 0;
    }
    //when it ends with a 0 it can never be a palindrome

    int r = 0;

    while (r < n)
    {
        r = 10 * r + n % 10;
        n /= 10;
        //std::cout << r << '\n';
        //std::cout << n << '\n';
    }

    return n == r || n == r / 10;//fastest possible approach
}


int main() {
  int N;
  cin>>N;

  if(is_pal(N))
  {
    cout<<"given num is a palindrome";
  }
  else
  {
    std::cout << "not a palindrome" << '\n';
  }

  return 0;
}
