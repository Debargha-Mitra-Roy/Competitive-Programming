/*
    LINK:   https://codeforces.com/problemset/problem/344/A
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> str(n);

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

   int count = 1;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str[i + 1])
            count++;
    }

    cout << count << "\n";

    return 0;
}