/*
    LINK:   https://codeforces.com/contest/263/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int a, b;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(a - 2) + abs(b - 2) << "\n";

    return 0;
}