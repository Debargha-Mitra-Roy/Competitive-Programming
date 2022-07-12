/*
    LINK:   https://codeforces.com/problemset/problem/160/A
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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        sum = sum + v[i];
    }

    sort(v.begin(), v.end());

    vector<int> ans;

    int temp = 0, target = sum / 2;

    for (int i = 0; i < n; i++)
    {
        if (temp > target)
            break;

        else
        {
            temp = temp + v[n - i - 1];
            ans.push_back(v[n - i - 1]);
        }
    }

    cout << ans.size() << "\n";

    return 0;
}