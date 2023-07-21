#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> Gas_station = {3, 1, 1}, Cost = {1, 2, 2};
    int gas = 0, started = 0, gasSum = 0, costSum = 0;
    for (int i = 0; i < Gas_station.size(); i++)
    {
        gasSum += Gas_station[i];
        costSum += Cost[i];
    }
    if (costSum > gasSum)
    {
        cout << "Not Possible ";
    }
    else
    {
        for (int i = 0; i < Gas_station.size(); i++)
        {
            gas += Gas_station[i] - Cost[i];
            if (gas < 0)
            {
                gas = 0;
                started = i + 1;
            }
        }
    }

    cout << "Start from " << started;

    return 0;
}