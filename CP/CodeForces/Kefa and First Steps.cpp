/*
    LINK:   https://codeforces.com/problemset/problem/580/A
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n), temp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n == 1)
        cout << 1 << "\n";

    else
    {
        int count = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
                count++;

            else
                count = 1;

            temp.push_back(count);
        }

        sort(temp.begin(), temp.end());

        int size = temp.size();

        cout << temp[size - 1] << "\n";
    }

    return 0;
}