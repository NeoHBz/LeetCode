#include <iostream>
#include <string>
// #include <algorithm>
#include <map>
using namespace std;

class Solution
{
public:
  bool static isAnagram(string source, string target)
  {
    if (source.length() != target.length())
      return false;
    // // n log n since sort is involved
    // sort(source.begin(), source.end());
    // sort(target.begin(), target.end());
    // if (source == target)
    //   return true;
    // return false;

    // updated approach for O(n)
    map<char, int> count;
    for (char c : source)
    {
      int cur = count[c];
      count.insert_or_assign(c, cur + 1);
    }
    for (char c : target)
    {
      int cur = count[c];
      count.insert_or_assign(c, cur - 1);
    }
    for(auto const& [key, val] : count) {
      if(val != 0) {
        return false;
      }
    }
    return true;
  }
};

int main()
{
  string a = "xanagram";
  string b = "nagaram";
  cout << Solution::isAnagram(a, b);
  return 0;
}
