// #include<bits\stdc++.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int j=1;
  int T;
  cin>>T;
  while (T--)
  {
    int res=0;
    int *p;
    long long int N;
    cin>>N;
    p = new int[N];
    for (size_t i = 0; i < N; i++)
    {
      cin>>p[i];
    }
    int f,s,t;
    f=p[0];
    s=p[1];
    t=p[2];
    for( int i=2;i<N;i++){
      if(s>f && s>t){
        res++;
      }
      f=p[i-1];
      s=p[i];
      t=p[i+1];
    }
    cout<<"Case #"<<j++<<": "<<res<<"\n";

  }
  return 0;
}
