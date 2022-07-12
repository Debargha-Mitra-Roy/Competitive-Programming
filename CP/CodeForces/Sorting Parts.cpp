/*
    LINK:   https://codeforces.com/contest/1637/problem/A
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}

		vec temp = v;

		sort(temp.begin(), temp.end());

		int count = 0;

		for (int i = 0; i < n; ++i)
		{
			if (temp[i] == v[i])
				count++;

			else
				break;
		}

		if (count == n)
			cout << "NO" << endl;

		else
			cout << "YES" << endl;
	}

	return 0;
}