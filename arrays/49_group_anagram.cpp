#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
 public:
  static vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // Map to group words by their sorted form (anagram key)
    map<string, vector<string>> hm;

    // Iterate through each string in input
    for (string str : strs) {
      string key = str;

      // Sort characters to form the canonical anagram key
      // Example: "eat", "tea", "ate" -> "aet"
      sort(key.begin(), key.end());

      // Group original string under its sorted key
      hm[key].push_back(str);
    }

    vector<vector<string>> res;

    // Collect all grouped anagrams from the map
    for (auto& p : hm) {
      res.push_back(p.second); // p.second contains all anagrams for a key
    }

    return res; // Return grouped anagrams
  }
};

int main() {
  // Sample input
  vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};

  // Call function (result not printed here)
  Solution::groupAnagrams(input);

  return 0;
}

// Input: strs = ["eat","tea","tan","ate","nat","bat"]

// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
