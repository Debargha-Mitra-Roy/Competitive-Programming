#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, x = 0, y = 0;
    int left[n], right[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 0)
        {
            left[x] == a;
            x++;
        }
        if (b == 0)
        {
            right[y] == b;
            y++;
        }
    }
    int p = min(x, n - x);
    int q = min(y, n - y);
    int ans = p + q;
    cout << ans << "\n";
    return 0;
}