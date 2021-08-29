#include <algorithm>
#include <iostream>
#include <vector>

int main () {

int a [] = {1, 2, 3, 4, 5, 6};
for (const auto& el : a) {
    std::cout << el << " ";
}
std::cout << '\n';

std::reverse (std::begin (a), std::end (a));
for (const auto& el : a) {
    std::cout << el << " ";
}
std::cout << '\n';
}