#include<iostream>
using namespace std;

int main()
{
	long int n;
	char a,b;
	long int p,q;
	cin>>n;
	cin>>a>>b;
	cin>>p>>q;

	long int t=q-p+1;
	long long int result=n;
	result = n*t*t*t*t;

	long int m=b-a+1;
	result = result*m*m;
	cout<<result;
}
