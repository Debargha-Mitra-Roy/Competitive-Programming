/*
    Subsets :-
    
    LINK:   https://leetcode.com/problems/subsets/

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }

    vector<vector<int>> ans;
    for (int i = 0; i < (1 << (nums.size())); i++)
    {
        vector<int> temp;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i & (1 << j))
            {
                temp.push_back(nums[j]);
            }
        }

        ans.push_back(temp);
    }

    cout << "[[], ";

    for (auto x : ans)
    {
        if (x.size() > 0)
            cout << "[";

        for (auto y : x)
        {
            if (y == x[x.size() - 1])
                cout << y << "],";

            else
                cout << y << ",";
        }
    }
    
    cout << "]\n";

    return 0;
}