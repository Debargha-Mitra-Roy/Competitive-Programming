#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = abs(x - y);
        cout << ans << "\n";
    }
    return 0;
}