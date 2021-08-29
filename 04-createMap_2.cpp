#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>

std::map <int, std::string> createMap (std::vector<int> &vec, std::list<std::string> &list) {
  if (vec.size() != list.size()) {
    std::cout << "Wielkosci kontenerow musza byc takie same\n";
  }
  if (vec.size() != list.size()) {
    std::cout << "Wielkość tablicy i listy sa rozne. Ilosc elementow w tych kontenerach musi byc identyczna\n";
    return {};
  }
  std::map<int, std::string> map;
  auto it = list.begin();
  for (size_t i=0 ; i<vec.size() ; ++i) {
    map.insert ({vec[i] , *it});
    ++it;
  }
return map;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}