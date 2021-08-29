#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector <int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    auto print = [vec](){
        for (auto& el : vec) {
            std::cout << el << ", ";
            }
        };
    print ();
    std::cout << '\n';
    auto print1 = [](int a){std::cout << a;};
    print1 (3);
    std::cout << '\n';
}