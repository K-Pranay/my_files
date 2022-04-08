/*
Author : N_o_o_B
Created : March 22 2020 01:27:51
*/
#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) { cerr<<"[ "; __trace__(#__VA_ARGS__, __VA_ARGS__);}
#undef endl

template <typename Arg1,typename Arg2>
ostream& operator << (ostream& out, const pair<Arg1,Arg2> &x) {
    return out<<"("<<x.first<<","<<x.second<<")";
}

template <typename Arg1>
ostream& operator << (ostream& out, const vector<Arg1> &a) {
    out<<"[";for(const auto &x:a)out<<x<<",";return out<<"]";
}

template <typename Arg1>
ostream& operator << (ostream& out, const set<Arg1> &a) {
    out<<"[";for(const auto &x:a)out<<x<<",";return out<<"]";
}

template <typename Arg1,typename Arg2>
ostream& operator << (ostream& out, const map<Arg1,Arg2> &a) {
    out<<"[";for(const auto &x:a)out<<x<<",";return out<<"]";
}

template <typename Arg1>
void __trace__(const string name, Arg1&& arg1){
    cerr << name << " : " << arg1 << " ] " << endl;
}

template <typename Arg1, typename... Args>
void __trace__(const string names, Arg1&& arg1, Args&&... args){
    const string name = names.substr(0,names.find(','));
    cerr<<name<<" : "<<arg1<<" | ";
    __trace__(names.substr(1+(int)name.size()), args...);
}
#else
    #define trace(args...)
#endif

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pair<int,int>> vii;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef vector<vl> vvl;
//typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> oset;
#define fori(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define repd(i,a,b) for(int i=a;i>=b;i--)
#define ford(i,n)  for(int i=n-1;i>=0;i--)
#define trav(x,a) for(auto& x:a)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define endl '\n'
#define sz(a) (int)(a).size()
#define fi first
#define se second
clock_t time_p=clock();

void time_taken()
{
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
}
//const ll mod=998244353;
const ll mod=1e9+7;
const ll INF=1e18;

void solve(){

    int n,k,p;
    cin >> n >> k >> p;
    vvl a(n,vl(k));
    fori(i,n) fori(j,k) cin >> a[i][j];
    vvl dp(n+1,vl(p+1,-INF));
    dp[n][0] = 0;
    ford(i,n){
        fori(j,p+1){
            dp[i][j] = dp[i+1][j];
            ll sum = 0;
            fori(kk,k){
                if(kk+1 > j) break;
                sum += a[i][kk];
                dp[i][j] = max(dp[i][j], dp[i+1][j-kk-1] + sum);
            }
        }
    }

    cout << dp[0][p] << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cout.precision(12);cout << fixed;

    int t;
    cin >> t;
    rep(i,1,t)
    {
        cout << "Case #" << i << ": ";
        solve();
    }



    time_taken();
    return 0;
}
