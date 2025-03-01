#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        x >= 2000 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}