#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int i = 9;
        if (n < 9)
            arr.push_back(n);
        else
        {
            while (n > 0)
            {
                n = n - i;
                arr.push_back(i);
                i--;
                if (n < i)
                {
                    arr.push_back(n);
                    break;
                }
            }
        }
        sort(arr.begin(), arr.end());
        if (*arr.begin() == 0)
            arr.erase(arr.begin());
        for (auto it : arr)
            cout << it;
        cout << "\n";
    }
    return 0;
}