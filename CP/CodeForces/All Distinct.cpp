/*
    LINK:   https://codeforces.com/contest/1692/problem/B
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;

        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin >> x;

            st.insert(x);
        }

        int ans = 0;

        if ((n - st.size()) % 2 == 0)
            ans = st.size();

        else
            ans = st.size() - 1;

        cout << ans << "\n";
    }

    return 0;
}