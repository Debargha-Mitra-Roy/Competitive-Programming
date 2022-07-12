/*
    LINK:   https://atcoder.jp/contests/abc235/tasks/abc235_a
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp1 = n, temp2 = n;

    int first = n;
    int mid = ((temp1 % 100) * 10) + (temp1 / 100);
    int last = ((temp2 % 10) * 100) + (temp2 / 10);

    int ans = first + mid + last;

    cout << ans << "\n";

    return 0;
}