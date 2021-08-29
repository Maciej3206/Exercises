#include <algorithm>
#include <iostream>
#include <vector>

int main () {
    std::vector v ={1, 2, 3, 4, 5};
    std::vector z = {8, 1, 2};
    auto it = std::search (v.begin(), v.end(), z.begin(), z.end());
    if (it != v.end()) {
        std::cout << *it;
    }
    return 0;
}   