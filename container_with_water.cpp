#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int l = 0, r = height.size() - 1;
    cout << r << endl;
    int area = 0;
    while (1)
    {
        int left = height[l];
        cout << left << endl;

        int right = height[r];
        cout << right << endl;

        int min_n = min(left, right);
        cout << min_n;

        int x = min_n * (r - l);
        area = max(area, x);
        if (left > right)
        {
            r--;
        }
        else
        {
            l++;
        }
        break;
    }
    cout << area;

    return 0;
}