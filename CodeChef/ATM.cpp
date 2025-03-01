#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    float remaining_amount = y - x - 0.50;
    cout << fixed << setprecision(2) << remaining_amount << "\n";
    return 0;
}