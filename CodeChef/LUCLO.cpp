#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int leaves = 4 + ((n - 1) * 3);
    cout << leaves << "\n";
    return 0;
}