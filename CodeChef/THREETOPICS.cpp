#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < 3; i++)
        if (v[i] == n)
            count++;
    count > 0 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}