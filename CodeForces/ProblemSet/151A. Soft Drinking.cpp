#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    c = c * d;
    k = k * l;
    k = k / nl;
    p = p / np;
    int ans = min(c, k);
    ans = min(ans, p) / n;
    cout << ans << "\n";
    return 0;
}