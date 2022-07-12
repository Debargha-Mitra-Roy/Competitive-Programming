/*
    231. Power of Two :- (Optimal Solution)

	LINK:	https://leetcode.com/problems/power-of-two/

    Given an integer n, return true if it is a power of two. Otherwise, return false.

    An integer n is a power of two, if there exists an integer x such that n == 2x.


    Example 1:
    
    Input: n = 1
    Output: true
    Explanation: 2^0 = 1


    Example 2:
    
        Input: n = 16
        Output: true
        Explanation: 2^4 = 16


    Example 3:
    
        Input: n = 3
        Output: false


    Example 4:
    
        Input: n = 4
        Output: true


    Example 5:
    
        Input: n = 5
        Output: false


    Constraints:
    
        -2^31 <= n <= 2^31 - 1


    Follow up: Could you solve it without loops/recursion?
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;

        if (n > 0)
        {
            n = n & (n - 1);

            if (n == 0)
                return true;
        }

        return false;
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

        Solution obj;

        if (obj.isPowerOfTwo(n))
            cout << "true\n";

        else
            cout << "flase\n";
    }

    return 0;
}