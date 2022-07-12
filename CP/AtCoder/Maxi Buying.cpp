/*
    LINK:   https://atcoder.jp/contests/abc206/tasks/abc206_a
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if ((n * 108) / 100 == 206)
        cout << "so-so\n";

    else if ((n * 108) / 100 <= 206)
        cout << "Yay!\n";

    else if ((n * 108) / 100 >= 206)
        cout << ":(\n";
    
    return 0;
}