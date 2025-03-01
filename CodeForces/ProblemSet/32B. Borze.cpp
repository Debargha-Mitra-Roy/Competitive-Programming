#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    string ans = "";
    int i = 0, j = 1;
    while (i < n)
    {
        if ((str[i] == '.' && str[j] == '-') || (str[i] == '.' && str[j] == '\0'))
        {
            ans.push_back('0');
            i = i + 1;
            j = i + 1;
        }
        if (str[i] == '-' && str[j] == '.')
        {
            ans.push_back('1');
            i = i + 2;
            j = i + 1;
        }
        if (str[i] == '-' && str[j] == '-')
        {
            ans.push_back('2');

            i = i + 2;
            j = i + 1;
        }
        if (str[i] == '.' && str[j] == '.')
        {
            ans.push_back('0');
            ans.push_back('0');
            i = i + 2;
            j = i + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}