#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {0, -2, 3, 4, 5};
    int product = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        product *= nums[i];
        if (nums[i] == 0)
        {
            cout << "0";
        }
    }
    cout << "Product is: " << product << endl;
    int absValue = abs(product);
    if (absValue == product)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
}