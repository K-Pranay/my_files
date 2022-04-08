#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]) {
  int a;

  cin>>a;
  int a1=a;
  int *p=new int[a];
  int *ptr,N,sum;
  while (a--) {
    //printf("%d\n",a );

    cin>>N;
    cin>>sum;
    ptr = new int[N];
    for(int i=0; i<N; i++)
    {
      cin>>ptr[i];
    }
    vector<int> myvector (ptr, ptr+N);
    sort (myvector.begin(), myvector.end());
    // for(int i=0; i<N; i++){
    //   cout<<myvector[i]<<"  ";
    // }
    int count=0;
    int tempsum=0;
    for (int i=0;i<N; i++)
    {
      tempsum+=ptr[i];
      if(tempsum<sum)
      {
        count++;
      }
    }
    p[a]=count;
    cout<<count<<"  "<<p[a]<<endl;
    delete[] ptr;
  }
  for (int i=a1-1,j=1;i>=0;i--) {
    cout<<"case #"<<(j++)<<": ";
    cout<<p[i]<<endl;
  }
  return 0;
}

// 2
// 4 50
// 4 3 2 1
// 5 98
// 5 4 3 2 1
