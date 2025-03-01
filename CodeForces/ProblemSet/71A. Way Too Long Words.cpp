#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string w;
        cin >> w;
        int n = w.length();
        n <= 10 ? cout << w << "\n" : cout << w[0] << n - 2 << w[n - 1] << "\n";
    }
    return 0;
}