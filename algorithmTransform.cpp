#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int main () {

    std::vector v = {1, 2, 3, 4, 5, 6, 7, 8};
    std::list l = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    std::transform (v.begin(), 
                    v.end(), 
                    l.begin(), 
                    v.begin(),
                    [](auto first, auto second){
                        return (first + second);
                    });
    for (auto& el : v) {
        std::cout << el << ", ";
    }
    std::cout << '\n';
}
