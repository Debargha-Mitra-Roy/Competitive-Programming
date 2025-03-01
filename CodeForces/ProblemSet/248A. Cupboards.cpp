/*
    LINK:   https://codeforces.com/problemset/problem/248/A
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
        int n, k;
        cin >> n >> k;
        int arr[n], temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp[i] == arr[i];
        }
        sort(temp, temp + n);
        int count = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == temp[i])
                count++;
        count >= k ? cout << "0\n" : cout << k << "\n";
    }
    return 0;
}