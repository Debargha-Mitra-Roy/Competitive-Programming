#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n < 0 ? cout << abs(n) - 1 << "\n" : cout << -(n + 1) << "\n";
    }
    return 0;
}