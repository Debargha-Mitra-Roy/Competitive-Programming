#include <iostream>
using namespace std;

void lucky_number(int x, int y, int z)
{
    (x == 7 || y == 7 || z == 7) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        lucky_number(a, b, c);
    }
    return 0;
}