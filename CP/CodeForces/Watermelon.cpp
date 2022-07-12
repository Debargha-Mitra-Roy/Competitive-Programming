/*
    LINK:   https://codeforces.com/contest/4/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n / 2 == 1)
        cout << "NO\n";

    else if (n % 2 == 0)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}