/*
    LINK:   https://codeforces.com/contest/1624/problem/A
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long int count = arr[n - 1] - arr[0];

        cout << count << "\n";
    }

    return 0;
}