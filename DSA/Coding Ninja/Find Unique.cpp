/*
	LINK :	https://www.codingninjas.com/codestudio/problems/find-unique_625159
*/

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
	int ans = 0;

	for (int i = 0; i < size; i++)
	{
		ans = ans ^ arr[i];
	}

	return ans;
}

int main()
{
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << findUnique(arr, n) << "\n";

	return 0;
}