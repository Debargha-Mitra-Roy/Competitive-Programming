/*
    LINK:   https://atcoder.jp/contests/abc236/tasks/abc236_a
*/

#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    string str;
    cin >> str;

    int a, b;
    cin >> a >> b;

    int n = str.length();

    swap(&str[a - 1], &str[b - 1]);

    cout << str << "\n";

    return 0;
}