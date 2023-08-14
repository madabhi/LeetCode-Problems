#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int candy(vector<int> &ratings)
    {
        int size = ratings.size();
        vector<int> vec(size, 1);
        int noCandy = 0, j = 0;
        for (int i = 1; i < size; i++)
        {
            if ((ratings[i] <= ratings[i - 1]) != true && vec[i] <= vec[i - 1])
            {
                vec[i] = vec[i - 1] + 1;
            }
        }
        for (int i = size - 2; i >= 0; i--)
        {
            if (ratings[i] > ratings[i + 1] && vec[i] <= vec[i + 1])
            {
                vec[i] = vec[i + 1] + 1;
            }
        }
        int sum = 0;

        for (int k = 0; k < size; k++)
        {
            sum += vec[k];
        }
        return sum;
    }
};
int main()
{
    system("cls");
    Solution Obj;
    vector<int> ratings = {1, 3, 2, 2, 1};
    int candy = Obj.candy(ratings);
    cout << candy;

    return 0;
}