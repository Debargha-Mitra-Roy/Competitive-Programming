/*
    LINK:   https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int lowerBound(vector<int> &arr, int n, int target)
{
    int start = 0, end = n;

    while (start < end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] >= target)
            end = mid;

        else
            start = mid + 1;
    }

    if (start < n && arr[start] < target)
        start++;

    return start;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
        int ans = lowerBound(arr, n, v[i]);

        cout << ans + 1 << "\n";
    }

    return 0;
}