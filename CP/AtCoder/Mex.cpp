/*
    LINK:   https://atcoder.jp/contests/abc245/tasks/abc245_b
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findMex(vector<int> &v, int n)
{
    /* use a range constructor to initialize the set from array elements */
    unordered_set<int> distinct(v.begin(), v.end());

    /* return first smallest missing positive number from the set */
    int index = 0;

    while (true)
    {
        if (distinct.find(index) == distinct.end())
            return index;

        index++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<int> v(n);

    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = findMex(v, n);

    cout << ans << "\n";

    return 0;
}