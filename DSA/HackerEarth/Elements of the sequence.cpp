/*
    LINK:   https://www.hackerearth.com/problem/algorithm/sequence-236-65ae2348/
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int size = 2 * n;

		vector<int> v(size);

		for (int i = 0; i < size; i++)
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		vector<int> temp;
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			sum = v[i] + v[size - i - 1];

			temp.pb(sum);
		}

		sort(temp.begin(), temp.end());

		int count = 1;

		for (int i = 0; i < temp.size() - 1; i++)
		{
			if (temp[i] == temp[i + 1])
				count++;

			else
				break;
		}

		if (count == temp.size())
			cout << "YES" << endl;

		else
			cout << "NO" << endl;
	}

	return 0;
}