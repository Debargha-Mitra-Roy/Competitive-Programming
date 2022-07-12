#include <iostream>
#include <set>
using namespace std;

set<string> ss;

int main()
{
    string s = "aaa", ans = "";
    for (int i = 0; i <= 7; i++)
    {
        int x = i;
        int id = 0;
        ans = "";

        while (x)
        {
            if (x % 2)
                ans += s[id];
            id++;
            x = x / 2;
        }
        // cout << " #\n";

        ss.insert(ans);
    }

    for (auto it : ss)
        cout << it << " ";
    cout << "\n";

    return 0;
}

/*
    Answer:  a aa aaa
*/