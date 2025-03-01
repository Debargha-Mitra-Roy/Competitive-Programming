#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
            count++;
    }
    count >= 1 ? cout << "1\n" : cout << "-1\n";
    return 0;
}