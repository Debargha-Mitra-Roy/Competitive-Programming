#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (n == 1)
    {
        cout << 1 << "\n";
        return;
    }
    vector<long long int> pre(n), suff(n);
    pre[0] = v[0];
    suff[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++)
    {
        pre[i] = __gcd(pre[i - 1], v[i]);
        suff[n - 1 - i] = __gcd(suff[n - i], v[n - i - 1]);
    }
    long long int ans = sum;
    for (int i = 0; i < n; i++)
    {
        long long int prev = (i == 0) ? 0 : pre[i - 1];
        long long int after = (i == n - 1) ? 0 : suff[i + 1];
        long long int gcd = __gcd(prev, after);
        if (gcd != 0)
            ans = min(ans, (sum - v[i]) / gcd + 1);
    }
    cout << ans << "\n";
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}