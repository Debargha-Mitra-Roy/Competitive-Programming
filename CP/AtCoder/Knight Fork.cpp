#include<iostream>
using namespace std;

#define mod (int)(1e9 + 7)

int fpow(int x, int y)
{
    int res = 1;
    x = x % mod;

    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1LL)
            res = (res * x) % mod;

        y = y >> 1LL;
        x = (x * x) % mod;
    }

    return res;
}

int dist_sq(int a, int b, int c, int d)
{
    return (fpow((a - c), 2) + fpow((b - d), 2));
}


bool solve(int x1, int y1, int x2, int y2)
{
    for (int i = x1 - 2; i <= x1 + 3; i++)
    {
        for (int j = y1 - 2; j <= y1 + 3; j++)
        {
            if (dist_sq(i, j, x1, y1) == 5 && dist_sq(i, j, x2, y2) == 5)
            {
                return true;
                break;
            }
        }
    }

    return false;
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (solve(x1, y1, x2, y2))
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}