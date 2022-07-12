/*
    LINK:   https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
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

int upperBound(vector<int> &arr, int n, int target)
{
    int start = 0, end = n;

    while (start < end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] <= target)
            start = mid + 1;

        else
            end = mid;
    }

    if (start < n && arr[start] <= target)
        start++;

    return start;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    sort(arr.begin(), arr.end());

    int start, end;
    for (int i = 0; i < k; i++)
    {
        cin >> start >> end;

        int startIndex = lowerBound(arr, n, start);
        int endIndex = upperBound(arr, n, end);

        int ans = endIndex - (startIndex + 1) + 1;
        cout << ans << " ";
    }
    cout << "\n";

    return 0;
}