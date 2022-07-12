/*
    LINK:   https://codeforces.com/problemset/problem/228/A
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n = 4;

    set<int> st;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        st.emplace(v[i]);
    }

    int ans = 4 - st.size();

    cout << ans << "\n";

    return 0;
}