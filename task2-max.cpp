#include <iostream>

int max (int a, int b, int c) {
  if (a >= b && a >= c) return a;
  if (b >= c && b >= a) return b;
  if (c >= b && c >= b) return c;
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
