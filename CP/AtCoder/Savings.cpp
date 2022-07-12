/*
    LINK:   https://atcoder.jp/contests/abc206/tasks/abc206_b
*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, i = 1;
    cin >> n;

    while (true)
    {
        count = count + i;
        
        if (count >= n)
            break;

        i++;
    }

    cout << i << "\n";

    return 0;
}