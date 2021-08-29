#include <algorithm>
#include <iostream>
#include <map>

void display (const std::multimap <int, std::string> &map) {
    for (auto& el : map) {
        if (el.second.size() == 3) {
            std::cout << el.second <<'\t'; 
        }
    }
}

int main() {
    std::multimap <int, std::string> map;
        map.insert ({5, "Ala "});
        map.insert ({5, "Ma "});
        map.insert ({5, "Kota "});
        map.insert ({5, "A "});
        map.insert ({5, "Kot "});
        map.insert ({5, "Ma "});
        map.insert ({5, "Ale"});

// for (auto& el : map) {
//     std::cout << el.first << " | " << el.second <<'\n';
for (auto& [k, v] : map) {
    std::cout << k << " | " << v <<'\n';
}
    display (map);
}