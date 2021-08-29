#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main () {

std::vector v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
for (const auto &el : v) {
    std::cout << el << " ";
}
std::cout << '\n';

std::random_device (rg);
std::mt19937 g (rg());
std::shuffle (v.begin(), v.end(), g);

for (const auto &el : v) {
    std::cout <<el << " ";
}
std::cout << '\n';

std::copy (v.begin(), v.end(), std::ostream_iterator <int> (std::cout, " "));

std::cout << '\n';

std::mt19937 gk (5);
std::shuffle (v.begin(), v.end(), gk);

for (const auto &el : v) {
    std::cout <<el << " ";
}
std::cout << '\n';
}
