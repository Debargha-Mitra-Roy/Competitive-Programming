/*
    LINK:   https://atcoder.jp/contests/abc234/tasks/abc234_c
*/

#include <iostream>
#include <algorithm>
using namespace std;

string convert(long long int x)
{
    string temp;

    while (x > 0)
    {
        temp.push_back('0' + (x % 2));
        x = x / 2;
    }

    reverse(temp.begin(), temp.end());

    return temp;
}

void output(string str)
{
    for (auto &it : str)
    {
        if (it == '1')
            cout << '2';

        else
            cout << '0';
    }

    cout << '\n';
}

int main()
{
    long long int k;
    cin >> k;

    output(convert(k));

    return 0;
}