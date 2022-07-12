#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto& u : a)
        {
            cin >> u;
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans = ans + ((i + 1) * (n - i));

            if (a[i] == 0)
                ans = ans + ((i + 1) * (n - i));
        }

        cout << ans << '\n';
    }
}