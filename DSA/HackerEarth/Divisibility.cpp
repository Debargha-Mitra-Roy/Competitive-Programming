/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
*/

#include <iostream>
using namespace std;

void divisibility(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count = arr[i] % 10;
    }
    
    count = 10 + count;

    if (count % 10 == 0)
        cout << "Yes\n";

    else
        cout << "No\n";
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

    divisibility(arr, n);

    return 0;
}