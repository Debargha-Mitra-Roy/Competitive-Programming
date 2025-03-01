#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int total = n * k;
		int mid = total / 2;
		if (mid % k == 0)
			cout << "YES" << "\n";
		else
		{
			cout << "NO" << "\n";
			continue;
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < k; j++)
				cout << i + (j * n) << " ";
			cout << "\n";
		}
	}
	return 0;
}