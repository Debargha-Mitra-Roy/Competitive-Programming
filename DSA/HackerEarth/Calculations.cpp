/*
    LINK:   https://www.hackerearth.com/problem/algorithm/the-sum-of-squares-4e03818e/
*/

#include <iostream>
#include <cstring>
using namespace std;

#define mod (long long int)(1e9 + 7)

int dp[100005];

long long int add(long long int a, long long int b, int p = mod)
{
    return ((a % p) + (b % p)) % p;
}

long long int fpow(int x, int y)
{
    long long int res = 1;
    x = x % mod;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1LL)
            res = (res * x) % mod;

        y = y >> 1LL;
        x = (x * x) % mod;
    }

    return res;
}

long long int fib(int n)
{
    if (n <= 3)
        return (4 - n);

    // temporary variables to store values of fib(n - 1) & fib(n - 2)
    long long int first, second, third;

    if (dp[n - 1] != -1)
        first = dp[n - 1];

    else
        first = fib(n - 1);

    if (dp[n - 2] != -1)
        second = dp[n - 2];

    else
        second = fib(n - 2);

    if (dp[n - 3] != -1)
        third = dp[n - 3];

    else
        third = fib(n - 3);

    // memoization
    return dp[n] = first + second + third;
}

int main()
{
    int n;
    cin >> n;

    memset(dp, -1, sizeof(dp));

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = add(ans , fpow(fib(n - i), 2)) % mod;
    }

    cout << ans << endl;

    return 0;
}