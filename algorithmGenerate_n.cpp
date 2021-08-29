#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main () {
    std::mt19937 rng;
    std::generate_n (std::ostream_iterator 
                          <std::mt19937::result_type> 
                          (std::cout, " "), 
                     5, 
                     std::ref (rng));
}