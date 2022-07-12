/*
    LINK:   https://atcoder.jp/contests/abc240/tasks/abc240_a
*/

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if (abs(a - b) > 1)
    {
        if ((a == 1 && b == 10) || (b == 1 && a == 10))
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    else
        cout << "Yes" << endl;

    return 0;
}