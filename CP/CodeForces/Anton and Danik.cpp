/*
    LINK:   https://codeforces.com/problemset/problem/734/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int countA = 0, countD = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            countA++;

        else
            countD++;
    }

    if (countA > countD)
        cout << "Anton\n";

    else if (countA < countD)
        cout << "Danik\n";

    else
        cout << "Friendship\n";

    return 0;
}