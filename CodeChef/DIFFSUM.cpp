#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    a > b ? ans = a - b : ans = a + b;
    cout << ans << "\n";
    return 0;
}