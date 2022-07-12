/*
    LINK:   https://codeforces.com/contest/236/problem/A
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }

    if (count % 2 == 0)
        cout << "CHAT WITH HER!\n";

    else
        cout << "IGNORE HIM!\n";

    return 0;
}