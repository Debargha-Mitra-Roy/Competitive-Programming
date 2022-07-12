/*
    LINK:   https://codeforces.com/contest/155/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int x = arr[0], y = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            x = arr[i];
            count++;
        }

        if (arr[i] < y)
        {
            y = arr[i];
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}