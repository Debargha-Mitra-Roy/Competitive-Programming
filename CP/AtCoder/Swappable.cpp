/*
    LINK:   https://atcoder.jp/contests/abc206/tasks/abc206_c
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, count = 0;
    cin >> n;

    long long int arr[n];
    for (long long int i = 1; i <= n; i++)
        cin >> arr[i];

    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = 1; j <= i; j++) // check for all possible pairs
        {
            if (arr[i] != arr[j])
                count = count + 1; // add 1 as (i, j) and (j, i) are considered different
        }
    }

    cout << count << "\n";

    return 0;
}