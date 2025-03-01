#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = x + (z * 2);
        ans >= y ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}