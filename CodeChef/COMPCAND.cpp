#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        (n > 0 && n >= k) ? n % k == 0 ? count = n / k : count = -1 : count = 0;
        cout << count << "\n";
    }
    return 0;
}