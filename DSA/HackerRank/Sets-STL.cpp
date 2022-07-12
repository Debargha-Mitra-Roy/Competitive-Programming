#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    int q;
    cin >> q;

    set<int> st;

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> y >> x;

        if (y == 1)
            st.insert(x);

        else if (y == 2)
            st.erase(x);

        else
        {
            set<int>::iterator it = st.find(x);

            if (it == st.end())
                cout << "No\n";

            else
                cout << "Yes\n";
        }
    }

    return 0;
}