// 5.1. pairs
#include <iostream>
#include <utility>

// template <typename T1, typename T2>
// std::ostream& operator << (std::ostream& strm, const std::pair<T1,T2>& p)
// {
  // return strm << "[" << p.first << "," << p.second << "]";
// }

int main()
{
  // constructor
  std::pair<int, char> p;
  
  p.first = 3701;
  p.second = 'a';
  
  std::cout << "constructor:" << std::endl;
  std::cout << "[" << p.first << "," << p.second << "]" << std::endl;
  
  std::pair<int, char> p1(332,'b');
  std::cout << "initialization:" << std::endl;
  std::cout << "[" << p1.first << "," << p1.second << "]" << std::endl;
  
  int int1 = 15;
  char c = 'd';
  
  std::pair<int, char> p2(int1+3,c + 1);
  std::cout << "move initialized:" << std::endl;
  std::cout << "[" << p2.first << "," << p2.second << "]" << std::endl;
  
  return 0;
}