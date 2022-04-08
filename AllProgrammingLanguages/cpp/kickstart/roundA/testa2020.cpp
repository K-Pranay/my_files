#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
    	cout<<"Case #"<<i<<": ";
    	int N,B;
    	cin>>N>>B;
    	int arr[N];
    	for(int i=0;i<N;i++)
    		cin>>arr[i];
    	sort(arr,arr+N);
    	int ans=0;
    	for(int i=0;i<N && B>=arr[i];i++,ans++)
    		B-=arr[i];
    	cout<<ans<<endl;

    }

}
#include<bits/stdc++.h>
#include <iomanip>
#define ll long long int
#define ld long double
#define IOS cin.tie(NULL);cout.tie(NULL)
#define f first
#define inf 100000000000000000
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define sc(i) scanf("%lld",&i);
#define s second
#define pb push_back
#define forn(i,n) for(int i=0;i<(int)n;i++)
