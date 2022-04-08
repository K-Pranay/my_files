//in cmd  "g++ --version" and "c++ --version"

#include<iostream>
int main() {
  if( __cplusplus == 201103L ) std::cout << "C++11\n" ;
  else if( __cplusplus == 19971L ) std::cout << "C++98\n" ;
  else if(__cplusplus == 1)  std::cout << "C++ pre-C++98\n" ;
  else if(__cplusplus == 201402L)  std::cout << "C++14\n" ;
  else if(__cplusplus == 201703L)  std::cout << "C++17\n" ;
  else std::cout << "pre-standard C++\n" ;
  return 0;
}
