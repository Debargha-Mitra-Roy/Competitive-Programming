/*

    Logical Operators:-

    Link:   https://practice.geeksforgeeks.org/problems/logical-operators/1/
*/

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);

void logicOp(int a, int b)
{
    cout << (a && b) << " " << (a || b) << " " << ((!a) && (!b));
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        logicOp(a, b);
    }

    return 0;
}