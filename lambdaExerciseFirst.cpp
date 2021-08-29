#include <iostream>

int square (int x) {
    return x * x;
}

int calculate (int x, int(*f)(int)) {
    return f(x);
}

int main() {
  int x = 20;
  auto y = square (x);
  std::cout << y << std::endl;

    auto z = calculate (20, square);
    std::cout << z << std::endl;
}