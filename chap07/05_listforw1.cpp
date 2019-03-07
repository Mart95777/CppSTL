//
#include <iostream>
#include <forward_list>
//#include <string>
//#include <algorithm>
#include <iterator>

void printElements(const std::forward_list<int>& list)
{
  for(auto pos = list.begin();pos != list.end(); ++pos)
  {
    std::cout << *pos << " ";
  }
  std::cout << std::endl;
  
}
int main()
{
  
  std::forward_list<int> list0;
  
  std::cout << "list size: " << std::distance(list0.begin(),list0.end()) 
    << std::endl;
    
    std::forward_list<int> list = {1,2,3,4,5,97,98,99};
  
  std::cout << "list size: " << std::distance(list.begin(),list.end()) 
    << std::endl;
    
  // find position before the first even element
  auto pos_before = list.before_begin();
  for(auto pos = list.begin();pos != list.end(); ++pos, ++pos_before)
  {
    if(*pos % 2 ==0) break; //element found
  }
  
  // insert a new element there
  list.insert_after(pos_before,42);
  
  printElements(list);
  
  return 0;
}