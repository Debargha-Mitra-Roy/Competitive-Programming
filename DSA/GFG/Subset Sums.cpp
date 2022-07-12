/*
	Subset Sums:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/subset-sums2234/1#

	Given a list arr of N integers, print sums of all subsets in it.
	
	Example 1:
	
		Input:
		N = 2
		arr[] = {2, 3}
		Output:
		0 2 3 5
		Explanation: 
			When no elements is taken then Sum = 0.
			When only 2 is taken then Sum = 2.
			When only 3 is taken then Sum = 3.
			When element 2 and 3 are taken then Sum = 2 + 3 = 5.
	
	Example 2:
	
		Input:
		N = 3
		arr = {5, 2, 1}
		Output:
		0 1 2 3 5 6 7 8
	
	Your Task:  
		You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer N as an input parameter and return the list/vector of all the subset sums.
	
	Expected Time Complexity: O(2N)
	Expected Auxiliary Space: O(2N)
	
	Constraints:
	1 <= N <= 15
	0 <= arr[i] <= 104

*/

#include <iostream>
using namespace std;

/* Iterative C++ program to print sums of all possible subsets.*/
class Solution
{
public:
    /* Prints sums of all subsets of arr[l..r] */
    void subsetSums(int arr[], int n)
    {
        /* There are totoal 2^n subsets */
        long long total = 1 << n;

        /* Consider all numbers from 0 to (2^n - 1) */
        for (long long i = 0; i < total; i++)
        {
            long long sum = 0;

            /* Consider binary representation of current i to decide which elements to pick. */
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                    sum = sum + arr[j];
            }

            /* Print sum of picked elements. */
            cout << sum << " ";
        }
    }
};

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    /* Function call */
    Solution obj;
    cout << obj.subsetSums(arr, n) << "\n";

    return 0;
}