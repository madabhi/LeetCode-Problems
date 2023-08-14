#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<int> vet;
        vector<vector<int>> vec;
        for (int i = 0; i < nums.size(); i++)
        {
            int target = nums[i];
            int start = i+1;
            int end = nums.size() - 1;
            while (start < end)
            {
                int sum = nums[start] + nums[end];

                if (sum > target)
                {
                    end--;
                }
                else if (sum < target)
                {
                    start++;
                }
                else
                {
                    vet.push_back(nums[i]);
                    vet.push_back(nums[start]);
                    vet.push_back(nums[end]);
                    vec.push_back(vet);
                }
            }
        }
        return vec;
    }
};
int main()
{
    system("cls");
    Solution obj;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> bulb = obj.threeSum(nums);
    for (int i = 0; i < bulb.size(); i++)
    {
        cout << bulb[i] << " ";
    }

    return 0;
}