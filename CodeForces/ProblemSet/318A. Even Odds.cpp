#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    vector<long long int> v;
    long long int mid = 0;
    n % 2 == 0 ? mid = n / 2 : mid = (n / 2) + 1;
    long long int ans = 0;
    k <= mid ? ans = (k * 2) - 1 : ans = ((k - mid) * 2);
    cout << ans << "\n";
    return 0;
}