/*
    LINK:   https://atcoder.jp/contests/abc042/tasks/abc042_a
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    if (arr[0] == 5 && arr[1] == 5 && arr[2] == 7)
        cout << "YES\n";

    else
        cout << "NO\n";
    
    return 0;
}