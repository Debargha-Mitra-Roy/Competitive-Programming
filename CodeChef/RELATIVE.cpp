#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int g, c;
        cin >> g >> c;
        long long int v = ceil(pow(c, 2));
        long long int h = v / (2 * g);
        cout << h << "\n";
    }
    return 0;
}