#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    x > n * 10 ? cout << floor((x - (n * 10)) / 20) << "\n" : cout << "0\n";
    return 0;
}