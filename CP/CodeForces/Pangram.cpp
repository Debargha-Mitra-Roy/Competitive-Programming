/*
    LINK:   https://codeforces.com/problemset/problem/520/A
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (n < 26)
        cout << "NO\n";

    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        sort(str.begin(), str.end());

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] != str[i + 1])
                count++;
        }

        if (count >= 26)
            cout << "YES\n";

        else
            cout << "NO\n";
    }

    return 0;
}
