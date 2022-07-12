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

    int x;
    cin >> x;

    int a, b;
    cin >> a >> b;

    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));

    cout << v.size() << "\n";

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
