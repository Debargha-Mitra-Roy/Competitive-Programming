/*
    LINK:   https://codeforces.com/problemset/problem/996/A
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[5] = {100, 20, 10, 5, 1};
    int count = 0, i = 0;

    while (n != 0)
    {
        count = count + n / arr[i];
        n = n % arr[i];
        i++;
    }

    cout << count << "\n";

    return 0;
}