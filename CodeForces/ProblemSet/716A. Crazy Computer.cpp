#include <iostream>
using namespace std;

int main()
{
    long long int n, c;
    cin >> n >> c;
    long long int time, flag;
    cin >> time;
    int count = 1;
    for (long long int i = 1; i < n; i++)
    {
        cin >> flag;
        c >= (flag - time) ? count++ : count = 1;
        time = flag;
    }
    cout << count << "\n";
    return 0;
}