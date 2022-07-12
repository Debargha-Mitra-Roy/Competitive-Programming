#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        int temp;
        for (int j = 0; j < k; j++)
        {
            cin >> temp;
            v[i].push_back(temp);
        }
    }

    int a, b;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;

        cout << v[a][b] << endl;
    }

    return 0;
}