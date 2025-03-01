#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        str[i] == str[i + 1] ? count++ : count = 0;
        if (count >= 6)
            break;
    }
    count >= 6 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}