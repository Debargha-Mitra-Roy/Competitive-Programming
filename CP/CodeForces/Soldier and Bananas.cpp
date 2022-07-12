/*
    LINK:   https://codeforces.com/problemset/problem/546/A
*/

#include <iostream>
using namespace std;

long long int priceOfBananas(long long int k, long long n, long long w)
{
    long long int count  = 0;

    for (int i = 1; i <= w; i++)
    {
        count  = count + i;
    }

    long long int price = count * k;

    return price;
}

int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;

    long long int price = priceOfBananas(k, n, w);

    long long int ans = (price - n);

    if (ans > 0)
        cout << ans << "\n";

    else
        cout << "0\n";

    return 0;
}