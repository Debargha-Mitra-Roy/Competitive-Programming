#include <iostream>
using namespace std;

int main()
{
    /* Maximum & Minimum Value of an Array */
    int arr[100];

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int minn = arr[0];
    int maxx = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= maxx)
            maxx = arr[i];

        if (arr[i] <= minn)
            minn = arr[i];

        cout << maxx << " " << minn << "\n";
    }

    cout << "Maximum value of the array is : " << maxx << "\n";
    cout << "Minimum value of the array is : " << minn << "\n";

    return 0;
}