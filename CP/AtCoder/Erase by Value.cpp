/*
    LINK:   https://atcoder.jp/contests/arc133/tasks/arc133_a
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

    int num = n - 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            num = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[num])
            cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}