#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        unordered_map<int, int> mpp;
        for (auto it : arr)
            mpp[it]++;
        int count = 0;
        vector<int> ans;
        for (auto it : mpp)
        {
            if (it.second > 2)
                count++;
            if (it.first != 0 && it.second % 2 != 0)
                ans.push_back(it.first);
            else
                count++;
        }
        if (count >= 1)
            ans.push_back(0);
        cout << ans.size() << "\n";
    }
    return 0;
}