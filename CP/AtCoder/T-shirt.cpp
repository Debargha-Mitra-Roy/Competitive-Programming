/*
    LINK:   https://atcoder.jp/contests/abc242/tasks/abc242_a
*/

#include <iostream>
using namespace std;

int main()
{

	double a, b, c, x;
	cin >> a >> b >> c >> x;

	if (x <= a)
		cout << "1.000000000000\n";

	else if (a < x && b < x && c < x)
		cout << "0.000000000000\n";

	else
	{
		double minn = (b - a);
		double count = (c / minn);

		cout << fixeed << setprecision(12) << count << "\n";
	}

	return 0;
}