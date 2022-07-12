/*
    LINK:   https://leetcode.com/problems/partition-array-according-to-given-pivot/
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> v;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < pivot)
                v.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == pivot)
                v.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > pivot)
                v.push_back(nums[i]);
        }

        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> nums;

        int a;
        while (cin >> a && cin.get() != '\n')
        {
            nums.push_back(a);
        }
        int pivot;
        cin >> pivot;

        Solution obj;

        vector<int> ans = obj.pivotArray(nums, pivot);

        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }

    return 0;
}