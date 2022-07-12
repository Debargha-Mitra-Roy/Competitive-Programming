#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
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

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
