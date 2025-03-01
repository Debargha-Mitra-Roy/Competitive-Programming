#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
            if ((i != j) && (a[i] == b[j]))
            {
                flag = 1;
                break;
            }
        if (flag)
            count++;
    }
    int ans = n - count;
    cout << ans << "\n";
    return 0;
}