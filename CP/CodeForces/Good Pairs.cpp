/*
    LINK:   https://codeforces.com/contest/1656/problem/A
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &nums)
{
	// initialize minimum and maximum element with the first element
	int max = nums[0], min = nums[0];

	int idxi = 0, idxj = 0;

	// do for each array element
	for (int i = 1; i < nums.size(); i++)
	{
		// if the current element is greater than the maximum found so far
		if (nums[i] > max)
		{
			max = nums[i];
			idxj = i;
		}

		// if the current element is smaller than the minimum found so far
		else if (nums[i] < min)
		{
			min = nums[i];
			idxi = i;
		}
	}

	cout << (idxi + 1) << " " << (idxj + 1) << "\n";
}

int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	solve(v);

	return 0;
}