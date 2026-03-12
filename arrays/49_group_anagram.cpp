#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
 public:
  static vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> hm;

    for (string str : strs) {
      string key = str;
      sort(key.begin(), key.end());
      hm[key].push_back(str);
    }

    vector<vector<string>> res;
    for (auto& p : hm) {
      res.push_back(p.second);
    }

    return res;
  }
};

int main() {
  vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
  Solution::groupAnagrams(input);
  return 0;
}

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
