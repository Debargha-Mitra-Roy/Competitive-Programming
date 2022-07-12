/*
    LINK:   https://codeforces.com/problemset/problem/116/A
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    vector<int> a(n), b(n), ans;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        sum = sum - a[i] + b[i];

        ans.push_back(sum);
    }

    sort(ans.begin(), ans.end());

    int len = ans.size();

    cout << ans[len - 1] << "\n";

    return 0;
}