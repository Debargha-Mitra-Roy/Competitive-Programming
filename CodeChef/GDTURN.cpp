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
        x + y > 6 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}