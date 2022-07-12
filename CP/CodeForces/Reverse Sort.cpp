/*
    LINK:   https://codeforces.com/contest/1605/problem/B
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        if (is_sorted(str.begin(), str.end()))
        {
            cout << "0\n";
            continue;
        }

        string test = str;

        sort(test.begin(), test.end());

        cout << "1\n";

        vector<int> ans;
        
        for (int i = 0; i < n; i++)
        {
            if (str[i] != test[i])
                ans.push_back(i + 1);
        }

        cout << ans.size() << " ";

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}