#include <iostream>
using namespace std;

int main()
{
    /* Switch - Case Statement */
    int a;
    cin >> a;

    switch (a)
    {

    case 100:
        cout << "111\n";
        break; // to break the switch fall

    case 12:
        cout << "222\n";
        break;

    case 93:
        cout << "333\n";
        break;

    default:
        cout << "000\n";

    }

    return 0;
}