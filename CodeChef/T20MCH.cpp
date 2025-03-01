#include <iostream>
using namespace std;

int main()
{
    int r, o, c;
    cin >> r >> o >> c;
    int rem = (20 - o);
    int remBall = (rem * 6);
    int remRun = (r - c);
    int maxRun = (remBall * 6);
    maxRun > remRun ? cout << "YES\n" : cout << "NO\n";
    return 0;
}