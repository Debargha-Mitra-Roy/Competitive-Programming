/*
	Help the Old Man!!! :-

	LINK:	https://practice.geeksforgeeks.org/problems/help-the-old-man3848/1

	A poor old man works in a palace for a living. One day the old man's wife met with an accident. She needed an immediate operation but the old man's savings were not enough for the operation. He went running to the king to beg for money. The king told that he will not only pay the full amount for the operation but also double his salary. But for that the old man had to pass a test. The king showed him a pile of glass plates kept one above another, each one being smaller than the one beneath. The plates were kept in box 1. He had to transfer the plates to box 3 using box 2. However, there were some constraints. The old man could only take one plate at a time and he could only place a smaller plate on top of a larger plate. He could take a plate only from the top. Help the old man do so. There are N plates and he has to tell the nth move in the format (i, j) where a plate is being moved from i th box to j th box.

	Note:
		Given any number of plates, they can be transferred from box 1 to box 3 using box 2 using the following steps.
		Step 1: Transfer first N-1 plates from box 1 to box 2 using box 3.
		Step 2: Transfer the remaining plate from box 1 to box 3.
		Step 3: Transfer the first N-1 plates from box 2 to box 3 using box 1.

	Example 1:
	
		Input: N = 2, n = 2
		Output: 1 3
		Explaination:  The plate on top of box 1 is first transferred to box 2. The second plate from box 1 is transferred to box 3 and finally the plate from box 2 is transferred to box 3. In each situation, all the constraints are satisfied. You are required to print the 2nd move which is "Move plate from box 1 to box 3", hence 1 3.

	Example 2:
	
		Input: N = 3, n = 4.
		Output: 1 3
		Explaination: The movements of plates will be from 1 to 3. Then from 1 to 2. Then from 3 to 2. And finally 4th move from 1 to 3.

	Your Task:
		You do not need to read input or print anyting. Your task is to complete the function shiftPile() which takes N and n as input parameters and returns the nth move in a list.	
	
	Expected Time Complexity: O(2N)
	Expected Auxiliary Space: O(1)
	
	Constraints:
	1 ≤ N ≤ 20
	1 ≤ n ≤ 1000

*/

#include <iostream>
using namespace std;

static int c, m;

void help_the_old_man(int n, int s, int a, int d)
{
    if (n > 0)
    {
        help_the_old_man(n - 1, s, d, a);

        c++;

        if (m == c)
        {
            cout << s << " " << d << "\n";
        }

        help_the_old_man(n - 1, a, s, d);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> m;

        c = 0;

        help_the_old_man(n, 1, 2, 3);
    }
    return 0;
}