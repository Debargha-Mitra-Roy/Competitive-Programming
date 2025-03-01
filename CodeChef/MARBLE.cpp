#include <iostream>
#include <map>
using namespace std;

bool vowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<char, int> mpp;
        int v = 0, c = 0, maxVowel = 0, maxConsonent = 0, ans = 0;
        bool conso = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            else if (a[i] == '?')
            {
                vowel(b[i]) ? v++ : c++;
                mpp[b[i]]++;
            }
            else if (b[i] == '?')
            {
                vowel(a[i]) ? v++ : c++;
                mpp[a[i]]++;
            }
            else
                ((vowel(a[i]) && vowel(b[i])) || (!vowel(a[i]) && !vowel(b[i]))) ? ans += 2 : ans++;
        }
        for (auto it : mpp)
        {
            if (vowel(it.first))
                maxVowel = max(maxVowel, it.second);
            else if (!vowel(it.first))
                maxConsonent = max(maxConsonent, it.second);
        }
        cout << ans + min(2 * (c - maxConsonent) + v, 2 * (v - maxVowel) + c) << "\n";
    }
    return 0;
}