#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        long long int diff = arr[n - 1], idx = 2;
        while (k--)
        {
            diff = diff + arr[n - idx];
            idx++;
        }
        cout << diff << "\n";
    }
    return 0;
}