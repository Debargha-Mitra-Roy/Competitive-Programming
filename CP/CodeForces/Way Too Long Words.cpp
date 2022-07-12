/*
    LINK:   https://codeforces.com/contest/71/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string w;
        cin >> w;

        int n = w.length();

        if (n <= 10)
            cout << w << "\n";

        else
            cout << w[0] << n - 2 << w[n - 1] << "\n";
    }

    return 0;
}