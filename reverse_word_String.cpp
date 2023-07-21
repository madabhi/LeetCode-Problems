#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int start, end;
    string f = "", s = "a good   example", temp;
    stack<char> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            end = i;
            while (s[i] != ' ' && i >= 0)
            {
                i--;
            }
            start = i + 1;
            if (start >= 0)
            {
                temp = s.substr(start, end - start + 1);
                f.append(temp);
                temp = "";
            }

            while (st.empty() != true)
            {
                st.pop();
            }
            i++;
        }
        else
        {
            if (st.empty() == true)
            {
                st.push(s[i]);
                if (f.empty() != true)
                {
                    temp = ' ';
                    f.append(temp);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    cout << f;

    return 0;
}