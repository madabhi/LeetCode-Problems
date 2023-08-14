#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size(), max = nums.size();
        int i = 0, j = 0, sum = 0, count = 0, temp = 0;
        while (i < n)
        {   
            
            temp = nums[j] + sum;
            if (nums[j] == target)
            {
                return 1;
            }
            if (temp == target)
            {

                max = min(max, count + 1);
                i++;
                j = i;
                sum = 0;
                temp = 0;
                count = 0;
            }
            if (temp < target)
            {
                sum += nums[j];
                count++;
                j++;
            }
            else if (temp > target || j > n)
            {
                i++;
                j = i;
                sum = 0;
                temp = 0;
                count = 0;
            }
        }
        if (count > 0)
        {
            return max;
        }
        return count;
    }
};
int main()
{
    system("cls");
    Solution obj;
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1};
    int target = 4;
    int result = obj.minSubArrayLen(target, nums);
    cout << "\nResult is " << result;

    return 0;
}