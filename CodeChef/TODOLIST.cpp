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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (auto it : arr)
        {
            it >= 1000 ? count++ : count;
        }
        cout << count << "\n";
    }
    return 0;
}