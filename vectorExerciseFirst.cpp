#include <iostream>
#include <vector>
#include <algorithm>

void print (std::vector <int> v) {
    for (auto el : v) {
        std::cout << el << ", ";
    }
    std::cout << '\n';
}

int main() {
  std::vector <int> vec = {1, 2, 4, 5, 6};
  print (vec);
  auto it = std::remove (vec.begin(), vec.end(), 1);
  vec.erase (it, vec.end());
  print (vec);
  vec.emplace_back(5);
  print (vec);
  vec.emplace (vec.begin(),12);
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.clear();
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  //vec.insert (vec.begin(), 10);
  /*
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.reserve (10);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.shrink_to_fit();
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.emplace_back(7);
  print (vec);
   std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.push_back(8);
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  it = vec.begin() + 1;
  vec.insert (it, 3);
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  //vec.erase (*vec[0], *vec[0]);
  */
}