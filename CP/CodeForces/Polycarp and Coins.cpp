/*
    LINK:   https://codeforces.com/contest/1551/problem/A
*/

#include <iostream>
#include <cmath >
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int c1 = 0, c2 = 0, x = 0, y = 0;

        if (n == 1)
        {
            c1 = 1;
            c2 = 0;
        }

        if (n == 2)
        {
            c1 = 0;
            c2 = 1;
        }

        if (n > 2)
        {
            c1 = ceil(n / 3);
            c2 = ceil(n / 3);

            x = (c1 + (2 * c2));

            if (x < n)
            {
                y = n - x;
                {
                    if (y == 1)
                        c1 = c1 + 1;

                    if (y == 2)
                        c2 = c2 + 1;
                }
            }
        }
        cout << c1 << " " << c2 << "\n";
    }

    return 0;
}