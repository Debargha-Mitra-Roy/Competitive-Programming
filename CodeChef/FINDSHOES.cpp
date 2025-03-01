#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        n > m ? cout << abs(n - m) + n << "\n" : cout << n << "\n";
    }
    return 0;
}