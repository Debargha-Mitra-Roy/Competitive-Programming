/*
    LINK:   https://codeforces.com/contest/1658/problem/B
*/

#include <iostream>
using namespace std;

#define mod (int)(998244353)

long long int factorial(long long int n)
{
    if (n == 0)
        return 1;

    return ((n % mod) * (factorial(n - 1) % mod) % mod);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        if (n % 2 == 0)
        {
            long long int even = n / 2;

            long long int count = factorial(even % mod) % mod;

            long long int ans = (count * count) % mod;

            cout << ans << "\n";
        }

        else
            cout << 0 << "\n";
    }

    return 0;
}