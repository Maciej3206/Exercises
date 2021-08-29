#include <iostream>
#include <set>
#include <vector>

int main() {
    std::vector <int> v = {4, 5, 7, 12, 3, 0, 6, 4, 56, 37, 8, 23, 4, 5, 7, 5, 1};
    for (auto &el : v) {
        std::cout << el << " ";
    }
    std::cout << '\n';

    std::set <int> s {v.begin(), v.end()};
    for (auto & el : s) {
        std::cout << el << " ";
    }
    std::cout << '\n';

    std::set <int, std::greater<int>> s2 {v.begin(), v.end()};
    for (auto & el : s2) {
        std::cout << el << " ";
    }
    std::cout << '\n';

    std::multiset <int> ms (v.begin(), v.end());
    for (auto & el : ms) {
        std::cout << el << " ";
    }
    std::cout << '\n';

    std::multiset <int, std::greater<int>> ms1 (v.begin(), v.end());
    for (auto & el : ms1) {
        std::cout << el << " ";
    }
    std::cout << '\n';
}
