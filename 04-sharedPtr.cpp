
#include <iostream>
#include <memory>

void foo (const std::shared_ptr<int> a) {
  std::cout << (*a = 20) << " | " << a.use_count() << '\n';
}
// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout << "number of use_cout before foo: " << number.use_count() << '\n';
    // display the value under number pointer and use_count() of it
    foo(number);
    std::cout << "number of use_cout after foo: " << number.use_count() << '\n';
    // display the value under number pointer and use_count() of it

    return 0;
}