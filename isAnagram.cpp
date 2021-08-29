#include <iostream>
#include <string>
#include <algorithm>

bool IsAnagram(std::string input1, std::string input2) {
  std::sort(input1.begin(), input1.end()); 
  std::sort(input2.begin(), input2.end());
  for (int i = 0 ; i < input1.length() ; ++i) {
    if (input1[i] != input2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  std::cout << IsAnagram ("bd", "db") << '\n';;
}