/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
*/

#include <iostream>
using namespace std;

int main()
{
    int l, r, k;
    cin >> l >> r >> k;

    int count = 0;

    for (int i = l; i <= r; i++)
    {
        if (i % k == 0)
            count++;

        else
            continue;
    }

    cout << count << "\n";

    return 0;
}