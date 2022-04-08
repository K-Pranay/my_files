#include<iostream>
using namespace std;
 int main(int argc, char const *argv[]) {
   int N;
   std::cin >> N;

   for (size_t i = 1; i <= N; i++) {
     for (size_t j = 0; j < i; j++) {
       std::cout << "*" ;
     }
     std::cout <<'\n';
   }
   return 0;
 }
