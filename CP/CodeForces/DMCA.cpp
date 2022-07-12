/*
    LINK:   https://codeforces.com/contest/1505/problem/B
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n;

    x = (n - 1) % 9 + 1;

    cout << x << "\n";

    return 0;
}