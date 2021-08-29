#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector <int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    for (auto& el : vec) {
        std::cout << el << ", ";
    }
    std::cout << '\n';
    auto print = [](int num){return num % 2;};
    vec.erase (std::remove_if (vec.begin(),
                               vec.end(),
                               print),
               vec.end());     
    for (auto& el : vec) {
        std::cout << el << ", ";
    }
    std::cout << '\n';
} 