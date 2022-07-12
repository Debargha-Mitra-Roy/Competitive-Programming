/*
    231. Power of Two :- (Brute Force)

	LINK:	https://leetcode.com/problems/power-of-two/
*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i <= 30; i++)
        {
            int ans = pow(2, i);

            if (ans == n)
                return true;
        }

        return false;
    }
};