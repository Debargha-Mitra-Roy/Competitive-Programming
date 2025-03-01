#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        (a + b + c > 180 || a + b + c < 180) ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}