/*
    LINK:   https://atcoder.jp/contests/abc234/tasks/abc234_b
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    double ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int distance_x = x[i] - x[j];
            int distance_y = y[i] - y[j];

            double square_root = sqrt((distance_x * distance_x) + (distance_y * distance_y));

            ans = max(ans, square_root);
        }
    }

    cout << fixed << setprecision(10) << ans << "\n";

    return 0;
}