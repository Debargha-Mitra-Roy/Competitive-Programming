/*
    LINK:   https://codeforces.com/contest/1660/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0)
        cout << 1 << "\n";

    else
    {
        int total = a + (2 * b);
        cout << (total + 1) << "\n";
    }

    return 0;
}