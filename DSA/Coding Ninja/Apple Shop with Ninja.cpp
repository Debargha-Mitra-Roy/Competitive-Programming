/*
    LINK:   https://www.codingninjas.com/codestudio/contests/love-babbar-contest-l/problems/14804
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr)
{
    long long int sum = 0;

    for (long long int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    sort(arr.begin(), arr.end());

    return sum - arr[n - m];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int m;
        cin >> m;

        vector<int> arr(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << appleAndCoupon(n, m, arr) << "\n";

    }

    return 0;
}

/*
    Time Complexity = O(N * log(N))
    Space Complexity = O(1)
*/