#include <iostream>

bool is_string_palindrome(std::string str)
{
  for (int i = 0 ; i < str.length() ; ++i) {
    if (str [i] != str [str.length()-1-i]) {
      return false;
      }
    } return true;
}

int main() {
  std::cout << is_string_palindrome ("madame") << '\n';
}