/*
    LINK:   https://codeforces.com/problemset/problem/61/A
*/

#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int len = str1.size();

    string str = "";

    for (int i = 0; i < len; i++)
    {
        if ((str1[i] == '1' && str2[i] == '0') || (str1[i] == '0' && str2[i] == '1'))
            str = str + '1';

        else
            str = str + '0';
    }

    cout << str << "\n";

    return 0;
}