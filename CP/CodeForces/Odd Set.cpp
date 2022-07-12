/*
    LINK:   https://codeforces.com/problemset/problem/1542/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            int flag;
            cin >> flag;

            count = count + (flag % 2);
        }

        if (count == n)
            cout << "Yes\n";
        
        else
            cout << "No\n";
    }

    return 0;
}