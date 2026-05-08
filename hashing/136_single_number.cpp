#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int result = 0;
      for (int num : nums) {
        result ^= num; // XOR
      }
      return result;
    }
    int singleNumberUsingUOM(vector<int>& nums) {
      unordered_map<int, int> numbers;
      for(int num : nums) {
        int existing = numbers[num];
        numbers.insert_or_assign(num, existing + 1);
      }
      for(auto& [num, count] : numbers) {
        if(count < 2) {
          return num;
        }
      }
      return -1;
    }
};

int main() {
  return 0;
}
