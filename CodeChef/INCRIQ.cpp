#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int iq = (n + 7);
    iq > 170 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}