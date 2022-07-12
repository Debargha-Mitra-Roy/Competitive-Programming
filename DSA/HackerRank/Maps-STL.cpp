#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main()
{
    int q;
    cin >> q;

    int x, y;
    string str;

    map<string, int> mpp;

    for (int i = 0; i < q; i++)
    {
        cin >> x >> str;

        if (x == 1)
        {
            cin >> y;

            mpp[str] = mpp[str] + y;
        }

        else if (x == 2)
            mpp.erase(str);

        else
        {
            map<string, int>::iterator it = mpp.find(str);

            if (it != mpp.end())
                cout << mpp[str] << "\n";

            else
                cout << "0\n";
        }
    }

    return 0;
}