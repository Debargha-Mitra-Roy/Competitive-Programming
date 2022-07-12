/*
    LINK:   https://codeforces.com/problemset/problem/200/B
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    double n;
    cin >> n;

    vector<int> v(n);

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        sum = sum + v[i];
    }

    double ans = (sum / n);
    cout << fixed << setprecision(12) << ans << "\n";

    return 0;
}