/*
    LINK:   https://codeforces.com/problemset/problem/266/B
*/

#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    int len = str.size();

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {

                swap(&str[j], &str[j + 1]);

                j++;
            }
        }
    }

    cout << str << "\n";

    return 0;
}