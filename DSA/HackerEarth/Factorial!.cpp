/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return n;
        
    else
    {
        long long int count = 1;
        for (int i = 1; i <= n; i++)
        {
            count = count * i;
        }

        return count;
    }
}

int main()
{
    long long int n;
    cin >> n;

    cout << factorial(n) << "\n";

    return 0;
}