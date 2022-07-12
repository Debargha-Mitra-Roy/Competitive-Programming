/*
    LINK:   https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisibe-or-2d8e196a/
*/

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n, sum = 0;
    cin >> n;

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; i++) // considering first half elements
    {
        while (arr[i] >= 10) // using this you can find first digit of a number
        {
            arr[i] = arr[i] / 10;
        }

        if (i % 2 == 0) //  see note below
        {
            sum = sum + arr[i];
        }

        else
        {
            sum = sum + (arr[i] * -1);
        }
    }

    for (int i = n / 2; i < n; i++) // considering next half elements
    {
        arr[i] = arr[i] % 10; // using this you can find the last digit of a number

        if (i % 2 == 0)
            sum = sum + arr[i];

        else
            sum = sum + (arr[i] * -1);
    }

    if (sum == 0 || abs(sum) % 11 == 0)
        cout << "OUI\n";

    else
        cout << "NON\n";

    return 0;
}

/* 
    To understand the solution, we must know the divisibility rule for 11 i.e we have to consider the digits at even places as well as odd places of the final number formed. If we put the rule in simple way, we can say that given a number, if we add all the digits at even places and then subtract the summation of digits at odd places , the resultant must be divisible by 11 or the result is 0.

    For example: consider the number : 188452

        sum of digits at even places = 1 + 8 + 5 = 14
        sum of digits at even places = 8 + 4 + 2 = 14

    Now, (14 - 14) = 0 which means 188452 is divisible by 11.

    What i have done in the question is, consider a variable sum which is initially equal to zero. If the digit is at even place we will add it to sum and update it's value. If the digit is at odd place we will subtract it from the sum and update it's value. Doing this will give us the desired result. Now with the help of sum value we can find out whether the number formed is divisible by 11 or not.
*/