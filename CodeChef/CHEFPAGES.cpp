#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    n == 0 ? cout << "https://www.codechef.com/practice\n" : x == 0 ? cout << "https://www.codechef.com/contests\n" : cout << "https://discuss.codechef.com\n";
    return 0;
}