/*
    LINK:   https://codeforces.com/problemset/problem/1296/A
*/

#include <iostream>
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
        int count = 0, even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            count = count + arr[i];

            if (arr[i] % 2 == 0)
                even++;

            else
                odd++;
        }

        if (count % 2 == 0)
        {
            if ((even == n) || (odd == n))
                cout << "NO" << "\n";

            else
                cout << "YES" << "\n";
        }
        else
            cout << "YES" << "\n";
    }

    return 0;
}