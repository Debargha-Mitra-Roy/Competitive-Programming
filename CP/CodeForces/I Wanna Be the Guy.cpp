/*
    LINK:   https://codeforces.com/contest/469/problem/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    int arr[200];
    int count = 0;
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + p + q);

    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }

    if (n == count)
        cout << "I become the guy.\n";

    else
        cout << "Oh, my keyboard!\n";

    return 0;
}