/*
    LINK:   https://codeforces.com/problemset/problem/1/A
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;

    double x = ceil(n / a);
    double y = ceil(m / a);

    long long int ans = x * y;
    cout << ans << "\n";

    return 0;
}