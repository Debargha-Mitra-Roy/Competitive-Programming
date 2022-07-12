/*
    LINK:   https://codeforces.com/contest/1619/problem/B
*/

#include <iostream>
#include <set>
#include <math.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        set<int> s ;

        for (int i = 1; i <= sqrt(n); i++)
        {
            long long int square = i * i;

            s.insert(square);
        }

        for (int i = 1; i * i * i <= n; i++)
        {
            long long int cube = i * i * i;

            s.insert(cube);
        }

        cout << s.size() << "\n";
    }

    return 0;
}