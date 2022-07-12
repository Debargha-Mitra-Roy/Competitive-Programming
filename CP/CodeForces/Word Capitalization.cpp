/*
    LINK:   https://codeforces.com/contest/281/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] >= 97)
    {
        s[0] = s[0] - 32;
    }

    cout << s << "\n";

    return 0;
}