#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int ans=0,N,X;
  cin>>N;
  cin>>X;
  int *p = new int[N];
  for (int i =0;i<N;i++){
    cin>>ceil(p[i]/X);
  }
  long long int fix_index=0,size=N,i=0;
  while (True) {

    // size=N-fix_index;
    // p[i]=p[i]-X;
    // if(p[i]<0)
    // {
    //   p[i]=0;
    //   cout<<i<<" ";
    //   fix_index++;
    // }
    // if(fix_index==N){
    //   break;
    // }
    if(p[i]==0)



  }
  // cout<<ans; spaced integer output
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,z=1;
    cin>>t;
    while (t--) {
      cout << "Case #" << z++ << ": ";
      solve();
    }


    return 0;
}
