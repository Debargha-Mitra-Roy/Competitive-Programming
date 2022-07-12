/*
    LINK:   https://atcoder.jp/contests/abc239/tasks/abc239_a
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int t;
    // cin >> t;
    // while (t--)
    // {
    double n;
    cin >> n;

    double x = ((double)(12800000) + n);
    double y = x * n;

    double ans = sqrt(y);

    cout << fixed << setprecision(9) << ans << "\n";
    // }

    return 0;
}/*
    LINK:   https://atcoder.jp/contests/abc239/tasks/abc239_a
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cin >> n;

    double x = ((double)(12800000) + n);
    double y = x * n;

    double ans = sqrt(y);

    cout << fixed << setprecision(9) << ans << "\n";

    return 0;
}