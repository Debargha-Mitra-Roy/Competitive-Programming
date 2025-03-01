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
        int small = 1, large = n;
        for (int i = 1; i <= n; i++)
            i & 1 ? cout << large-- << " " : cout << small++ << " ";
        cout << "\n";
    }
    return 0;
}