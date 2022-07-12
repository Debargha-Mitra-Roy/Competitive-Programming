/*
    LINK:   https://codeforces.com/problemset/problem/785/A
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mpp;

    mpp["Tetrahedron"] = 4;
    mpp["Cube"] = 6;
    mpp["Octahedron"] = 8;
    mpp["Dodecahedron"] = 12;
    mpp["Icosahedron"] = 20;

    int count = 0;

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        count = count + mpp[str];
    }

    cout << count << "\n";

    return 0;
}
