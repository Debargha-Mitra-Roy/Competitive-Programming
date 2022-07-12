/*
    LINK:   https://codeforces.com/problemset/problem/271/A
*/

#include <iostream>
using namespace std;

int main()
{
    int y, a, b, c, d;
    cin >> y;

    for (int i = 0; i < 1; i++)
    {
        y++;
        int x = y;

        a = x % 10;
        x = x / 10;

        b = x % 10;
        x = x / 10;

        c = x % 10;
        x = x / 10;

        d = x % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y;
            break;
        }
    }
    cout << "\n";

    return 0;
}