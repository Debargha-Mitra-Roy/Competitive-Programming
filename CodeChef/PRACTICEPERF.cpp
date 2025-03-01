#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (auto it : arr)
    {
        it >= 10 ? count++ : count;
    }
    cout << count << "\n";
    return 0;
}