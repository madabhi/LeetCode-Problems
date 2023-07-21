#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    int size = a.size();
    stack<int> s;
    for (int i = 0; i < size; i++)
    {
        s.push(a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = s.top();
        s.pop();
    }
    cout << a;
}