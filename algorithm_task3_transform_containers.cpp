#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <map>



// void removeDuplicateFromDeque (std::deque <int> d) {
//     std::sort (d.begin(), d.end());
//     auto it = std::unique (d.begin(), d.end());
//     d.erase (it, d.end());
// }

int main () {
    std::list <std::string> list = {"a", "r", "f", "g", "w", "e", "r", "r", "a", "f", "g"};
    std::deque <int> deq = {1, 4, 5, 2, 1, 6, 7, 4, 5, 3, 5};  
    
    (list.begin(), list.end(),[](){
        return std::unique ()
    });  

    // void removeDuplicateFromList (std::list <std::string> s) {
//     s.sort();
//     auto it = std::unique (s.begin(), s.end());
//     s.erase (it, s.end());
// }    
    // removeDuplicateFromList (list);
    // removeDuplicateFromDeque (deq);

    std::copy (list.begin(), list.end(), std::ostream_iterator <std::string> (std::cout, " "));
    std::copy (deq.begin(), deq.end(), std::ostream_iterator <int> (std::cout, " "));
    std::cout << '\n';
} 