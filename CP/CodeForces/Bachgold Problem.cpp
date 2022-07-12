/*
    LINK:   https://codeforces.com/problemset/problem/749/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = n / 2;
    if (n % 2 == 1)
    {

        cout << x << "\n";

        for (int i = 0; i < x - 1; i++)
            cout << "2 ";

        cout << "3";
    }
    else
    {
        cout << x << "\n";

        for (int i = 0; i < x; i++)
            cout << "2 ";
    }
    cout << "\n";

    return 0;
}