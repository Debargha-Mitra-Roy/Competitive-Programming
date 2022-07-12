class Solution {
public:
    vector<long long int> sumOfThree(long long int num) {

        vector<long long int> temp;

        long long int mid = num / 3;
        long long int left = mid - 1;
        long long int right = mid + 1;

        long long int total = left + mid + right;

        if (total == num)
        {
            temp.push_back(left);
            temp.push_back(mid);
            temp.push_back(right);
        }

        return temp;
    }
};
