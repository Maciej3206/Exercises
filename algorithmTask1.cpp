// Utwórz wektor v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9}; (ten sam co ostatnio)
// Znajdź wszystkie elementy większe od 6 i wypisz je
// Znajdź wszystkie elementy równe 2, 4, 6 lub 8 i wypisz je
// Przeszukaj wektor v w poszukiwaniu zakresów {6, 6} i {7, 7}
// Użyj std::adjacent_find na wektorze v 

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <vector>

int main () {

    std::vector v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};
    auto it = find_if (v.begin(), v.end(), [](auto e){return e > 6;});
    // std::cout << *it << " ";
    // std::cout << '\n';
    
    while (it != v.end()) {
        std::cout << *it << " ";
        it = find_if (std::next(it), v.end(), [](auto e){return e > 6;});
    }

    std::cout << '\n';
    
    std::copy_if (v.begin(), 
                  v.end(), 
                  std::ostream_iterator <int> (std::cout, " "), 
                  [](auto e){return e > 6;});
    std::cout << '\n';

    // it = std::find_if (v.begin(), v.end(), [](auto e){return (e == 2 || e == 4 || e == 6 || x == 8);});
    // std::cout << *it << " ";
    // std::cout << '\n';

    std::copy_if (v.begin(), 
                  v.end(), 
                  std::ostream_iterator <int> (std::cout, " "), 
                  [](auto e){
                      return e==2 || e==4 || e == 6 || e == 8;
                  });

    std::cout << '\n';

    std::array <int, 2> a = {6, 6};
    it = std::search (v.begin(), v.end(), a.begin(), a.end());
    if (it != v.end()) {
        std::cout << *it << " ";
    }
    it++;
    std::cout << *it << " ";
    it++;
    std::cout << *it << " ";

    std::cout << '\n';
    
    it = std::search_n (v.begin(), v.end(), 2, 6);
    if (it != v.end()) {
        std::cout << *it << " ";
    }
    it++;
    std::cout << *it << " ";
    it++;
    std::cout << *it << " ";

    std::cout << '\n';    

    it = std::adjacent_find (v.begin(), v.end());
    while (it != v.end()) {
        std::cout << *it << " ";
        it++;
        std::cout << *it << '\n';
        it = std::adjacent_find (std::next(it), v.end());        
    }

    std::cout << '\n';    

    return 0;
}

/*
    auto it = find_if (v.begin(), v.end(), [](auto e){return e > 6;});

    while (it != v.end()) {
        std::cout << *it << " ";
        it = find_if (std::next(it), v.end(), [](auto e){return e > 6;});
    }
    std::cout << '\n'; 

    std::copy_if (v.begin(), 
                  v.end(), 
                  std::ostream_iterator <int> (std::cout, " "),
                  [](auto e){return e > 6;});

    // auto it = std::adjacent_find (v.begin(), v.end());
    // std::cout << it << " ";

    return 0;
}
*/      