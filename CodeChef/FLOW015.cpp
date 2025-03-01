#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int year;
        cin >> year;
        int day = (5 * ((year - 1) % 4) + 4 * ((year - 1) % 100) + 6 * ((year - 1) % 400)) % 7;
        switch (day)
        {
        case 0:
            cout << "monday\n";
            break;
        case 1:
            cout << "tuesday\n";
            break;
        case 2:
            cout << "wednesday\n";
            break;
        case 3:
            cout << "thursday\n";
            break;
        case 4:
            cout << "friday\n";
            break;
        case 5:
            cout << "saturday\n";
            break;
        case 6:
            cout << "sunday\n";
            break;
        }
    }
    return 0;
}