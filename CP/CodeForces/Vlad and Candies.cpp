/*
    LINK:   https://codeforces.com/contest/1660/problem/B
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (n == 1 && v[0] >= 2)
        cout << "NO\n";

    else if ((v[n - 1] - v[n - 2]) >= 2)
        cout << "NO\n";

    else
        cout << "YES\n";

    return 0;
}