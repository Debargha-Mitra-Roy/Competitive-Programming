#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    vector<int> v(n);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    int countV = 0, countP = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i] != v[j])
                countV++;
    return 0;
}