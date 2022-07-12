/*
    LINK:   https://codeforces.com/problemset/problem/1367/A
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> b;

        for (int j = 0; j < b.size(); j += 2)
        {
            a = a + b[j];
        }

        a = a + b[b.size() - 1];

        cout << a << "\n";
    }

    return 0;
}