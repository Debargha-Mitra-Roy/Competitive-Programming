#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int maxx = max(a, b);
		int ans = max(maxx, c);
		cout << ans << "\n";
	}
	return 0;
}