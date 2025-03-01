#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int required = (a * b);
        int taken = (x * y);
        required <= taken ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}