#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    y > x * 2 ? cout << "PLASTIC\n" : cout << "METAL\n";
    return 0;
}