#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        arr[0] + arr[1] == arr[2] ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}