#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int count = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] > h ? count = count + 2 : count++;
    }
    cout << count << "\n";
    return 0;
}