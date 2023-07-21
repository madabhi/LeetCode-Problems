#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ary = {1, 0, 3, 4, 0, 2};
    int n = ary.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (ary[i] != 0)
        {
            ary[j++] = ary[i];
        }
    }
   for (int i = j; i < n; i++)
   {
        ary[i] = 0;
   }
   

    for (int i = 0; i < ary.size(); i++)
    {
        cout << ary[i] << " ";
    }
}