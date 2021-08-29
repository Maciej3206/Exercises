#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

struct Point {
    int x;
    int y;
};

double radius (Point p) {
    return std::sqrt (std::pow (p.x, 2) + std::pow (p.y, 2));
}

int main() {
    std::map <std::string, Point> cities {
            {"Wroclaw", {17, 51}},
            {"Moskwa", {37, 55}}, 
            {"Nowy Jork", {-74, 40}},
            {"Sydney", {151, -33}}
    };
    for (auto& el : cities) {
        //[city, coord]
        std::cout << el.first << " | " << el.second.x << "\n";
    }
    std::cout << '\n';
    // std::copy_if (cities.begin(), cities.end(), std::ostream_iterator <double> (std::cout, " "), 
    //                 [](std::map <std::string, Point>& el){
    //                    return (sqrt (std::pow (el.second.x, 2) + 
    //                                     std::pow (el.second.y, 2)) < 70);
    //                 });
    for (auto& el : cities) {
        if (radius(el.second) < 70) {
            std::cout << el.first << " | " << radius(el.second) << '\n';
        }
    }
    std::cout << '\n';

    // auto isCloserThan70 = [](auto& cities.second){return radius (cities.second) < 70; };

    // for (auto& el : cities) {
    //     if (isCloserThan70(cities) < 70) {
    //         std::cout << cities.first << " | " << radius(cities.second) << '\n';
    //     }
    // }

    for (auto& el : cities) {   
        if (el.first == "Sydney") {
            auto c = cities ["Sydney"];
            std::cout << el.first << " | " << c.x << ", " << c.y << '\n';
        }
    }
}
