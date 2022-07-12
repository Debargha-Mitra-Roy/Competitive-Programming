/*
    LINK:   https://codeforces.com/contest/282/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s[0] == '+')
            x++;

        if (s[0] == '-')
            x--;

        if (s[2] == '+')
            x++;

        if (s[2] == '-')
            x--;
    }
    
    cout << x << "\n";

    return 0;
}