/*
    LINK:   https://codeforces.com/problemset/problem/1633/A
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

        if (n % 7 == 0)
            cout << n << "\n";

        else
        {
            int ans = 0;

            for (int i = 1; i <= 10; i++)
            {
                if ((n - (n % 10) + i) % 7 == 0)
                {
                    ans = (n - (n % 10) + i);
                    break;
                }
            }

            cout << ans << "\n";
        }
    }

    return 0;
}