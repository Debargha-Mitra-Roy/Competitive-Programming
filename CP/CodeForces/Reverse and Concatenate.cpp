/*
    LINK:   https://codeforces.com/contest/1634/problem/0
*/

#include <iostream>
using namespace std;

bool isPalindrome(string &str, int n, int i)
{
	if (i >= n / 2)
		return true;

	if (str[i] != str[n - i - 1])
		return false;

	return isPalindrome(str, n, i + 1);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;

		string str;
		cin >> str;

		if (isPalindrome(str, n, 0) || k == 0)
			cout << "1" << endl;

		else
			cout << "2" << endl;
	}

	return 0;
}