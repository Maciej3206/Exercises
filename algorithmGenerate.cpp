#include <algorithm>
#include <iostream>
#include <vector>

int main () {

std::vector <int> v (10);
std::generate (v.begin(), v.end(), [i{0}]() mutable {return i++;});

for (auto& el : v) {
    std::cout << el << " ";
}
}