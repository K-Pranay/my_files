#include <iostream>
using namespace std;

void display(int *arr,int n)
{
  for (size_t i = 0; i < n-1; i++) {
    std::cout << arr[i] <<"  ";
  }
  std::cout << '\n';
}

int main(int argc, char const *argv[]) {
  int arr[10],n;
  std::cout << "enter no of values" << '\n';
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  display(arr,n);

  return 0;
}
