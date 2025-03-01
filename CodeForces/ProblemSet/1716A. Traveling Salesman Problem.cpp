#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];
        int maxX = 0, maxY = 0, minX = 0, minY = 0;
        for (int i = 0; i < n; i++)
        {
            maxX = max(a[i], maxX);
            maxY = max(b[i], maxY);
            minX = min(a[i], minX);
            minY = min(b[i], minY);
        }
        int ans = 2 * (maxX + maxY - minX - minY);
        cout << ans << "\n";
    }
    return 0;
}