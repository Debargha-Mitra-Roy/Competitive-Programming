#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << (2 * (180 + n) - (a + b)) << "\n";
    }
    return 0;
}