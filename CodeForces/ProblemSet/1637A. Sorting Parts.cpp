#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		vector<int> temp = v;
		sort(temp.begin(), temp.end());
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (temp[i] == v[i])
				count++;
			else
				break;
		}
		count == n ? cout << "NO" << "\n" : cout << "YES" << endl;
	}
	return 0;
}