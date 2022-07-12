/*
    LINK:   https://codeforces.com/problemset/problem/705/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            cout << "I hate ";

        else
            cout << "I love ";

        if (i == n)
            cout << "it";

        else
            cout << "that ";
    }
    cout << "\n";

    return 0;
}