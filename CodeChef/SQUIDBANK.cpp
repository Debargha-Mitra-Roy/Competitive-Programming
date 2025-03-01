#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int amount = 10000 * (n - k);
    cout << amount << "\n";
    return 0;
}