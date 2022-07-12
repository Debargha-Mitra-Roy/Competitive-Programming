/*
	Longest Consecutive 1's:-
	
	LINK:	https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1/

	Given a number N. Find the length of the longest consecutive 1s in its binary representation.
	
	Example 1:

		Input:
		N = 14
		Output: 
		3
		Explanation:
		Binary representation of 14 is 1110, in which 111 is the longest consecutive set bits of length is 3.

	Example 2:
	
		Input:
		N = 222
		Output: 
		4
		Explanation:
		Binary representation of 222 is 11011110, in which 1111 is the longest consecutive set bits of length 4.
	
	Your Task: 
		You don't need to read input or print anything. Your task is to complete the function maxConsecutiveOnes() which returns the length of the longest consecutive 1s in the binary representation of given N.

	Expected Time Complexity: O(log N).
	Expected Auxiliary Space: O(1).

	Constraints:
	1 <= N <= 106

*/

#include <iostream>
using namespace std;

class Solution
{
public:
    /* function to find the length of the longest consecutive 1s in binary representation of a number */
    int max_consecutive_ones(int x)
    {
        int count = 0;
        while (x != 0)
        {
            x = (x & (x << 1));

            count++;
        }

        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        /* Function call */
        Solution obj;
        cout << obj.max_consecutive_ones(n) << "\n";
    }

    return 0;
}