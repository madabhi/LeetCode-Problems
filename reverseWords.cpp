#include <bits/stdc++.h>
using namespace std;

void Ulta(string a)
{
    int l, r = l = 0;
    int len = a.size();
    while (l < len)
    {
        while (a[r] != ' ' && r < len)
        {
            r++;
        }
        reverse(a.begin() + l, a.begin() + r);
        l = r+1;
        r=l;
    }
    cout << a;
}

int main()
{
    string a = "abhinav singh";
    Ulta(a);
}