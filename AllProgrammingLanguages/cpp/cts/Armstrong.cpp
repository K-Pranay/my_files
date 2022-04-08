#include<iostream>
#include<cmath>
using namespace std;
#define ll long long int

ll power(ll x, ll y)
{
	ll temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return temp*temp;
	else
		return x*temp*temp;
}

// int count(int x)
// {
//   int res=0;
//
//   while (true) {
//
//   }
// }
// log10 will give less time complexity

// you can actually proceed and improve time by just using while loop without calculating nod
bool is_arm(int n)
{
  int nod=log10(n)+1;   //count(n);  nod =no of digits;
  int temp=n;
  std::cout << nod << '\n';
  ll sum=0;
  for (int i = 0; i < nod; i++)
  {

    sum=sum+power(temp%10,nod);
    std::cout << sum << '\n';
    temp=temp/10;
  }
  if (sum==n)
    return true;
  return false;
}

int main() {
  int N;
  cin>>N;
  if (is_arm(N)) {
    cout<<"it is a armstrong number\n";
  }
  else
    std::cout << "not an armstrong number" << '\n';
  return 0;
}
