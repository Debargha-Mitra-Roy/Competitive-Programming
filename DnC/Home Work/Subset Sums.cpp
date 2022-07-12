/*
	Subset Sums:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/subset-sums2234/1#

*/

#include <iostream>
using namespace std;

/* Prints sums of all subsets of arr[l..r] */
void subsetSums(int arr[], int l, int r, int sum = 0)
{
    /* Print current subset */
    if (l > r)
    {
        cout << sum << " ";
        return;
    }

    /* Subset including arr[l] */
    subsetSums(arr, l + 1, r, sum + arr[l]);

    /* Subset excluding arr[l] */
    subsetSums(arr, l + 1, r, sum);
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

    subsetSums(arr, 0, n - 1);

    return 0;
}