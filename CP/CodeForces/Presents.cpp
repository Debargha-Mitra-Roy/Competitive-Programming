/*
    LINK:   https://codeforces.com/problemset/problem/136/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int index;
    vector<int> ans(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> index;

        ans[index] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}