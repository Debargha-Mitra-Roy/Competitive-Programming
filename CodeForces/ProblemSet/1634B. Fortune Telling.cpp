#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count = count + v[i];
        }
        int total = count + x + y;
        total % 2 == 0 ? cout << "Alice" << "\n" : cout << "Bob" << "\n";
    }
    return 0;
}