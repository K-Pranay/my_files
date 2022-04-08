#include<iostream>
using namespace std;
int main()
{

  int n;
  printf("enter a number\n");
  cin>>n;  //scanf used and i got segmentation fault???
  //std::cout << (int)(n&1) << '\n';
  if (n&1)
  {
    //printf("odd number\n" );
    std::cout << "odd" << '\n';
  }
  else
  {
    printf("even number\n" );
  }
  return 0;
}
