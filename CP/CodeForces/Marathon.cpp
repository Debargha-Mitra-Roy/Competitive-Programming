/*
    LINK:   https://codeforces.com/contest/1692/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 4;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        
        for (int i = 0; i < (n - 1); i++)
        {
            if (arr[0] < arr[i + 1])
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}