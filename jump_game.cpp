#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> nums = {2, 5, 0, 0};
    int reach = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (reach >= i)
        {
            if (nums[i] + i > reach)
            {
                reach = max(reach, i + nums[i]);
            }
            if (reach >= nums.size() - 1)
            {
                cout << "Yes";
            }
        }
    }

    return 0;
}