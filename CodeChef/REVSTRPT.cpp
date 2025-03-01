#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= n; j++)
            j >= i ? cout << "*" : cout << " ";
        cout << "\n";
    }
    return 0;
}