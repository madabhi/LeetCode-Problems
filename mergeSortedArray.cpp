#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0, j = 0;
        int limit = m + n;
        vector<int> final;
        while (m != 0 && n != 0)
        {

            if (nums1[i] <= nums2[j])
            {
                final.push_back(nums1[i]);
                i++;
                m--;
            }

            else if (nums1[i] > nums2[j])
            {
                final.push_back(nums2[j]);
                j++;
                n--;
            }
        }
        if (n != 0)
        {
            for (int a = j; a < nums2.size(); a++)
            {
                final.push_back(nums2[a]);
            }
        }
        else if (m != 0)
        {
            for (int a = i; a < nums1.size(); a++)
            {
                final.push_back(nums1[a]);
            }
        }
        cout << "Before Doing" << endl;
        nums1 = {};

        for (int a = 0; a < limit; a++)
        {
            nums1.push_back(final[a]);
        }

        for (auto ab : nums1)
        {
            cout << ab << " ";
        }
    }
};
int main()
{
    system("cls");
    Solution s;
    vector<int> a = {-1, 0, 0, 3, 3, 3, 0, 0, 0}, b = {1, 2, 2};
    int m = 6, n = 3;
    s.merge(a, m, b, n);

    return 0;
}