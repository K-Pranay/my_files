#include<bits/stdc++.h>
using namespace std;

void fun(int n,int k,int p,int j)
{
  int **ptr;
  ptr= new int*[n];
  int sum=0;
  for (int i=0;i<n;i++)
  {
    ptr[i]=new int[k];
  }

  for(int i=0; i<n; i++){
    for (int j=0; j<k; j++)
    {
      cin>>ptr[i][j];
    }
  }
  
  cout<<"Case #"<<j++<<": "<<sum;
}

int main(int argc, char const *argv[]) {
    int T;
    int j=1;
    cin>>T;
    while (T--) {
      int N,K,P;
      cin>>N;
      cin>>K;
      cin>>P;
      fun(N,K,P,j++);
    }
  return 0;
}

// 1
// 2 4 5
// 10 10 100 30
// 80 50 10 50
