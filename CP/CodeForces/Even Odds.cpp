/*
    LINK:   https://codeforces.com/problemset/problem/318/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long int> v;

    long long  mid = 0;

    if (n % 2 == 0)
        mid = n / 2;

    else
        mid = (n / 2) + 1;

    long long  ans = 0;

    if (k <= mid)
        ans = (k * 2) - 1;

    else
        ans = ((k - mid) * 2);

    cout << ans << endl;

    return 0;
}