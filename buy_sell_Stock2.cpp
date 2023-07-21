#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> nums = {7, 6, 4, 3, 1};
    int maxProfit = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            maxProfit += nums[i + 1] - nums[i];
        }
    }
    cout << "Max Profit is " << maxProfit;

    return 0;
}