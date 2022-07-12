#include <iostream>
#include <map>
#include <set>
using namespace std;

set<string> ss;
map<string, int> mpp;

void f(string s, int i, string ans)
{
    if (i == 3)
    {
        // cout << ans << " #\n";

        ss.insert(ans);
        mpp[ans]++;
        return;
    }

    f(s, i + 1, ans);
    f(s, i + 1, ans + s[i]);

    // return;
}

int main()
{
    string s = "abaa", ans = "";
    int i = 0;

    f(s, i, ans);

    cout << "set: ";
    for (auto it : ss)
        cout << it << " ";
    cout << "\n";

    cout << "map\n";
    for (auto it : mpp)
        cout << it.first << " " << it.second << "\n";

    return 0;
}

/*
    Answer: set:  a aa ab aba b ba
            map
             1
            a 2
            aa 1
            ab 1
            aba 1
            b 1
            ba 1
*/