/*
    LINK:   https://codeforces.com/problemset/problem/133/A
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            count = 1;
            break;
        }

        else
            count = -1;
    }

    if (count != -1)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}