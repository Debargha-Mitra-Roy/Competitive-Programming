/*
    LINK:   https://my.newtonschool.co/playground/code/ir46x346cg9j/
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string str = "";

        if (k > n)
            cout << -1 << '\n';

        else
        {
            if (k == 1)
            {
                if (n == 1)
                    cout << "a\n";

                else
                    cout << "-1\n";
            }

            else
            {
                for (int i = 0; i < n - (k - 2); i++)
                {
                    str = str + (char) ('a' + i % 2);
                }

                for (int i = 2; i < k; i++)
                {
                    str = str + (char) ('a' + i);
                }

                cout << str << "\n"
            }
        }
    }

    return 0;
}