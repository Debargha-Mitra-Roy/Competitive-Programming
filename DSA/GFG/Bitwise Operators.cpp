/*

    Bitwise Operators:-

    Link:   https://practice.geeksforgeeks.org/problems/bitwise-operators/1/
*/

#include <iostream>
using namespace std;

void bitWiseOperation(int, int, int);

void bitWiseOperation(int a, int b, int c)
{

    // Your code here
    int d = (a ^ a);
    int e = (c ^ b);
    int f = (a & b);
    int g = (c | (a ^ a));
    int h = (~e);

    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}