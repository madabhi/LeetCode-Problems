#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int j = 1;
        int size = temperatures.size();
        vector<int> final(size);

        stack<int> stk;
        if (stk.empty())
        {
            stk.push(0);
        }
        while (j < size)
        {
            if (stk.empty())
            {
                stk.push(j);
            }
            if (temperatures[stk.top()] < temperatures[j] && !stk.empty())
            {
                while (stk.empty() != true && (temperatures[stk.top()] < temperatures[j]))
                {
                    int i = stk.top();
                    stk.pop();
                    final[i] = j - i;
                }

                stk.push(j);
                j++;
            }
            else if (temperatures[stk.top()] == temperatures[j] && !stk.empty())
            {
                // int i = stk.top();
                // stk.pop();
                stk.push(j);
                // final[i] = 0;
                j++;
                continue;
            }
            else if (temperatures[stk.top()] > temperatures[j] && !stk.empty())
            {
                if (j < size)
                {
                    stk.push(j);
                    j++;
                }
                else
                {
                    final[stk.top()] = 0;
                    stk.pop();
                }
            }
            else
            {
                break;
            }
        }

        for (int i = 0; i < final.size(); i++)
        {
            cout << final[i] << " ";
        }
    }
};
int main()
{
    vector<int> temperatures = {89, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    Solution s1;
    s1.dailyTemperatures(temperatures);

    return 0;
}