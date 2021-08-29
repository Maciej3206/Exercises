#include <iostream>
#include <list>

int main() {
  std::list<int> list {1, 2, 4, 6, 7, 8, 9, 1, 3, 5, 7};
  auto it = list.begin();
  for (size_t i = 0 ; i < list.size() ; ++i) {
    std::cout << *it << " | ";
    it++;
  }
}
