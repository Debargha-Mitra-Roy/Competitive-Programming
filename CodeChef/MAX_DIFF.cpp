#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int ans = 0;
        n > s ? ans = min(n, s) : ans = abs(abs(n - s) - n);
        cout << ans << "\n";
    }
    return 0;
}