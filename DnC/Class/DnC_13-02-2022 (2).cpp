#include <iostream>
using namespace std;

int main()
{
    /* Continue Statement */
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";

        if (i > 5)
            continue; // skip this part

        cout << (i * 2) << "\n";
    }
    cout << "\n\n";

    for (int i = 1; i <= 10; i++)
    {

        if (i == 7 || i == 5)
            continue; // skip this part

        cout << i << " ";
        cout << i * 2 << "\n";
    }
    cout << "\n\n";

    /* Break Statement */
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " ";

        if (i == 6)
            break; // break and exit the loop

        cout << (i * 2) << "\n";
    }

    return 0;
}