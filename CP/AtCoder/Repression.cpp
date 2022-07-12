/*
    LINK:   https://atcoder.jp/contests/abc207/tasks/abc207_a
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int first, second; // Initialize first and second largest element

    if (arr[0] > arr[1])
    {
        first = arr[0];
        second = arr[1];
    }
    else
    {
        first = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) // Traverse remaining array and find first and second largest elements in overall array
    {
        if (arr[i] > first) // If current element is greater than first then update both first and second
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) // If arr[i] is in between first and second then update second
            second = arr[i];
    }

    cout << first + second << "\n";
    
    return 0;
}