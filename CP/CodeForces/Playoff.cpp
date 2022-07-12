/*
    LINK:   https://codeforces.com/contest/1651/problem/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int ans = pow(2, n) - 1;
    cout << ans << "\n";

    return 0;
}