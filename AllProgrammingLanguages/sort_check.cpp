#include<iostream>
#include<algorithm>
using namespace std;


int main(int argc, char const *argv[]) {
  int arr[]={1,4,3,5,2,7};
  sort(arr,arr+9);
  for (size_t i = 0; i < 6; i++) {
    std::cout << arr[i] << '\n';
  }
  return 0;
}
