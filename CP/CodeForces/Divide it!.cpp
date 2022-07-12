/*
    LINK:   https://codeforces.com/problemset/problem/1176/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        int x = 0;

        while (n % 2 == 0)
        {
            n = n / 2;
            x = x + 1;
        }

        while (n % 3 == 0)
        {
            n = n / 3;
            x = x + 2;
        }

        while (n % 5 == 0)
        {
            n = n / 5;
            x = x + 3;
        }

        if (n == 1)
            cout << x << "\n";

        else
            cout << "-1\n";
    }

    return 0;
}