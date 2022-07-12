#include <iostream>
using namespace std;

int main()
{
    /* For Loop */
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " "; // prints 1 to 5
    }
    cout << "\n";

    /* While Loop */
    int j = 1;
    while (j <= 5)
    {
        cout << j << " "; // prints 1 to 5
        j++;               // after 5 'j' turns to 6
    }
    cout << "\n";

    /* do-while loop */
    j = 10;
    do
    {
        cout << j << "\n"; // prints only 10 and exit the loop
        j++;
    } while (j <= 5); // notice that there is a ';' after while

    return 0;
}