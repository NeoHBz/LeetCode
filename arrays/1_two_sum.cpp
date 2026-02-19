#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;

    for (size_t i = 0; i < nums.size(); ++i) {
      int complement = target - nums[i];

      auto hashComplement = hash.find(complement);
      if (hashComplement != hash.end()) return {hashComplement->second, (int)i};

      hash[nums[i]] = i;
    }
    return {0, 0};
  }
};
