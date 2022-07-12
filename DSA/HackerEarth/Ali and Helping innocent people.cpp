/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[2] != 'A' && s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2] != 'U' && s[2] != 'Y')
    {
        if ((s[0] + s[1]) % 2 == 0 && (s[3] + s[4]) % 2 == 0 && (s[4] + s[5]) % 2 == 0 && (s[7] + s[8]) % 2 == 0)
        {
            cout << "valid\n";
        }

        else
        {
            cout << "invalid\n";
        }
    }

    else
    {
        cout << "invalid\n";
    }

    return 0;
}