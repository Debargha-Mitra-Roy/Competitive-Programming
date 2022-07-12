/*
    LINK:   https://atcoder.jp/contests/abc234/tasks/abc234_a
*/

#include <iostream>
using namespace std;

int f(int x)
{
    int ans = ((x * x) + (2 * x) + 3);

    return ans;
}

int main()
{
    int t;
    cin >> t;

    cout << f(f(f(t) + t) + f(f(t))) << "\n";

    return 0;
}