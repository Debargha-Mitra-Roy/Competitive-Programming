#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxx = INT_MIN;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            maxx = max(maxx, arr[i]);
        }
        bool freq[maxx + 1] = {0};
        int res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[arr[i]] == 0)
            {
                res++;
                freq[arr[i]] = 1;
            }
            else
                break;
        }
        cout << n - res << "\n";
    }
    return 0;
}