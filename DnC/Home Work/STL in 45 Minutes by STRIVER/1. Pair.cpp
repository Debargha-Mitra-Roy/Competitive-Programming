#include <iostream>
using namespace std;

void Explain_Pair()
{
    pair<int, int> p = {1, 3};

    // prints 1 3
    cout << p.first << " " << p.second << "\n";

    pair<int, pair<int, int>> p = {1, {3, 4}};

    // prints 1 4 3
    cout << p.first << " " << p.second.second << " " << p.second.first << "\n";

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    // Prints 5
    cout << arr[1].second << "\n";
}

int main()
{
    Explain_Pair();

    return 0;
}