#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int clear_days = 7 - (x + y);
    cout << clear_days << "\n";
    return 0;
}