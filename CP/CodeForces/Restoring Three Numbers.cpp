/*
    LINK:   https://codeforces.com/problemset/problem/1154/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4], x;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 4);

    reverse(arr, arr + 4);
    
    for (int i = 1; i < 4; i++)
    {
        x = arr[0] - arr[i];
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}