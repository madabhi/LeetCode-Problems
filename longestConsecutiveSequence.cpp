#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> vec = {100, 4, 200, 1, 3, 2};
    unordered_set<int> s;
    int maxCount = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        s.insert(vec[i]);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (s.find(vec[i] - 1) != s.end())
        {
            continue;
        }
        else
        {
            int count = 0, current = vec[i];
            while (s.find(current) != s.end())

            {
                count++;
                current++;
            }

            maxCount = max(count, maxCount);
        }
    }
    cout << maxCount;

    // if (vec.empty())
    // {
    //     cout << "Empty";
    // }
    // if (vec.size() == 1)
    // {
    //     cout << "0";
    // }

    // sort(vec.begin(), vec.end());
    // int count = 1, j = 0, maxCount = 0;
    // ;

    // for (int i = j; i < vec.size(); i++)
    // {
    //     if (vec[i] == vec[i + 1])
    //     {
    //         continue;
    //     }
    //     if (vec[i] + 1 == vec[i + 1])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         j = i;
    //         count = 1;
    //     }
    //     if (count > maxCount)
    //         maxCount = count;
    // }
    // cout << maxCount;

    return 0;
}
