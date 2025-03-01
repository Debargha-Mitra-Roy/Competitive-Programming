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
        int result = (a + c - (2 * b));
        abs(result) % 3 == 0 ? cout << "0\n" : cout << "1\n";
    }
    return 0;
}