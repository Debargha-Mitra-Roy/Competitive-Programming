/*
    LINK:   https://codeforces.com/problemset/problem/510/A
*/

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            bool haveSnake = false;

            if (i % 2 == 1)
                haveSnake = true;

            else
            {
                if (i % 4 == 2)
                    haveSnake = (j == y);

                if (i % 4 == 0)
                    haveSnake = (j == 1);
            }

            cout << (haveSnake ? "#" : ".");
        }
        cout << "\n";
    }

    return 0;
}