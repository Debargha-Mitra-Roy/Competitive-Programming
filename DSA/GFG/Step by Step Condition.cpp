/*

    Step by Step Condition:-

    Link:   https://practice.geeksforgeeks.org/problems/step-by-step-condition/1/
*/

#include <bits/stdc++.h>
using namespace std;

void isDivisibleByPrime(int);

void isDivisibleByPrime(int n)
{
    if (n % 11 == 0)
        cout << "Eleven" << endl;

    else
    {
        if (n % 3 == 0)
            cout << "Three" << endl;

        else
        {
            if (n % 2 == 0)
                cout << "Two" << endl;

            else
                cout << "-1" << endl;
        }
    }
}

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        isDivisibleByPrime(n);
    }

    return 0;
}