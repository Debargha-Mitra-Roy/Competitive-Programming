#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
            i % 2 == 0 ? v[i] = i + 2 : v[i] = i;
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
    }
    else
        cout << -1;
    return 0;
}