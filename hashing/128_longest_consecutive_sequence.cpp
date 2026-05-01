#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    static int longestConsecutive(vector<int>& nums) {
      unordered_set<int> numbers;
      for(int num : nums) {
        numbers.insert(num);
      }

      int longest = 0;
      for(int num : numbers) {
        // only start if the number is a sequence starter: num-1 does not exists
        if (numbers.contains(num - 1)) continue;
        int cur = 1;
        while (numbers.contains(num + 1)) {
          cur++;
          num += 1;
        }
        if (cur > longest) longest = cur;
      }
      return longest;
    }
};

int main() {
  vector<int> nums = { 100, 4, 200, 1, 3, 2 };
  cout << Solution::longestConsecutive(nums);
  return 0;
}
