#include <iostream>
using namespace std;

int digitSum(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        digitSum(n) % 2 == 0 ? digitSum(n + 1) % 2 != 0 ? cout << (n + 1) << "\n" : cout << (n + 2) << "\n" : digitSum(n + 1) % 2 == 0 ? cout << (n + 1) << "\n" : cout << (n + 2) << "\n";
    }
    return 0;
}