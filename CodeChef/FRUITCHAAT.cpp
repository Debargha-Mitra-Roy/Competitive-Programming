#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		int banana = (x / 2);
		int apple = y;
		banana <= apple ? cout << banana << "\n" : cout << apple << "\n";
	}
	return 0;
}