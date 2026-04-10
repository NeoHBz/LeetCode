// input = "helloworld@123"
// query =  ['h', 'd', '@', '3']

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  static vector<int> array_hashing(string input, vector<char> queries) {
    int hash[256] = {0};
    for (auto c : input) {
      hash[(int)c] += 1;
    }
    vector<int> count(queries.size(),0);
    int i = 0;
    for (auto query : queries) {
      count[i] = hash[(int)query];
      i++;
    }

    return count;
  }
};

int main() {
  string str = "helloworld@123";
  vector queries = {'h', 'l', 'd', '@', '3'};
  vector<int> count = Solution::array_hashing(str, queries);
  cout << "Count: ";
  for (int c : count) {
    cout << c << " ";
  }
  return 0;
}
