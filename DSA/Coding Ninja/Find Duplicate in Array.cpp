/*
    LINK:   https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602
*/

#include <iostream>
#include <algorithm>
using namespace std;

int findDuplicate(int *arr, int size)
{
    sort(arr, arr + size);

    int ans = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            ans = arr[i];
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = findDuplicate(arr, n);

        cout << ans << "\n";
    }

    return 0;
}