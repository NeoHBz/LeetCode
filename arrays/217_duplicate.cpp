#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool static containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        int length = nums.size();
        for (int num : nums) {
            if (seen.find(num) != seen.end())
                return true;
            seen.insert(num);
        }
        return false;
    }
};

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << Solution::containsDuplicate(vec);
    return 0;
}
