/*
    LINK:   https://codeforces.com/contest/266/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    n = s.length();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }

    cout << count << "\n";

    return 0;
}