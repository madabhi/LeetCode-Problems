#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3}, vec;
    int i = 0;
    for (auto e : nums)
    {
        if (i == 0 || i == 1 || nums[i - 2] != e)
        {
            nums[i] = e;
            i++;
        }
    }
    cout << i;
    return 0;
}