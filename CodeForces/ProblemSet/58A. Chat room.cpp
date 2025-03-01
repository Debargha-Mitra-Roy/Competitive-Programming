#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    string temp = "hello";
    int i = 0, count = 0;
    for (int j = 0; j < n; j++)
    {
        if (str[j] == temp[i])
        {
            i++;
            count++;
            if (count == 5)
                break;
        }
    }
    count == 5 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}