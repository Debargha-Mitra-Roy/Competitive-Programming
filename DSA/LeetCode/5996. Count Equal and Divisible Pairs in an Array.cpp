class Solution {
public:
    int countPairs(vector<int>& nums, int k) {

        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (i * j % k == 0 && nums[i] == nums[j])
                    count++;
            }
        }

        return count;
    }
};