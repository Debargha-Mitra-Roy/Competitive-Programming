/*
    LINK:   https://atcoder.jp/contests/practice/tasks/practice_2
*/

#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string s;

    for (int i = 0; i < n; i++)
        s = s + (char)('A' + i);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << "? " << s[j] << " " << s[j + 1] << "\n";

            char ans;

            cout << " ";

            cin >> ans;

            if (ans == '>')
                swap(s[j], s[j + 1]);
        }
    }

    cout << "! " << s.c_str() << "\n";
    
    return 0;
}