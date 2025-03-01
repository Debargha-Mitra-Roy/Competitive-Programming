#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    (n % 5 == 0 || n % 6 == 0) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}