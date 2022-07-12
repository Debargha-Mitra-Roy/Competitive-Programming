/*
    LINK:   https://codeforces.com/problemset/problem/579/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 2 == 1)
        {
            x = x + 1;
            n = n - 1;
        }
        else
        {
            n = n / 2;
        }
    }

    cout << x << "\n";

    return 0;
}