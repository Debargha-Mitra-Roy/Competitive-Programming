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
    int count = 0;
    for (int i = 0; i < n; i++)
        if (v[i] == 1)
            count++;
    count > 0 ? cout << "HARD\n" : cout << "EASY\n";
    return 0;
}