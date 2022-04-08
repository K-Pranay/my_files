//#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define IOS cin.tie(NULL);cout.tie(NULL)
#define f first
#define inf 100000000000000000

#define vi vector<ll>

#define sc(i) scanf("%lld",&i);
#define s second
#define pb push_back
#define forn(i,n) for(int i=0;i<(int)n;i++)
using namespace std;
ll const mod=998244353;
// sort(vec.begin(),vec.end());
ll power(ll x, ll y,ll m)
{
	ll temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2,m)%m;
	if (y%2 == 0)
		return ((temp)*(temp))%m;
	else
		return (((x)%m)*((temp*temp)%m))%m;
}//this is something different
