#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    (a > 0 && b > 0 & c > 0) ? a + b + c == 180 ? cout << "YES\n" : cout << "NO\n" : cout << "NO\n";
    return 0;
}