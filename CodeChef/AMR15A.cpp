#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    pair<int, int> p = {0, 0};
    for (int i = 0; i < n; i++)
        v[i] % 2 == 0 ? p.first++ : p.second++;
    p.first > p.second ? cout << "READY FOR BATTLE\n" : cout << "NOT READY\n";
    return 0;
}