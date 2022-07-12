/*
    LINK:   https://codeforces.com/contest/339/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int l = str.length();

    string temp = str;

    sort(temp.begin(), temp.end());

    int j = l / 2;

    if (l <= 2)
        cout << str << "\n";

    else
    {
        for (int i = 0; i < l; i = i + 2)
        {
            if (str[i] != temp[j])
                str[i] = temp[j];

            j++;
        }
        cout << str << "\n";
    }

    return 0;
}