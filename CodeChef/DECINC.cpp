#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    n % 4 == 0 ? ans = n + 1 : ans = n - 1;
    cout << ans << "\n";
    return 0;
}