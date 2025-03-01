#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        (x % k == 0 && y % k == 0) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}