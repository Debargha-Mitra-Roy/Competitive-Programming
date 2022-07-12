/*
    LINK:   https://codeforces.com/contest/1605/problem/A
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int result = (a + c - (2 * b));

        if (abs(result) % 3 == 0)
            cout << "0\n";

        else
            cout << "1\n";
    }

    return 0;
}