#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
#define ii pair<int,int>
#define ll long long
#define pll pair<ll,ll>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define iiordered_set tree<pll, null_type,less<pll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define MOD (1000*1000*1000+7)
ll power(ll a,ll b, ll m=MOD)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}
ll inverse(ll a,ll m=MOD)
{
    return power(a,m-2,m);
}
int ceil(int a,int b)
{
    return (a+b-1)/b;
}
#define INFl (1e18+5)
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<long long>
#define vvl vector<vl>
#define vll vector<pll>
#define vii vector<ii>
#define vvii vector<vii>
#define tri pair<int,ii>
#define F first
#define S second
#define forl(i,n) for(int i=0;i<n;i++)
#define fore(i,n) for(int i=1;i<=n;i++)
#define rforl(i,n)  for(int i=n-1;i>=0;i--)
#define rfore(i,n)  for(int i=n;i>=1;i--)
#define CASE(t) cout<<"Case #"<<(t)<<": ";
#define INF 1020000000
#define gcd(a,b) __gcd(a,b)
#define all(x)  x.begin(),x.end()
#define mp make_pair
#define pb push_back
#define print(x)    for(auto it=x.begin();it!=x.end();it++) cout<<*it<<' '; cout<<endl;
#define printii(x)  for(auto it=x.begin();it!=x.end();it++) cout<<it->F<<' '<<it->S<<endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
	int n,k,p;
	cin>>n>>k>>p;
	vvi a(n+1,vi(k+1));
	fore(i,n)
	fore(j,k)
		cin>>a[i][j];
	vvi dp(n+1,vi(p+1,0));
	fore(i,n)
	{
		vi sum(k+1,0);
		fore(j,k)
			sum[j]=sum[j-1]+a[i][j];
		fore(j,p)
		{
			for(int x=j,y=0;x>=0 && y<=k;x--,y++)
				dp[i][j]=max(dp[i][j],dp[i-1][x]+sum[y]);
		}
	}
	cout<<dp[n][p]<<endl;
}

int main()
{
	int T;
	cin>>T;
	fore(t,T)
	{
		CASE(t);
		solve();
	}
}
