#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, H, M, h, m;
        cin >> n >> H >> M;
        int x = (H * 60) + M;
        int ans = 100005;
        while (n--)
        {
            cin >> h >> m;
            int y = h * 60 + m;
            if (y < x)
                y += (24 * 60);
            ans = min(ans, y - x);
        }
        int h_ans = ans / 60;
        int m_ans = ans % 60;
        cout << h_ans << " " << m_ans << "\n";
    }
    return 0;
}