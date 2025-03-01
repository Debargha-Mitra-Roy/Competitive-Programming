#include <iostream>

#include <vector>

#include <algorithm>

#include <unordered_map>

using namespace std;

static bool comp(pair<long long int, long long int> a, pair<long long int, long long int> b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<long long int, vector<pair<long long int, long long int>>> mpp;
        for (long long int i = 0; i < n; i++)
        {
            long long int arrivalTime, deptTime, comp;
            cin >> arrivalTime >> deptTime >> comp;
            mpp[comp].push_back({arrivalTime, deptTime});
        }
        long long int count = 0;
        for (auto it : mpp)
        {
            sort(it.second.begin(), it.second.end(), comp);
            long long int lastDeptTime = 0;
            for (long long int j = 0; j < it.second.size(); j++)
            {
                if (it.second[j].first >= lastDeptTime)
                {
                    count++;
                    lastDeptTime = it.second[j].second;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}