#include <iostream>
using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
        cout << ((num >> i) & 1);
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n <= 5 ? cout << "0\n" : cout << ((n - 6) / 7) + 1 << "\n";
    }
    return 0;
}