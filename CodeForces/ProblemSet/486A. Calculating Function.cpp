#include <iostream>
using namespace std;

long long int f(long long int n)
{
    long long int ans = 0;
    n % 2 == 0 ? ans = n / 2 : ans = -(n + 1) / 2;
    return ans;
}

int main()
{
    long long int n;
    cin >> n;
    long long int ans = f(n);
    cout << ans << "\n";
    return 0;
}