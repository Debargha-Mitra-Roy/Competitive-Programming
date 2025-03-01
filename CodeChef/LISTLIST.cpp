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
        int list[n];
        for (int i = 0; i < n; i++)
            cin >> list[i];
        n <= 1 ? cout << "0\n" : n == 2 ? cout << "-1\n" : cout << "2\n";
    }
    return 0;
}