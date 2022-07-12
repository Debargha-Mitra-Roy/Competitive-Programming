/*
    LINK:   https://codeforces.com/contest/1535/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        if (s1 > s2 && s3 > s4)
        {
            if (s2 > s3 || s4 > s1)
                cout << "NO\n";

            else
                cout << "YES\n";
        }

        else if (s1 > s2 && s4 > s3)
        {
            if (s2 > s4 || s3 > s1)
                cout << "NO\n";

            else
                cout << "YES\n";
        }

        else if (s2 > s1 && s4 > s3)
        {
            if (s1 > s4 || s3 > s2)
                cout << "NO\n";

            else
                cout << "YES\n";
        }

        else if (s2 > s1 && s3 > s4)
        {
            if (s4 > s2 || s1 > s3)
                cout << "NO\n";

            else
                cout << "YES\n";
        }
    }

    return 0;
}