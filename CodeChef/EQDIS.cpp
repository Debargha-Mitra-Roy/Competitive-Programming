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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            a[x - 1]++;
        }
        (n % 2 == 1 && *max_element(a.begin(), a.end()) == 1) ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}