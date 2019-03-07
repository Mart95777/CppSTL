//
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>

void printLists(const std::list<int>& l1, const std::list<int>& l2)
{
  std::cout << "list 1: ";
  std::copy(l1.cbegin(),l1.cend(), 
    std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl << "list 2: ";
  
  std::copy(l2.cbegin(),l2.cend(), 
    std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl << std::endl;
  
}

int main()
{
  
  std::list<int> list1, list2;
  
  for(int i=0; i< 6; ++i)
  {
    list1.push_back(i);
    list2.push_front(i);
  }
  
  printLists(list1,list2);
  
  // insert all elements of list1 before the first element of list2
  // that has value of 3. find() returns an iterator.
  list2.splice(std::find(list2.begin(),list2.end(), //destination position
                              3),
                              list1);
                              
  printLists(list1,list2);
  
  std::cout << "Sorting" << std::endl;
  
  list2.sort();
  printLists(list1,list2);
  
  std::cout << "List2 to List1" << std::endl;
  list1 = list2;
  printLists(list1,list2);
  
  std::cout << "Unique on list2" << std::endl;
  list2.unique();
  printLists(list1,list2);
  
  std::cout << "Merge both sorted lists into the first list" << std::endl;
  list1.merge(list2);
  printLists(list1,list2);
  
  return 0;
}