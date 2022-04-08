#include<bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  int j=1;
  while (T--)
  {
    int N,D;
    std::cin >> N;
    std::cin >> D;
    long int *p=new long int[N];  //*p has memory now
    for (int i = 0; i <N; i++)
    {
      std::cin >> p[i];
    }
    int k=D;
    // for (int i = N-1; i >= 0 ; i--)
    // {
    //   //p[i]= new int[1];
    //   k=k-k%p[i];
    // }
    int i=N-1;
    while (i>=0) {
      k=k-k%p[i];
      i--;
    }
    cout<<"Case #"<<j++<<": "<<k<<"\n";
  }
  return 0;
}
