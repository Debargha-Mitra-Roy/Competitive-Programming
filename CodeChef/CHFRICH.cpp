#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, t;
        cin >> a >> b >> t;
        int ans = (b - a) / t;
        cout << ans << "\n";
    }
    return 0;
}