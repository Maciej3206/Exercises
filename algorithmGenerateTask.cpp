//Utwórz wektor intów v2 i wypełnij go wszystkimi intami (pierwszymi elementami pary) z wektora v
//Utwórz wektor stringów v3 i wypełnij go konkatenacją string + dwukropek + int ze wszystkich par z wektora v
//Utwórz wektor charów v4 i wypełnij go co drugą literą alfabetu
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main () {
std::vector <std::pair <int, std::string>> v { {0, "Zero"}, 
                                               {1, "One"}, 
                                               {2, "Two"}, 
                                               {3, "Three"}, 
                                               {4, "Four"}, 
                                               {5, "Five"}};
std::vector <int> v2(v.size());
std::transform (v.begin(), v.end(), v2.begin(), [](auto p){return p.first;});
for (const auto& el : v2) {
    std::cout << el << " ";
}
std::cout << '\n';

std::vector <int> v22;
std::transform (v.begin(), v.end(), std::back_inserter (v22), [](auto p){return p.first;});
for (const auto& el : v22) {
    std::cout << el << " ";
}
std::cout << '\n';

std::vector <std::string> v3(v.size());
std::transform (v.begin(), 
                v.end(), 
                v3.begin(), 
                [](auto p) {return p.second + ": " + std::to_string (p.first);});
for (const auto& el : v3) {
    std::cout << el << " ";
}
std::cout << '\n';

constexpr auto size = 13;
std::vector <char> v4(size);  

std::generate_n (v4.begin(), size, [c = 'a' - 2]() mutable {c += 2; return c;});
for (const auto& el : v4) {
    std::cout << el << " ";
}
std::cout << '\n';
return 0;
} 