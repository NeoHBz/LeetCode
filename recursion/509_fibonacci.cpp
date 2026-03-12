#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
 public:
  // int fib(int n) {
  //   if (n <= 1) return n;
  //   return fib(n - 1) + fib(n - 2);
  // }
  static int fib(int n) { 
    vector<int> memo(n + 1, -1);
    return solve(n, memo);
  }

  private:
  static int solve(int n, vector<int>& memo) {
      if (n <= 1) return n;

      if (memo[n] != -1)
          return memo[n];

      memo[n] = solve(n - 1, memo) + solve(n - 2, memo);
      return memo[n];
  }
};

int main() {
  cout << Solution::fib(3);
  return 0;
}
