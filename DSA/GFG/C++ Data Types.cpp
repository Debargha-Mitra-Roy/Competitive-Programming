/*

    C++ Data Types:-

    Link:   https://practice.geeksforgeeks.org/problems/c-data-types1523/1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int cppIntType()
    {
        int a;
        cin >> a;
        cout << a;
    }

    char cppCharType()
    {
        char c;
        cin >> c;
        cout << c;
    }

    float cppFloatType()
    {
        float f;
        cin >> f;
        cout << f;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }

    return 0;
}