/*
    LINK:   https://codeforces.com/contest/1658/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int zero = 0, count = 0;

    for (int i = 0; i < n - 1; i++)
    {

        if (str[i] == '0' && str[i + 1] == '0')
            count = count + 2;

        else if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0')
            count = count + 1;
    }

    cout << count << "\n";

    return 0;
}