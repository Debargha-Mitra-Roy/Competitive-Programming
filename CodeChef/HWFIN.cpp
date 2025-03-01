#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int total = x + (y * 10);
	total >= 100 ? cout << "YES\n" : cout << "NO\n";
	return 0;
}