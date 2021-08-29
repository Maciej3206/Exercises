#include <iostream>

bool are_all_characters_unique(std::string str)
{
    // Add your code below this line. Do not modify any other code.                   
    for (int i = 0 ; i < str.length() ; ++i) {
        for (int j = i+1 ; j < str.length() ; ++j) {
            if (str[i] == str[j]) {
                return false;
            }
        }
    }
    return true;
    // Add your code above this line. Do not modify any other code.
}

int main() {
  std::cout << are_all_characters_unique ("ala") << '\n';
}