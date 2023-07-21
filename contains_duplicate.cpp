#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> G;
            for (int i = 0; i < nums.size(); i++)
        {
            if (G[nums[i]])
            {
                return true;
            }
            G[nums[i]]++;
        }

        return false;
    }
};

int main()
{
    Solution s1;
    vector<int> a = {1, 2, 5, 4};
    cout << s1.containsDuplicate(a);
}