#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n / 2 == 1 ? cout << "NO\n" : n % 2 == 0 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}