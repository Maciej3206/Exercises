#include <iostream>
#include <vector>

void print (std::vector <int> v) {
    for (auto el : v) {
        std::cout << el << ", ";
    }
    std::cout << '\n';
}

int main() {
  std::vector <int> vec;
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  // auto it = 
  vec.insert (vec.begin(), 10, 5);
  print (vec);
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.reserve (20);    
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
  vec.shrink_to_fit();
  std::cout << "vec.size = " << vec.size() << '\n';
  std::cout << "vec.capacity = " << vec.capacity() << '\n';
}