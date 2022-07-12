/*
    LINK:   https://atcoder.jp/contests/abc245/tasks/abc245_c
*/

#include <iostream>
#include <vector>
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

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(n), c(m), d(m);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }


    for (i = 0; i < m; i++)
    {
        cin >> c[i];
    }


    for (i = 0; i < m; i++)
    {
        cin >> d[i];
    }

    return 0;
}