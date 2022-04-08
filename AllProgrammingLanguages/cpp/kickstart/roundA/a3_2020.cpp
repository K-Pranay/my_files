//workout plan
// 1
// 5 6
// 9 10 20 26 30

//  9 10 12 14 16 18 20 23 26 29 30
// ans 3(max difference)
#include <bits/stdc++.h>
using namespace std;

// getting wrong
// some correct and some wrong check required

int solve(){
  int res;
  int N,K;
  cin>>N;
  cin>>K;
  int *p;
  p= new int[N];
  for(int i=0;i<N;i++)
  {
    cin>>p[i];
  }
  int *q;
  q = new int[N-1+K];
  for(int i=0;i<N-1;i++){
  q[i]=p[i+1]-p[i];
  }

  int size=N-1;
  int big=q[0];
  int big_i=0;
  for (int i=0 ; i<K; i++)
  {
    big=q[0];
    big_i=0;

    for(int i=1 ; i<size-1 ; i++)
    {
      if(big<q[i])
      {
        big=q[i];
        big_i=i;
      }

    }
    if(big%2==0)
    {
      size++;
      q[big_i]=big/2;
      q[size]=big/2;
    }
    else
    {
      size++;
      q[big_i]=(int)big/2;
      q[size]=(int)big/2 +1;
    }

    for (size_t i = 0; i < size; i++) {
     std::cout<< ' '<<q[i]<<" ";
    }
    cout<<"\n";
    res=big;
  }
  return res;
}

int main(int argc, char const *argv[]) {
  int T,j=0;
  cin>>T;
  while (j<T) {
    j++;
    int z=solve();
    std::cout << "Case #" <<j<<": "<<z<< '\n';

  }

  return 0;
}

// 1
// 5 2
// 10 13 15 16 17
