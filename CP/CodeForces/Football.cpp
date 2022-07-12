/*
    LINK:   https://codeforces.com/problemset/problem/96/A
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int n = str.size();

    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
            count++;

        else
            count = 0;


        if (count >= 6)
            break;
    }

    if (count >= 6)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}