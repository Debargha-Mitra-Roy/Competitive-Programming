/*
    LINK:   https://codeforces.com/contest/69/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    int x = 0, y = 0, z = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];

        x = x + a[i];
        y = y + b[i];
        z = z + c[i];
    }
    if (x + y + z == 0)
    {
        if (x == 0 || y == 0 || z == 0)
            cout << "YES\n";
            
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";

    return 0;
}