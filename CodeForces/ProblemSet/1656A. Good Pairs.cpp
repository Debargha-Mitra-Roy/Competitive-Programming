#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &nums)
{
	int max = nums[0], min = nums[0];
	int idxi = 0, idxj = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
			idxj = i;
		}
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
		cin >> v[i];
	solve(v);
	return 0;
}