#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            count++;
    if (n > 1 && count == 0)
        return true;
    else
        return false;
}

bool nextPrime(int a, int b)
{
    int count = 0;
    if (isPrime(a) && isPrime(b))
    {
        for (int i = a + 1; i < b; i++)
            if (isPrime(i))
                count++;
        if (count == 0)
            return true;
        else
            return false;
    }
    else
        return false;
}

int main()
{
    int a, b;
    cin >> a >> b;
    nextPrime(a, b) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}