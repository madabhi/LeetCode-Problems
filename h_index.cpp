#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> nums = {1};
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int h_index = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > h_index && nums.size() > 1)
        {
            h_index++;
        }
    }
    if (nums.size() < 2 && nums[0] != 0)
    {
        h_index++;
    }

    cout << h_index;

    return 0;
}