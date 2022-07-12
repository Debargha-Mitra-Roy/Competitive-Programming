/*
	LINK:	https://codeforces.com/problemset/problem/1602/A
*/

#include <iostream>
using namespace std;

void two_subsequences(string s)
{
    int n = s.length();
    int flag = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[flag])
            flag = i;
    }

    cout << s[flag] << " ";

    for (int i = 0; i < n; i++)
    {
        if (i != flag)
            cout << s[i];
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        two_subsequences(s);
    }

    return 0;
}