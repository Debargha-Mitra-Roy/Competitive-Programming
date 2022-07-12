/*
    LINK:   https://codeforces.com/contest/617/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n;
    if (n >= 5)
    {
        x = n / 5;

        if (n % 5 == 0)
            cout << x;

        else if (n % 5 > 0)
            cout << x + 1;
    }
    else if (n <= 4 && n >= 1)
        cout << "1";

    return 0;
}