/*
    LINK:   https://codeforces.com/contest/112/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int i;
    int n = s1.length();

    for (i = 0; i < n; i++)
    {
        if (isupper(s1[i]))
            s1[i] = s1[i] + 32;

        if (isupper(s2[i]))
            s2[i] = s2[i] + 32;
    }

    for (i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            cout << 1;
            break;
        }

        else if (s1[i] < s2[i])
        {
            cout << -1;
            break;
        }
    }
    if (i == n)
        cout << 0;

    cout << "\n";

    return 0;
}