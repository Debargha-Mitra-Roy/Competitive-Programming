/*
    LINK:   https://codeforces.com/problemset/problem/1399/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

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

        sort(arr, arr + n);

        int flag = 1;

        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) > 1)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            cout << "YES\n";
            
        else
            cout << "NO\n";
    }

    return 0;
}