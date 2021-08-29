#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector <int> vec {1, 2, 3, 4, 5};
    std::for_each (vec.begin(), vec.end(),[index = 0](int el) mutable {
            std::cout << index << ": " << el << " | ";
        index++;
    });
}

