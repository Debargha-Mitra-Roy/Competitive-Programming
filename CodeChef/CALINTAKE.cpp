#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int extra_calories = x - (y * z);
    extra_calories < 0 ? cout << "-1\n" : cout << extra_calories << "\n";
    return 0;
}