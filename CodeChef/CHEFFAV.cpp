#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string str1 = "code";
        string str2 = "chef";
        int count_a = 0, count_b = 0;
        size_t position = s.find(str1);
        if (position != string::npos)
            count_a = position;
        size_t found = s.find(str2);
        if (found != string::npos)
            count_b = found;
        count_a > count_b ? cout << "WA\n" : cout << "AC\n";
    }
    return 0;
}