#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        sort(str.begin(), str.end());
        cout << str << "\n";
    }
    return 0;
}