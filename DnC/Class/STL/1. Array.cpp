#include <iostream>
#include <array>
using namespace std;

int main()
{
    /* Normal */
    int arr[5] = {10, 4, 8, 7, 45};

    /* STL */
    array<int, 5> a = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << a.at(i) << " ";
    }
    cout << "\n";

    cout << "First element: " << a.front() << "\n";
    cout << "Last element: " << a.back() << "\n";

    cout << "Empty the array: " << a.empty() << " ";

    return 0;
}