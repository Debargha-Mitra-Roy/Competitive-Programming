#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        a % b == 0 ? cout << "0\n" : a > b ? cout << b - (a % b) << "\n" : cout << b - a << "\n";
    }
    return 0;
}
