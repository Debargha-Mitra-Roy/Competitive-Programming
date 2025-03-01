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
        int arr[n];
        int count = 0, even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count = count + arr[i];
            arr[i] % 2 == 0 ? even++ : odd++;
        }
        count % 2 == 0 ? ((even == n) || (odd == n)) ? cout << "NO" << "\n" : cout << "YES" << "\n" : cout << "YES" << "\n";
    }
    return 0;
}