#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, t;
		cin >> s >> t;
		for (int i = 0; i < 5; i++)
			s[i] == t[i] ? cout << "G" : cout << "B";
		cout << "\n";
	}
	return 0;
}