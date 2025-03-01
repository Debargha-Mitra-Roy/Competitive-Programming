#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        for (auto it : str)
            it == '4' ? count++ : count;
        cout << count << "\n";
    }
    return 0;
}