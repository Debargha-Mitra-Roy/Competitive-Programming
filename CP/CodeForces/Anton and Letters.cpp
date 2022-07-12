/*
    LINK:   https://codeforces.com/problemset/problem/443/A
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int n = str.length();

    set<char> st;

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            st.insert(str[i]);

        else
            continue;
    }

    cout << st.size() << "\n";

    return 0;
}
