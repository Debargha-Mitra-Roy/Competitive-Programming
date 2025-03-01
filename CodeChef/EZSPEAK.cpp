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
        {
            it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' ? count = 0 : count++;
            if (count >= 4)
                break;
        }
        count >= 4 ? cout << "NO\n" : cout << "YES\n";
    }
    return 0;
}