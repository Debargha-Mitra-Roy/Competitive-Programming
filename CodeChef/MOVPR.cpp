#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int a = (2 * x) + (3 * y);
    int b = (2 * z) + y;
    cout << min(a, b);
    return 0;
}