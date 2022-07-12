/*
    LINK:   https://codeforces.com/contest/231/problem/A
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    while (n--)
    {
        int Petra, Vasya, Tonya;
        cin >> Petra >> Vasya >> Tonya;

        if (Petra + Vasya + Tonya >= 2)
            count++;
    }

    cout << count << "\n";

    return 0;
}