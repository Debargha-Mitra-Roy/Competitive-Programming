#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string strA, strB, strC;
    cin >> strA >> strB >> strC;
    int n = strA.length() + strB.length();
    int m = strC.length();
    string str = strA + strB;
    sort(str.begin(), str.end());
    sort(strC.begin(), strC.end());
    n == m && str == strC ? cout << "YES\n" : cout << "NO\n";
    return 0;
}