#include <iostream>
#include <string>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    string s1, s2, s;
    cin >> s1 >> s2;

    s = s1 + s2;

    swap(&s1[0], &s2[0]);

    int n1 = s1.size(), n2 = s2.size();

    cout << n1 << " " << n2 << "\n";
    cout << s << "\n";
    cout << s1 << " " << s2 << "\n";

    return 0;
}