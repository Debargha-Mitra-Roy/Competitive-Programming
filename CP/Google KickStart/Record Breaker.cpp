/*  
    Record Breaker :-

    LINK:   https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171#problem
*/

#include <iostream>
#include <climits>
using namespace std;

int calculate(int arr[], int n)
{
    int cnt = 0;

    /* initialising prevmax as -infinity */
    int prevmax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        /* check for condition - 2 */
        if (i == n - 1)
        {
            if (arr[i] > prevmax)
                cnt++;
        }

        /* check for condition - 1 */
        else if (arr[i] > prevmax && arr[i] > arr[i + 1])
        {
            cnt++;
        }

        /* update prevmax */
        prevmax = max(prevmax, arr[i]);
    }

    return cnt;
}

int main()
{
    int t;
    cin >> t;

    int flag = 1;
    
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "Case #" << flag << ": " << calculate(arr, n) << "\n";

        flag++;
    }

    return 0;
}