#include <iostream>
#include <memory>

std::shared_ptr <int> calculateProduct (int a, int b) {
  std::shared_ptr <int> multiply = std::make_shared <int> (a * b);
  return multiply;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}