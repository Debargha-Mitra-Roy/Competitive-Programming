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
        int count = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int flag;
            cin >> flag;
            count = count + (flag % 2);
        }
        count == n ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}