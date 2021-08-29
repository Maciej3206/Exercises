#include <iostream>
#include <algorithm>

int main() {
    auto print = [](int a, int b){return a * b;};
    std::cout << print (5,1) << '\n';
    } 