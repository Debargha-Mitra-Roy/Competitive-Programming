#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int maxT, maxN, sumN;
        cin >> maxT >> maxN >> sumN;
        long long int isPossible = maxT * maxN, ans = 0;
        if (isPossible > sumN)
        {
            while (sumN > 0)
            {
                sumN > maxN ? ans += (maxN * maxN) : ans += sumN * sumN;
                sumN -= maxN;
            }
        }
        else
            ans = maxT * maxN * maxN;
        cout << ans << "\n";
    }
    return 0;
}