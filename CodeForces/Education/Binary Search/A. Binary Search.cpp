#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &arr, int n, int target)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == target)
        {
            return true;
            break;
        }
        else
            arr[mid] < target ? start = mid + 1 : end = mid - 1;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v(k);
    for (int i = 0; i < k; i++)
        cin >> v[i];
    for (int i = 0; i < k; i++)
        binarySearch(arr, n, v[i]) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}