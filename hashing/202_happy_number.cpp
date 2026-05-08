#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
  static int splitSquare(int n) {
    int result = 0;
    while (n > 0) {
      int last = n % 10;
      result += last * last;
      n /= 10;
    }
    return result;
  }

  static bool isHappy(int n) {
    unordered_set<int> visited;
    while (n != 1) {
      if (visited.contains(n)) return false;

      visited.insert(n);
      n = splitSquare(n);
    }
    
    return true;
  }
};
int main() {
    
    return 0;
}
