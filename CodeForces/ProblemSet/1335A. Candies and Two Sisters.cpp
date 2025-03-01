#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 0;
        n <= 2 ? ans = 0 : n % 2 == 0 ? ans = n / 2 - 1 : ans = n / 2;
        cout << ans << "\n";
    }
    return 0;
}
