// Utwórz std::vector <int> v={8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9}; 
// Usuń wszystkie duplikaty z v
// Wypisz wszystkie elementy używając std::copy i std::ostream_iterator
// Pomieszaj losowo wszystkie elementy
// Wypisz je jeszcze raz

#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main () {
    std::vector <int> v={8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};
    for (const auto & el : v) {
        std::cout << el << " ";
    }
    std::cout << '\n';
    
    std::sort (v.begin(), v.end());

    // for (const auto & el : v) {
    //     std::cout << el << " ";
    // }
    // std::cout << '\n';
    
    auto it = std::unique (v.begin(), v.end());
    
    // for (const auto & el : v) {
    //     std::cout << el << " ";
    // }
    // std::cout << '\n';
    
    v.erase (it, v.end());

    for (const auto & el : v) {
        std::cout << el << " ";
    }
    std::cout << '\n';

    std::random_device (rg);
    std::mt19937 g(rg());
    std::shuffle (v.begin(), v.end(), g);

    std::copy (v.begin(), v.end(), std::ostream_iterator <int> (std::cout, " "));
    std::cout << '\n';
}   