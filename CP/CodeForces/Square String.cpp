/*
    LINK:   https://codeforces.com/contest/1619/problem/A
*/

#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        if (n & 1)
        {
            cout << "NO\n";
            continue;
        }

        bool flag = true;

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[i + n / 2])
                flag = false;
        }

        if (flag)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}