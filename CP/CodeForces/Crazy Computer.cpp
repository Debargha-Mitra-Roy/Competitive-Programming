/*
    LINK:   https://codeforces.com/problemset/problem/716/A
*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, c;
    cin >> n >> c;

    long long int time, flag;
    cin >> time;

    int count = 1;

    for (long long int i = 1; i < n; i++)
    {
        cin >> flag;

        if (c >= (flag - time))
            count++;
        
        else
            count = 1;

        time = flag;
    }
    cout << count << "\n";

    return 0;
}