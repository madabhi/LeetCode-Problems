#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> st = {5, 2, 6, 1, 4};
    int maxProfit = 0, minSofar = st[0];
    for (int i = 0; i < st.size(); i++)
    {
        minSofar = min(minSofar, st[i]);

        maxProfit = max(maxProfit, st[i] - minSofar);
    }

    cout << maxProfit;
    return 0;
}