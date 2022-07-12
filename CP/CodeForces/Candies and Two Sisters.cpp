/*
    LINK:   https://codeforces.com/problemset/problem/1335/A
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

        long long int ans = 0;

        if (n <= 2)
            ans = 0;

        else
        {

            if (n % 2 == 0)
                ans = n / 2 - 1;

            else
                ans = n / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}
