#include <iostream>
#include <string>
#include <algorithm>

int main() {
    auto print = [](std::string str) {
        str.insert (0, "\"");
        str += '"';
        return str;};
    std::cout << print ("krowa") << '\n';
    }