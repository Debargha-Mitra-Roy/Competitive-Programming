#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int one = 1, zero = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                zero++;
            else if (s[i] == '1' && s[i + 1] == '1')
                one++;
        }
        (one == n || zero == n) ? cout << 0 << "\n" : x > y ? cout << y << "\n" : cout << x << "\n";
    }
    return 0;
}