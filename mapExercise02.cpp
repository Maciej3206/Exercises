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
    auto compRadius = [](const auto &lhs, const auto &rhs){
        return radius(lhs) < radius(rhs);
    };

std::map <Point, std::string, decltype (compRadius)> InvertCities = {{
    {{17, 51}, "Wroclaw"},
    {{37, 55}, "Moskwa"},
    {{-74, 40}, "Nowy Jork"},
    {{151, -33}, "Sydney"},
}, compRadius};

for (auto& el : InvertCities) {
    std::cout << el.second << '\t'<< el.first.x << ", " << el.first.y << '\n';
}

std::cout << '\n';

for (auto el : InvertCities) {
    if (radius (el.first) < 70) {
        std::cout << el.second << '\t'<< el.first.x << ", " << el.first.y << " odleglosc: " << radius (el.first) << '\n';        
    }
}


return 0;
}



/*

struct Point {
    int x;
    int y;
    bool operator< (const Point& other) const {
        return x < other.x && y < other.y;
    }
};

double radius (Point p) {
    return std::sqrt (std::pow (p.x, 2) + std::pow (p.y, 2));
}

int main() {
    auto compRadius = [](const auto& lhs, const auto& rhs) {
        return radius (lhs) < radius (rhs);
    };

    std::map <Point, std::string, decltype(compRadius)> citiesInverted = {{
            {{17, 51}, "Wroclaw"},
            {{37, 55}, "Moskwa"}, 
            {{-74, 40}, "Nowy Jork"},
            {{151, -33}, "Sydney"},
    }, compRadius};

    for (auto& el : citiesInverted) {
        //[city, coord]
        std::cout << el.second << " | " << el.first.x << " | " << el.first.y << "\n";
    }
    std::cout << '\n';
    
    // for (auto& el : citiesInverted) {
    //     if (radius(el.second) < 70) {
    //         std::cout << el.first << " | " << radius(el.second) << '\n';
    //     }
    // }
    std::cout << '\n';


    // for (auto& el : cities) {   
    //     if (el.first == "Sydney") {
    //         auto c = cities ["Sydney"];
    //         std::cout << el.first << " | " << c.x << ", " << c.y << '\n';
    //     }
    // }
}
*/