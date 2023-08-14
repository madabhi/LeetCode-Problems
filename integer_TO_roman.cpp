#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string intToRoman(int num)
    {
        string s;
        while (num > 0)
        {
            if (num >= 1000)
            {
                s.append("M");
                num -= 1000;
            }
            else if (num >= 900 && num < 1000)
            {
                s.append("CM");
                num -= 900;
            }
            else if (num >= 500 && num < 900)
            {
                s.append("D");
                num -= 500;
            }
            else if (num >= 400 && num < 500)
            {
                s.append("CD");
                num -= 400;
            }
            else if (num >= 100 && num < 400)
            {
                s.append("C");
                num -= 100;
            }
            else if (num >= 90 && num < 100)
            {
                s.append("XC");
                num -= 90;
            }
            else if (num >= 50 && num < 90)
            {
                s.append("L");
                num -= 50;
            }
            else if (num >= 40 && num < 50)
            {
                s.append("XL");
                num -= 40;
            }

            else if (num >= 10 && num < 40)
            {
                s.append("X");
                num -= 10;
            }
            else if (num >= 9 && num < 10)
            {
                s.append("IX");
                num -= 9;
            }
            else if (num >= 5 && num < 9)
            {
                s.append("V");
                num -= 5;
            }
            else if (num >= 4 && num < 5)
            {
                s.append("IV");
                num -= 4;
            }
            else if (num >= 1 && num < 4)
            {
                s.append("I");
                num -= 1;
            }
        }
        return s;
    }
};
int main()
{
    system("cls");
    Solution Obj;
    string s = Obj.intToRoman(1994);
    cout << s;

    return 0;
}