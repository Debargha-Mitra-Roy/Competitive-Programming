#include <iostream>
#include <vector>
#include <set>
using namespace std;

inline void numbers_on_whiteboard(int n)
{
    multiset<int> number;
    for (int i = 1; i <= n; i++)
        number.insert(i);
    vector<pair<int, int>> ans;
    for (int i = 0; i < (n - 1); i++)
    {
        auto it = number.end();
        it--;
        int a = *it;
        number.erase(it);
        it = number.end();
        it--;
        int b = *it;
        number.erase(it);
        number.insert((a + b + 1) / 2);
        ans.push_back(make_pair(a, b));
    }
    cout << *number.begin() << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        numbers_on_whiteboard(n);
    }
    return 0;
}