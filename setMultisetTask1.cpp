#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <vector>

int main() {
    std::vector <int> numbers(41);
    std::iota (numbers.begin(), numbers.end(), -20);
    for (auto &el : numbers) {
        std::cout << el << " "; 
    }
    std::cout << '\n';

    std::set <int, std::greater<int>> numbersSet (numbers.begin(), numbers.end());

    for (auto &el : numbersSet) {
        std::cout << el << " ";  
    }
    std::cout << '\n';

    numbersSet.insert (-10);
    numbersSet.emplace (0);
    numbersSet.emplace_hint (numbersSet.begin(), 10);
    numbersSet.emplace_hint (numbersSet.begin(), 100);
    numbersSet.emplace_hint (numbersSet.begin(), -100);

    for (auto &el : numbersSet) {
        std::cout << el << " ";  
    }
    std::cout << '\n';

    for (auto el :numbers) {
        std::cout << el << " ";
    }
    std::cout<<'\n';
    std::iota (numbers.begin(), numbers.end(), 0);
    std::multiset <int> numberMs (numbers.begin(), numbers.end());
    for (auto el : numberMs) {
        std::cout << el << " ";
    } 
    std::cout << '\n';

    numberMs.insert (-10);
    numberMs.emplace (0);
    numberMs.emplace_hint (numberMs.begin(), 10);
    numberMs.emplace_hint (numberMs.begin(), 100);
    numberMs.emplace_hint (numberMs.begin(), -100);

    for (auto el : numberMs) {
        std::cout << el << " ";
    } 
    std::cout << '\n';

    numberMs.merge (numbersSet);    

    for (auto el : numberMs) {
        std::cout << el << " ";
    } 
    std::cout << '\n';

    auto [l, u] = numberMs.equal_range(0);
    for ( ; l != u ; ++l) {
        std::cout << *l << " ";
    } 
    std::cout << '\n';
    return 0;
}
