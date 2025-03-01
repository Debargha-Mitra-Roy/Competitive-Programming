#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, d;
        cin >> x >> y >> d;
        abs(x - y) <= d ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}