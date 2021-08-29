#include <algorithm>
#include <iostream>
#include <vector>

int main () {
    std::vector v ={1, 2, 3, 4, 5};
    auto it = std::find_if (v.begin(), v.end(), [](auto e){return e >= 4;});
    if (it != v.end()) {
        std::cout << *it;
    }
    return 0;
}   