/*
    LINK:   https://codeforces.com/problemset/problem/1030/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            count++;
    }

    if (count > 0)
        cout << "HARD\n";

    else
        cout << "EASY\n";

    return 0;
}