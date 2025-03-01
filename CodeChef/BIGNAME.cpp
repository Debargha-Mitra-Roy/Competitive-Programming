#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (auto it : str)
            it == 'z' ? count++ : count;
        string ans = "";
        if (count < n)
        {
            for (int i = 0; i < n; i++)
                ans += 'z';
            cout << ans << "\n";
        }
        else
            cout << "-1\n";
    }
    return 0;
}