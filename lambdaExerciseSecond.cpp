#include <iostream>
#include <algorithm>
#include <vector>

void print (const std::vector <int> &v) {
    for (auto el : v) {
        std::cout << el << " ";
    }
    std::cout << '\n';
}

bool cmp(const int &a, const int &b) {
    return a > b;
}

int main() {
    /*
    std::vector <int> v {1, 13, 4, 22, 7, 9, 33, 12, 16};
    print (v);
    std::sort (v.begin(), v.end());
    print (v);
    std::sort (v.begin(), v.end(), cmp);
    print (v);
    std::sort (v.begin(), v.end(), [] (const int &a, const int &b) {
        return a > b;
    });
    print (v);
    */
    //[](){std::cout << "Hello World" << '\n';};
    //[]{};
    //[]{std::cout << "Hello World" << '\n';}();
    int a = 10;
    //[a]() mutable {std::cout << ++a << '\n';}();
    //std::cout << a << '\n';
    //[=]() {std::cout << ++a << '\n';}();
    //[&]() {std::cout << ++a << '\n';}();
    [&a]() {std::cout << ++a << '\n';}();
    //auto l = [&a]() {std::cout << ++a << '\n';}();
    //l();
    std::cout << a << '\n';
    return 0;
}