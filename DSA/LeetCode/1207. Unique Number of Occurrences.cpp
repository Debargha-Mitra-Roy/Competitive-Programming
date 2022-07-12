class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {


        sort(arr.begin(), arr.end());

        map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++)
        {
            mpp[arr[i]]++;
        }

        set<int> st;

        for (auto it : mpp)
        {
            int key = it.second;

            st.insert(key);
        }

        if (st.size() == mpp.size())
            return true;

        else
            return false;
    }
};