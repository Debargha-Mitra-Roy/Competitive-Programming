#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int diff = abs(n - m);
        diff >= k ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}