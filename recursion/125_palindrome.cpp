#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
  static bool isPalindrome(string s) {
    string sanitized;
    for (char c : s) {
      int cInt = (int)c;
      if ((cInt > 47 && (int)c < 58) || (cInt > 96 && cInt < 123) ||
          (cInt > 64 && cInt < 91)) {
        sanitized += tolower(c);
      }
    }
    if(sanitized.length() < 2) {
      return true;
    }
    int i = 0, j = sanitized.length() - 1;
    while (i < j) {
      if (sanitized[i] != sanitized[j]) return false;
      i++;
      j--;
    }
    return true;
  }
};
int main() {
  string s = "0P";
  cout << Solution::isPalindrome(s);
  return 0;
}
