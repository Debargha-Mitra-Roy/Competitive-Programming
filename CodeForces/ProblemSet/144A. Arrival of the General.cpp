#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int maxx = INT_MIN;
    int minn = INT_MAX;
    int min_num = 0, ans = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        minn = min(arr[i], minn);
        maxx = max(arr[i], maxx);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == minn)
        {
            min_num = i;
            break;
        }
    }
    for (int i = min_num; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        ans++;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxx)
            break;

        else
            ans++;
    }
    cout << ans << "\n";
    return 0;
}