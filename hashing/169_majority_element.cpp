#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int, int> numbers;
      for(int num : nums) {
        numbers.insert_or_assign(num, numbers[num] +  1);
      }
      int maxCount = 0;
      int maxNum = 0;
      for(auto [num, count] : numbers) {
        if(count > maxCount) {
          maxCount = count;
          maxNum = num;
        }
      }
      return maxNum;
    }
};

int main() {
    
  return 0;
}
