/*
	LINK:	https://codeforces.com/problemset/problem/1430/C
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

inline void numbers_on_whiteboard(int n)
{
    multiset<int> number;
    for (int i = 1; i <= n; i++)
    {
        number.insert(i);
    }

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
    {
        cout << ans[i].first << ' ' << ans[i].second << "\n";
    }
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

/*
    It's easy to see that we can't get the result less than 2, because, if we merge two positive numbers, and at least one of them is 2 or greater, the new number is always greater than 1. So we can't get rid of all numbers greater than 1.

    To always achieve 2, we can use a greedy algorithm: always merge two maximum numbers. During the first step, we merge n and n−1, get n; then we merge n and n−2, get n−1; then we merge n−1 and n−3, get n−2; and it's easy to see that the last operation is merging 3 and 1, so the result is 2.
*/