/*
    LINK:   https://codeforces.com/problemset/problem/118/A
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
            continue;
        else
        {
            cout << "." << c;
        }
    }
    cout << "\n";

    return 0;
}