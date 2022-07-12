/*
    LINK:   https://codeforces.com/contest/1644/problem/B
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cout << i;

            for (int j = n; j > 0; --j)
            {
                if (i != j)
                    cout << ' ' << j;
            }
            cout << '\n';
        }
    }

    return 0;
}