#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cin >> a;

    if (a > 90)
    {
        cout << "A";
    }
    else if (a > 80)
    {
        cout << "B";
    }
    else if (a > 70)
    {
        cout << "C";
    }
    else
    {
        cout << "D";
    }

    cout << "\n\n";

    if (a % 2 == 0)
        cout << "EVEN\n";

    if (a % 2)
        cout << "ODD\n";

    if (a % 5 == 0)
        cout << "Divisible by 5\n";

    return 0;
}