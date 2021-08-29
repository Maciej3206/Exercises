#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    std::vector v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int a = 5;
    // auto print = [](const int& el){std::cout << el;};
    // std::for_each (v.begin(), v.end(), [](const int& el){std::cout << el;});
    //auto f = [v](){
    [v](){
        for (auto el : v) {
            std::cout << el << " ";
        }
        std::cout << '\n';    
    }();
    auto f = [](auto a){
        std::cout << a << ' ';
    };
    // f(42);
    
    std::for_each (v.begin(), v.end(), f);
    return 0;
}