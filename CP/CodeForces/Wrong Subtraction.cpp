/*
    LINK:   https://codeforces.com/problemset/problem/977/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    while (k--)
    {
        if (n % 10 == 0)
            n = n / 10;

        else
            n = n - 1;
    }

    cout << n << "\n";

    return 0;
}