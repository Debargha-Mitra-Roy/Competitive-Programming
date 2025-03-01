#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int count = 52 % k;
        cout << count << "\n";
    }
    return 0;
}