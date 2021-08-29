#include <iostream>
#include <string>

std::string modifyString (std::string& string) {
  string = "Other string";
  return string;
}
// It should modify passed string to text "Other string"

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}