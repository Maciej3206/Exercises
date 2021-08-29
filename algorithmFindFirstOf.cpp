#include <algorithm>
#include <iostream>
#include <vector>

int main () {
    std::vector v ={1, 5, 6, 3, 4};
    std::vector z ={3, 5, 8};
    
    auto it = std::find_first_of (v.begin(), v.end(), z.begin(), z.end());
    //znajdz pierwszy element z "v" w "z"
    auto it1 = std::find_first_of (z.begin(), z.end(), v.begin(), v.end());
    //znajdz pierwszy element z "z" w "v"
    if (it != v.end()) {
        std::cout << *it;
    }
    if (it1 != v.end()) {
        std::cout << *it1;
    }
    return 0;
}   