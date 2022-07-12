/*
    LINK:   https://www.hackerearth.com/challenges/competitive/march-circuits-22/algorithm/number-of-pair-2-8aa77604/
*/

#include <iostream>
using namespace std;

long long int countDivisors(long long int n)
{
    long long int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;

            else
                count = count + 2;
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;

        long long int ans = countDivisors(n);

        cout << ans << "\n";
    }

    return 0;
}