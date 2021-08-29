#include <algorithm>
#include <iostream>
#include <vector>

int main () {
    std::vector v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};
    std::cout << std::count_if (begin (v), end (v), [](auto e){return e >= 5;}) << '\n';
    std::cout << std::boolalpha << any_of (v.begin(), v.end(), [](auto e){return e <= 2;}) << '\n';
    std::cout << std::boolalpha << all_of (v.begin(), v.end(), [](auto e){return e >= 1;}) << '\n';
    return 0;
}   