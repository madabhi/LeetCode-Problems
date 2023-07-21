#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> nums = {2, 3, 1, 1, 4};

    int reach = 0, steps = 0, hold = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        reach = max(reach, nums[i] + i);
        if (hold == i)
        {
            hold = reach;
            steps++;
        }
    }
    cout << "Steps are " << steps;

    return 0;
}