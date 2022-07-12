/*
    LINK:   https://atcoder.jp/contests/abc235/tasks/abc235_b
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

    int pos = 0;
    while (arr[pos] < arr[pos + 1])
    {
        pos++;
    }

    cout << arr[pos] << "\n";

    return 0;
}