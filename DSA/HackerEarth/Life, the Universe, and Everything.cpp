/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n != 42)
    {
        cout << n << "\n";

        cin >> n;
    }

    return 0;
}