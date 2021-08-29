#include <iostream>
#include <array>

void print (const std::array <int,10> &arr ) {
    for (auto el : arr) {
        std::cout << el << " ";
    }
    std::cout << '\n';
}

int main() {
    std::array <int, 10> arr;
    print (arr);
    arr.fill(1);
    print(arr);
    arr.at(3) = 3;
    print(arr);
    std::array <int, 10> array {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
    print(arr);
    print(array);  
    swap (arr, array);
    print(arr);
    print(array);
    arr.swap(array);
    print(arr);
    print(array);
}