/*
	LINK:	https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/
*/

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.length();
    int count = 0;
    int flag = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
            count++;

        else if (s[i] == 'o')
            flag++;
    }

    if (2 * count == flag)
        cout << "Yes";

    else
        cout << "No";

    return 0;
}