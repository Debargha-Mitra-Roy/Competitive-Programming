#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n < 10 ? cout << "Thanks for helping Chef!\n" : cout << "-1\n";
    }
    return 0;
}