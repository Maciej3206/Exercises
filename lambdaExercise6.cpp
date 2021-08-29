#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int count = 1;
    std::string str = {};
    auto print = [&]() mutable {
        for (int i = 0 ; i < count ; ++i) {
            str += "*";
        }
        return str;
        count ++;
    };
    std::cout << print() << '\n';
    std::cout << print() << '\n';
    std::cout << print() << '\n';
    std::cout << print() << '\n';
}