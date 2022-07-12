/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int product = 1;

    for (int i = 0; i < n; i++)
    {
        product = (product * arr[i]) % 1000000007;
    }

    cout << product << "\n";

    return 0;
}