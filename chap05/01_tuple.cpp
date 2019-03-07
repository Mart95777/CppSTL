// 5.1. tuples
#include <iostream>
#include <tuple>
#include <string>
#include <complex>

int main()
{
  std::tuple<std::string,int,int,std::complex<double>> t;
  std::cout << "first tuple, default init:" << std::endl;
  std::cout << "[" << std::get<0>(t) << "]"
            << "[" << std::get<1>(t) << "]"
            << "[" << std::get<2>(t) << "]"
            << "[" << std::get<3>(t) << "]" << std::endl;
  
  std::tuple<int,float,std::string> t1(41,3.7,"hello");
  
  std::cout << "second tuple, explicit init:" << std::endl;
  std::cout << "[" << std::get<0>(t1) << "]"
            << "[" << std::get<1>(t1) << "]"
            << "[" << std::get<2>(t1) << "]" << std::endl;
  
  auto t2 = std::make_tuple(22,7.1,"hi");
  std::cout << "third tuple, make_tuple init:" << std::endl;
  std::cout << "[" << std::get<0>(t2) << "]"
            << "[" << std::get<1>(t2) << "]"
            << "[" << std::get<2>(t2) << "]" << std::endl;
  
  std::cout << "replacing hello with hi:" << std::endl;
  
  std::cout << "[" << std::get<0>(t1) << "]"
            << "[" << std::get<1>(t1) << "]"
            << "[" << std::get<2>(t1) << "]" << std::endl;
            
  std::get<2>(t1) = std::get<2>(t2);
  
  std::cout << "[" << std::get<0>(t1) << "]"
            << "[" << std::get<1>(t1) << "]"
            << "[" << std::get<2>(t1) << "]" << std::endl;
            
  std::get<2>(t1) = "hello";
  
  auto t0 = std::make_tuple(21,1.1,"aaa");
  std::cout << "comparison t0 < t2:" << std::endl;
  
  std::cout << "[" << std::get<0>(t0) << "]"
            << "[" << std::get<1>(t0) << "]"
            << "[" << std::get<2>(t0) << "]" << std::endl;
  
  std::cout << "[" << std::get<0>(t2) << "]"
            << "[" << std::get<1>(t2) << "]"
            << "[" << std::get<2>(t2) << "]" << std::endl;
            
  if(t0<t2) t0 = t2;
  
  std::cout << "after:" << std::endl;
  std::cout << "[" << std::get<0>(t0) << "]"
            << "[" << std::get<1>(t0) << "]"
            << "[" << std::get<2>(t0) << "]" << std::endl;
  
  std::cout << "[" << std::get<0>(t2) << "]"
            << "[" << std::get<1>(t2) << "]"
            << "[" << std::get<2>(t2) << "]" << std::endl;
  
  return 0;
}