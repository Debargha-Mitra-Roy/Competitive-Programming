/*
    Find the Interest and Total value with the help of 'Simple Interest' Formula ie. I = (P * R * T) / 100;
    Where, P = Principle, R = Rate, T = Time.
*/

#include <iostream>
using namespace std;

int main()
{
	// Enter Principle (in Rs/-);
	int p;
	cin >> p;

	// Enter Rate (in %);
	int r;
	cin >> r;

	// Enter Time (in Month);
	int t;
	cin >> t;

	int interest = (p * r * t) / 100;
	cout << "Interest = " << interest << "\n";

	int total = p + interest;
	cout << "Total = " << total << "\n";

	return 0;
}