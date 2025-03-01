#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        rotate(b.begin(), min_element(b.begin(), b.end()), b.end());
        if (m == 1)
        {
            for (int i = 0; i < n; i++)
                cout << min(a[i], b[0]) << " ";
            cout << "\n";
            continue;
        }
        for (int i = 0; i <= n - m; i++)
        {
            if (a[i] < b[0])
                continue;
            bool replace = true;
            if (a[i] == b[0])
            {
                replace = false;
                for (int j = 0; j < m; j++)
                {
                    if (a[i + j] == b[j])
                        continue;
                    if (a[i + j] < b[j])
                        break;
                    replace = true;
                    break;
                }
            }
            if (!replace)
                continue;
            for (int j = i; j < n; j++)
                a[j] = b[0];
            for (int j = 0; j < m; j++)
                a[n - j - 1] = b[m - j - 1];
            break;
        }
        for (auto it : a)
            cout << it << " ";
        cout << '\n';
    }
    return 0;
}
