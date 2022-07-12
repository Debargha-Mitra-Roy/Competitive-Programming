/*
    LINK:   https://atcoder.jp/contests/abc245/tasks/abc245_a
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int x = (a * 60 * 60) + (b * 60);
	int y = (c * 60 * 60) + (d * 60) + 1;

	if (x > y)
		cout << "Aoki\n";

	else
		cout << "Takahashi\n";

	return 0;
}