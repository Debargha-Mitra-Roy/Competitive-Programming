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

    int q;
    cin >> q;

    int arr[q];
    for (int i = 0; i < q; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int index = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();

        if (v[index] == arr[i])
            cout << "Yes " << (index + 1) << "\n";

        else
            cout << "No " << (index + 1) << "\n";
    }

    return 0;
}
