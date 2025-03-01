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
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            long long int x;
            cin >> x;
            if (x & 1)
                ans = ans ^ (n - i);
        }
        ans == 0 ? cout << "Cook\n" : cout << "Chef\n";
    }
    return 0;
}