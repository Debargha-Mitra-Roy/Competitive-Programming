#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int penalty = x + (10 * y);
    cout << penalty << "\n";
    return 0;
}