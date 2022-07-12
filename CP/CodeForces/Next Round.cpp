/*
    LINK:   https://codeforces.com/problemset/problem/158/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int maxx = v[k - 1];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0 && v[i] >= maxx)
            count++;

        else
            continue;
    }

    cout << count << "\n";

    return 0;
}