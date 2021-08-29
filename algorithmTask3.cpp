// Utwórz Point (int x, y)
// Utwórz std::deque <Point> d = {{1, 3, {0, 0}, {1, 2}, {2, 4}, {4, 1}, {0, 2}, {2, 2}};
// Utwórz funkcję do wypisywania zawartości kontenera d 
// Napisz 2 komparatory
// pointXCompare, który porównuje tylko wartości x ze struktury Point   
// pointYCompare, który porównuje tylko wartości y ze struktury Point
// Sprawdź, czy d jest posortowane względem PointXCompare i PointYCompare
// Użyj stable_sort do posortowania d względem wartości x 
// Użyj sort do posortowania d względem wartości y 

#include <algorithm>
#include <deque>
#include <iostream>

struct Point {
    int x, y;
};

template <typename Container>

void Print (Container c) {
    for (const auto & el : c) {
        std::cout << el.x << ", " << el.y << '\t'; 
    }
}

int main() {
    std::deque <Point> d = {{1, 3}, {0, 0}, {1, 2}, {2, 4}, {4, 1}, {0, 2}, {2, 2}};
    Print(d);
    std::cout << '\n';

    auto pointXCompare = [](const auto &lhs, const auto &rhs){
        return lhs.x < rhs.x;
    };     
    auto pointYCompare = [](const auto &lhs, const auto &rhs){
        return lhs.y < rhs.y;
    };
    std::cout << std::boolalpha << std::is_sorted (d.begin(), d.end(), pointYCompare);
    std::cout << '\n';
    
    std::stable_sort (d.begin(), d.end(), pointXCompare);
    Print (d);
    std::cout << '\n';
    
    std::sort (d.begin(), d.end(), pointYCompare);
    Print (d);
    std::cout << '\n';

    return 0;    
}